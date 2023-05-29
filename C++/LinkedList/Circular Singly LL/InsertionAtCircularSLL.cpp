#include<iostream>
#include<stdlib.h>
using namespace std;

struct emp{
    int id;
    struct emp *next;
}*temp,*node,*head=NULL;

void Beginsert(){
    node=(struct emp*)malloc(sizeof(struct emp));
    cout<<"Enter a ID : ";
    cin>>node->id;
    if(head==NULL){
        temp=node;
        head=node;
        node->next=node;
    }
    else{
        node->next = head;
        head = node;
        temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=head;
    }
}

void Traversal(){
    temp=head;
        while(temp->next!=head){
            cout<<temp->id;
            temp=temp->next;
        }
        temp->next=head;
    
}
int main(){

    Beginsert();
    Beginsert();
    Beginsert();
    Beginsert();
Traversal();
    return 0;
}