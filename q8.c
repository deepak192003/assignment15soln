// Write a function in C to print all unique elements in an array.
#include<stdio.h>
void unique_element(int arr[],int);
int main()
{
    int n,i;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    unique_element(arr,n);
    return 0;
}
void unique_element(int arr[],int n)
{
    int i,j,temp;
    printf("Unique element is :");
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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( arr[i]==arr[j])
            {
                break;
            }
            else
            {
                printf("%d",arr[i]);
            }
        }
    }

}