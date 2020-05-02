#include <stdio.h>
 
void binary(int [], int, int, int);   /*declaring two functions sorting function is to sort the elements in the array*/
void sorting(int [], int);            /* binary function is to implement binary search in the array*/
 
int main()
{
    int num, length, i,x,y,sum,product;  /* Initialising the array and declaring the variables */
    int arr[100];
 
    printf("Enter length of the array: ");
    scanf("%d", &length);
    printf("Enter elements in the array\n");
    for(i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    sorting(arr, length);                        /* we are calling the sorting function to sort the elements in the array*/
    printf("\n");
    printf("Enter number to search in the array\n");
    
    scanf("%d", &num);
    binary(arr, 0, length, num);                   /* by using binary function we are searching the element given by the user*/
}
void sorting(int arr[], int length)                /* Inside the function*/
{
    int temp, i, j,sum,product,x,y;
    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            if (arr[i] > arr[j])                  /* by using this logic we are sorting the elements in descending order*/
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array is : \n");
    for(i=0;i<length;i++)
        printf("%d\t", arr[i]);
        
    printf("\nEnter the first position in the array: \n");    /* we are asking the user to enter the two positions in the array*/
    scanf("%d", &x);
    printf("\nEnter the second position in the array : \n");
    scanf("%d", &y);
   if(x>length || y>length)
   {
    printf("Enter valid positions");
   }
   else
   {
     sum = arr[x]+arr[y];
     printf("\nSum of two numbers is : %d", sum);               /* we are calculating the sum and product of the particular two positions in the array given by the user*/
     product = arr[x]*arr[y];
     printf("\nProduct of two numbers is : %d", product);
   }
}
 
void binary(int arr[], int x, int y, int num)
{
    int mid;
 
    if (x > y)
    {
        printf("Number is not found in the array\n");
        return;
    }
    mid = (x + y) / 2;
    if (arr[mid] == num)
    {
        printf("Number is not found in the array\n");          /* by using this logic we are implementing the binary search */
    }
    else if (arr[mid] > num)
    {
        binary(arr, x, mid - 1, num);
    }
    else if (arr[mid] < num)
    {
        binary(arr, mid + 1, y, num);
    }
}