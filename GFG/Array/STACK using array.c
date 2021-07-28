#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int STACK[MAX],TOP;

void display(int[]);
void PUSH(int[],int);
void POP(int[]);

void main()
{
    int choice=0,ITEM=0;
    TOP=-1;

    while(1)
    {

        printf("\n Enter your choice : 1.Display \n 2.PUSH \n 3.POP \n 4.Exit: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            display(STACK);
            break;
        case 2:
            printf("\n Enter the element to insert : ");
            scanf("%d",&ITEM);
            PUSH(STACK,ITEM);
            break;
        case 3:
            POP(STACK);
            break;
        case 4:
            exit(0);
        default:
            printf("\n Invalid input");
            break;
        }
    }

}

void display(int STACK[])
{

    int i=0;
    if(TOP==-1)
    {
        printf("\n Stack is empty");
        return;
    }
    printf("\n Element %d",STACK[TOP]);
    for(i=TOP-1;i>=0;i--)
    {
        printf("%d",STACK[i]);
    }
}

void PUSH(int STACK[],int ITEM)
{
    if(TOP==MAX-1)
    {

        printf("\n Stack is full");
        return;
    }
    TOP++;
    STACK[TOP]=ITEM;
}

void POP(int STACK[])
{
    if(TOP==-1)
    {
        printf("\n Stack is empty");
        return;
    }
    int itemDeleted;
    itemDeleted=STACK[TOP];
    TOP--;
    printf("\n %d is deleted successfully",itemDeleted);
    return;
}
