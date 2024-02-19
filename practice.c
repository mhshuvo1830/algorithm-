#include<stdio.h>
#include<string.h>

int Search( char arr[][50],int size,char *Name)
{
    for(int i=0;i<size;i++)
    {
        if(strcmp(arr[i],Name)==0)
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    
    int n;
    printf("Number of people you want to enter :\n");
    scanf("%d",&n);
    char fullName[n][50];

    for(int i=0;i<n;i++)
    {
        scanf("%s",&fullName[i]);
    }

   char name[50];
   printf("Enter the name you want to search :\n");

   scanf("%s",name);

   int result =  Search(fullName,n,name);

    if(result==1)
    {
        printf("Found\n");
    } 
    else
    {
        printf("Not found\n");
    }
    
    return 0;
}