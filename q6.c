// Write a function in C to read n number of values in an array and display it in reverse 
// order
#include<stdio.h>
void reverse(int arr[],int);
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    return 0;
}
void reverse(int arr[],int n)
{
    int i,temp;
   
    printf("After reverse the array: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}