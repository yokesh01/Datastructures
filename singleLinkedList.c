#include <stdio.h>
#include <stdlib.h>

void addnode(int i);
void display();


struct node *start =NULL; 
struct node{
    int data;
    struct node *next;
};  
   
int main()
{
    addnode(5); 
    addnode(15); 
    addnode(55); 
    displaySLL();
    
return 0;
}

void addnode(int i)
{
    struct node *newnode,*ptr;
    
    newnode=(struct node*)malloc(sizeof(struct node));     
    newnode->data=i;
    newnode->next=NULL;
    if(start==NULL)
        start=newnode;
    else{
        ptr=start;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=newnode;
    }
}
void displaySLL()
{
    struct node *tptr;
     printf("\n");
    for(tptr=start;tptr!=NULL;tptr=tptr->next)
        printf("%d -> ",tptr->data);
    //getch();
}
