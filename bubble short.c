#include<stdio.h>
#include<stdlib.h>
void BubbleShort(int arr[],int size)
{
    for(int a=0;a<size-1;++a)
    {
        for(int b=0;b<size-a-1;++b)
        {
            if(arr[b]>arr[b+1])
            {
                int temp= arr[b];
                arr[b]= arr[b+1];
                arr[b+1]= temp;
            }
        }
    }
}
void print(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Number of elements :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements :\n",n);
    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    BubbleShort(arr,n);
    printf("After bubble sort :\n");
    print(arr,n);
    return 0;
}