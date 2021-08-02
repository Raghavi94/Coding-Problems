#include<stdio.h>
#include<stdlib.h>
# define MAX 50

//Function declaration or prototype
void insert();
void del();
void display();
int queue_arr[MAX];
int rear=-1;
int front=-1;

int main()
{

    int choice;
    while(1)
    {
        printf("\nEnter your choice \n 1.Insert\n 2.Delete\n 3.Display\n 4.Quit");
        scanf("%d",&choice);

        switch(choice)
        {

        case 1: insert();
        break;

        case 2: del();
        break;

        case 3: display();
        break;

        case 4: exit(1);

        default:printf("\n Invalid input");
        }
    }
    return 0;
}

//Function definition

void insert()
{
    int item;
    if(rear==MAX-1)
    {
        printf("\n Queue is full");
    }
    else{
        if(front==-1)
        front=0;
        printf("\n Enter the element to be inserted : ");
        scanf("%d",&item);
        rear=rear+1;
        queue_arr[rear]=item;

    }
}

void del()
{
    if(front==-1 || front>rear)
    {
        printf("\n Queue is empty");
        return;
    }
    else
    {
        printf("\n Element deleted is : %d",queue_arr[front]);
        front=front+1;
    }
}

void display()
{
    int i;
    if(front==-1 || front>rear)
    {
        printf("\n Queue is empty");
    }
    else
    {
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",queue_arr[i]);
    }
    }



}
