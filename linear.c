#include<stdio.h>
int linear_search(int arr[],int size,int key)
{
    for (int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,key,position;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter number of elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        position=linear_search(arr,n,key);
        if (position==-1)
        {
            printf("elements %d not found in the array.\n",key);
        }
    }



    }

