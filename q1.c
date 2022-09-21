// Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int max(int arr[10],int );
int main()
{
    int n;
    printf("How many numbers you want to store in the array: ");
    scanf("%d",&n);
    int arr[n];
    int largest=max(arr,n);
    printf("Maximum number in the given element: %d",largest);
}
int max(int arr[],int n)
{
    int i;
printf("Enter the elements: ");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int max=arr[0];

for(i=1;i<n;i++)
{
    if( max<arr[i])
    {
        max=arr[i];
    }
}
return max;
}