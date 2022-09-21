// Write a function in C to count the frequency of each element of an array
#include<stdio.h>
void  count_frequency(int arr[],int);
int main()
{
    int n;
    printf("Enter the elements of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
count_frequency(arr, n);
}
void count_frequency(int arr[],int n)
{
    int count;
    int i,j;
    for(i=0;i<n;i++)
{
    count=1;
    for(j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
            printf("%d comes %d times",arr[i],count);
        }
        if(arr[i]!=arr[j])
        {
            printf("%d comes %d times",arr[i],count);
        }
    }
}
}