#include<stdio.h>
void merge_sort(int a[], int i, int j);                         /*by using the merge sort we are dividing the array into two halves we are sorting the two arrays individually*/
void merge(int a[], int i1, int j1, int i2, int j2);           /* After completion of sorting of two arrays we are merging the two arays to get sorted array */
int main()
{
    int arr[100], n, i, k, product;
    printf("\nEnter the number of elements in the array : \n");
    scanf("%d", &n);
    
    printf("\nEnter array elements in the array : ");           /* Asking the user to enter the elements in the array*/
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, n-1);                                    /* we are calling the merge_sort function to sort the array*/
    
    printf("\nSorted array is :");
    
    for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nEnter the value of k less than %d :",n );           /* Asking the user to enter the k value*/
    scanf("%d", &k);
    product = arr[k]*arr[n-k];                                       /* we are taking the product of kth elements from first and last where k is given by the user*/
    printf("\nProduct of two elements is %d", product);
}

void merge_sort(int arr[], int i, int j)                      /* by using this logic we will divide the array into two halves and sort them individually*/
{
    int mid;
    
    if(i<j)
    {
        mid = (i+j)/2;
        merge_sort(arr, i, mid);
        merge_sort(arr, mid + 1, j);
        merge(arr, i, mid, mid + 1, j);
    }
}
void merge(int arr[], int i1, int j1, int i2, int j2)          /* After sorting the two individual arrays by using this merge function we will merge the array and make them in sorted manner*/
{
    int temp[100];
    int i, j, k;
    i = i1;
    j = i2; 
    k =0;
    
    while(i<=j1 && j<=j2)
    {
        if(arr[i]<arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++]=arr[j++];
            
    }
    
    while (i<=j1)
        temp[k++] = arr[i++];
    
    while(j<=j2)
        temp[k++] = arr[j++];
        
    for(i=i1, j=0; i<=j2; i++, j++)
        arr[i] = temp[j];
}