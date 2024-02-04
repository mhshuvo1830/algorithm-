#include<stdio.h>
#include<string.h>

#define MAX_SIZE 100

typedef struct phoneBook
{
    char name[50];
    char number[15];
}person;

void sort(person arr[],int size)
{
   for(int a=0;a<size-1;a++)
   {
    for(int b=0;b<size-a-1;b++)
    {
        if(arr[b].number>arr[b+1].number)
        {
            person temp = arr[b];
            arr[b] = arr[b+1];
            arr[b+1] = temp;
        }
    }
   }
}
int BinarySearch(const person arr[],int size, const char *Name)
{
    int l=0;
    int r=size-1;
   
    while(l<=r)
    {
 int mid=(l+r)/2;
 if(strcmp(arr[mid].name,Name)==0)
 {
    return mid;
 }
 if(strcmp(arr[mid].name,Name)<*Name)
 {
    l=mid+1;
 }
 else
 {
    r=mid-1;
 }
 
    }
    return -1;
}

int find(const person arr[],int size, const char *Name)
{
    for(int i=0; i<size;i++)
    {
        if(strcmp(arr[i].name,Name)==0)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
 person persons[MAX_SIZE];
int numPersons;
printf("Enter the number of persons :\n");
scanf("%d",&numPersons);
for(int i=0; i<numPersons;i++)
{
    printf("\nEnter info for person %d\n",i+1);
         printf("Name: ");
        scanf("%s", persons[i].name);
        printf("Mobile Number: ");
        scanf("%s", persons[i].number);
}
sort(persons,numPersons);
        char name[50];
        printf("\nEnter name: ");
        scanf(" %s", name);
         int result = find(persons, numPersons,name);

    if (result != -1) {
        printf("\nPerson found! index:%d\n",result);
        printf("Name: %s\n", persons[result].name);
        printf("Mobile Number: %s\n", persons[result].number);
    } else {
        printf("\nPerson not found.\n");
    }

}