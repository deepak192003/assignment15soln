/*Write a function to rotate an array by n position in d direction. The d is an indicative 
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include<stdio.h>
void rotate(int arr[],int,int,int);
int main()
{
    int n,p;
    char d;

    printf("Enter the character l or L for left direction or r and R for right direction:");
    scanf("%s",&d);

    printf("Enter the size of an array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the position number to shift:");
    scanf("%d",&p);

    rotate(arr,n,p,d);
    return 0;
}
void rotate(int arr[],int n,int p,int d)
{
int i,j,temp;
    printf("Enter the elemements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     if(  d=='L'|| d=='l')
     {
       for(j=0;j<p;j++)
         {
            temp=arr[0];
             for(i=0;i<n;i++)
                 {
                    arr[i]=arr[i+1];
                 }
                 arr[n-1]=temp;
         }
         printf("After rotating the element in left direction is ");
         for(i=0;i<n;i++)
         {
            printf("%d\n",arr[i]);
         }
     }
     if( d=='r'|| d=='R')
     {
        for(j=0;j<p;j++)
        {
            temp=arr[n-1];
            for(i=n-1;i>=1;i--)
            {
                arr[i]=arr[i-1];
            }
                    arr[0]=temp;
        }
printf("After rotating the element in right direction is ");

    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
  }
}