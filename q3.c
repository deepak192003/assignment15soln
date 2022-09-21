// Write a function to sort an array of any size. (TSRN)
#include<stdio.h>
void sort(int arr[100],int);
int main()
{
    int  n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    sort( arr,n);
    return 0;
}
void sort(int arr[],int n)
{
    int i,j;
    int temp;
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(  arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("After sorting the elements");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
