// Write a function to find the first occurrence of adjacent duplicate values in the array. 
// Function has to return the value of the element.
#include<stdio.h>
int adjacent_duplicate_element(int arr[],int);
int main()
{
    int n,duplicate_values;
    int i;
    printf("Enter the size of an array:");
    scanf("%d",&n);
int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {   
        scanf("%d",&arr[i]);
    }

    duplicate_values=adjacent_duplicate_element( arr,n);
    printf("Duplicate Element is %d",duplicate_values);

    return 0;
}
int adjacent_duplicate_element(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if( arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
}
