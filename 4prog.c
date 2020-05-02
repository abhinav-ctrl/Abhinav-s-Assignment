#include <stdio.h>
int main()
{
  int arr[50], n, i, j, temp, sum = 0, product = 1, k;  /* Initialising the array and declaring variables*/

  printf("Enter number of elements in the array\n");    /* Asking the user to enter number of elements*/
  scanf("%d", &n);
 for (i = 0; i < n; i++)
  {
     printf("Enter %dth integer\n", i);                /* storing the elements in the array given by the user*/
     scanf("%d", &arr[i]);
  }

  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j+1])                       /* By using this logic we are sorting the array in ascending order*/
      {
        temp       = arr[j];
        arr[j]   = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  printf("Sorted array in ascending order is :\n");        /* printing the sorting array*/

  for (i = 0; i < n; i++)
  {
     printf("%d\n", arr[i]);
  }
printf("Sorted array in alternate order is : \n");         /* By using i=i+2 in the loop we are printing the elements in alternate order*/
 for(i=0;i<n;i=i+2)
 {
    printf("%d\n", arr[i]);
 }
printf("Sum of all the elements in odd positions are : \n");  /* by using sum=sum+arr[i] we are adding the elements in the array*/
 for(i=0;i<n;i=i+2)
 {
    sum = sum + arr[i];
  printf("%d\n", sum);
 }
printf("Product of all the elements in even position : \n");   /* by using product=product*arr[i] we are multiplying the elements in the array*/
 for(i=1; i<n; i=i+2)
 {
    product = product * arr[i];
    printf("%d\n", product);
 }
printf("Enter a number to check divisibility : \n");
scanf("%d", &k);
printf("Elements divisible by %d are : \n", k);               /* by using modulus operator we are checking the divisibility condition in the array*/
  for(i=0; i<n; i++)
  {
      if(arr[i]%k==0)
      {
          printf("%d\n", arr[i]);
      }
  }
return 0;
}