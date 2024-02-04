#include<stdio.h>


void SelectionShort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
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
    printf("Enter the elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    SelectionShort(arr,n);
    printf("Assending order of the elements :\n");
    print(arr,n);
    return 0;
}