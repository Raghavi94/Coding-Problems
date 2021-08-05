#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node *next;
};

void displayList(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }

}

int main()
{
    struct node *head;
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;
    struct node *four=NULL;

    one=malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));
    four=malloc(sizeof(struct node));

    one->data=10;
    two->data=20;
    three->data=30;
    four->data=94;


    one->next=four;
    two->next=three;
    three->next=NULL;
    four->next=two;
    head=one;

    displayList(head);
    return 0;
}
