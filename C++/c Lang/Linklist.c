#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};
struct node * head;
void Beginsert(){
    
    struct node *ptr;
    ptr = (struct node *)malloc (sizeof(struct node *));
    if (head==NULL){
        head = ptr;
    }
    else 
    {
        printf("Enter a Value : ");
        scanf("%d",&ptr->data);
               
         ptr->next = head;
         head = ptr;
        }
}
void Lastinsert(){
struct node * ptr,*tail;
ptr= (struct node*)malloc(sizeof(struct node *));
printf("Enter a Value : ");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
tail=head;
if (head==0){
head = ptr;
}
else {
    while(tail->next !=0){
        tail=tail->next;
    }
    tail->next=ptr;
    
    }
}


void LastDelete(){
    struct node* temp,*temp2;
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp2=temp->next;
    temp->data=NULL;
    free(temp2);
}

void BeginDelete(){
    if (head==0)
        printf("UNder Flow\n");


else if(head->next=0){
    free(head);
}

else {
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp); 
}
}
void Display(){
    struct node* temp;
    temp =head;
    while(temp!=0){
        printf("%d ->",temp->data);
        temp = temp->next;
    } 
    printf("NULL");
}
int main(){
printf("Welcome to my World. \n");
struct node * newnode1;
struct node* newnode2;
newnode1=(struct node *) malloc (sizeof(struct node));
newnode1->data=3;
newnode1->next=NULL;
head=newnode1;
printf("%d   ",newnode1->data);
newnode2 = (struct node*) malloc (sizeof(struct node));
newnode2->next=NULL;
newnode2->data =6;
head->next = newnode2;
printf("%d \n",newnode2->data);
Beginsert();
Beginsert();
Lastinsert();
Lastinsert();
Lastinsert();
LastDelete();
BeginDelete();
Display();
return 0;
}