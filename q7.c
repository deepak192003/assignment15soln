// Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int duplicate_element(int arr[],int);
int main()
{
    int n,count_duplicate;
    printf("Enter the size of an array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    count_duplicate=duplicate_element(arr,n);
printf("total number of duplicate elements in an array is %d",count_duplicate);
return 0;
}
int duplicate_element(int arr[],int n)
{
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( arr[i]==arr[j])
            {
                count++;
            }
        }
    }
    return count;
}