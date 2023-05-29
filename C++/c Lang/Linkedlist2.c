#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * head;
void Beginsert(int value){
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=value;
    ptr->next=ptr;
head=ptr;
// printf("%d",ptr->data);
}
void Display(){
    struct node* temp;
    temp=head;
    while(temp->next!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main(){
    Beginsert(33);
    Beginsert(66);
    Beginsert(99);
Display();
return 0;
}