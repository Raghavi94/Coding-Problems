#include <stdio.h>

struct studentDetails
{
    int rollno;
    char name[50];
};

int main()
{
   int n;
   printf("Enter n : ");
   scanf("%d",&n);
   struct studentDetails s[n];
   for(int i=0;i<n;i++)
   {
       printf("\n Enter %d student details:",i+1);
       printf("\n Enter rollno : ");
       scanf("%d",&s[i].rollno);
       printf("\n Enter name : ");
       scanf("%s",s[i].name);
       
       
   }
   printf("--------------------");
   for(int i=0;i<n;i++)
   {
       
       printf("\n Rollno : %d",s[i].rollno);
       printf("\n Name : %s",s[i].name);
   }
   

    return 0;
}

