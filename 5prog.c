#include <stdio.h>
void binary(int [], int, int, int);                /*here we are defining two functions because binary search is used for sorted arrays only*/
void sorting(int [], int);                         /*Sorting function will sort the array and binary function will execute the binary search*/
int main()
{
    int num, length, i;                            /*Declaring the variables*/
    int arr[100];                                  /*initialising the array*/
 
    printf("Enter length of the array: ");         /*Asking the user to enter the length of the array*/
    scanf("%d", &length);
    printf("Enter elements for the array\n");      /*Asking the user to enter the elements until the loop terminates*/
    for(i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    sorting(arr,length);                           /*After user enters the element we need to sort them so we will call the sorting function to sort the array*/                     
    printf("\n");
    printf("Enter number to search in the array\n");/*After sorting we will ask the user to search the element in the array*/
    
    scanf("%d", &num);
    binary(arr, 0, length, num);                   /*By using binary function it will search for the element in the array*/
 
}
 
void sorting(int arr[], int length)                /*inside the function*/
{ 
    int temp, i, j;
    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            if (arr[i] > arr[j])                   /*by using this logic we are sorting the elements in ascending order*/
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
 
void binary(int arr[], int x, int y, int num)      /*inside the binary function*/
{
    int mid;
 
    if (x > y)
    {
        printf("Number is  not found in the array\n");
        return;
    }
    mid = (x + y) / 2;
    if (arr[mid] == num)
    {
        printf("Number is found in the array\n");     /*this is the logic for the binary search*/
    }
    else if (arr[mid] > num)
    {
        binary(arr, x, mid - 1, num);                      /*here we are recursive method to implement binary search*/
    }
    else if (arr[mid] < num)
    {
        binary(arr, mid + 1, y, num);                     /*here the function calls recursively until it gets the output*/
    }
}

