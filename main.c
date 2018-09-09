#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node* insertion()
{
        int *n;
        n=(struct node *)malloc(sizeof(struct node));
        return (n);
}
void insertNode()
{
    struct node *temp,*t;
    temp=insertion();
    printf("Enter a number");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
        start=temp;
    else
    {
        t=start;
        while(t->next!=NULL)
            t=t->next;
            t->next=temp;
    }
}
void deleteNode()
{
    struct node *r;
    if(start==NULL)
        printf("List is empty");
    else
    {
        r=start;
        start=start->next;
        free(r);
    }
}
void viewlist()
{
    struct node *t;
    if(start==NULL)
        printf("List is empty");
    else
    {
        t=start;
        while(t!=NULL)
        {
            printf("%d ",t->data);
            t=t->next;
        }
    }
}
int menu()
{
    int ch;
    printf("\n\n1.Add value to the list");
    printf("\n2.delete 1st value");
    printf("\n3.view list");
    printf("\n4.exit");
    printf("\n\nEnter your choice");
    scanf("%d",&ch);
    return (ch);
}
int main()
{
   while(1)
   {
       switch(menu())
       {
       case 1:
           insertNode();
           break;
        case 2:
            deleteNode();
            break;
            case 3:
                viewlist();
                break;
                case 4:
                    exit(0);
                default:
                    printf("Invalid choice");
       }
   }
   return 0;
}
