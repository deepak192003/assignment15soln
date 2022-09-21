// Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int min(int arr[100],int);
int main()
{
    int n;
    
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    int minimum=min( arr,n);
    printf("Smallest number from the array is %d",minimum);
return 0;
}
int min(int arr[],int n)
{
    int i;

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
{
        scanf("%d",&arr[i]);
    }
   int  min=arr[0];
for(i=1;i<n;i++)
{
    if( min>arr[i])
    {
        min=arr[i];
    }
}
    
    return min;
}