#include<iostream>
#include<stdlib.h>
using namespace std;

struct emp {

    int id;
    struct emp *next;

}*temp,*head=NULL,*node;

void CreateLL(int n){
    node=(struct emp*)malloc(sizeof(struct emp));

    cout<<"Enter a ID : ";
    cin>>node->id;
    node->next=NULL;
    temp=node;
    head=node;
    for(int i=2;i<=n;i++){
        node=(struct emp*)malloc(sizeof(struct emp));
    cout<<"Enter a ID : ";
    cin>>node->id;
    temp->next=node;
    temp=temp->next;
    }
node->next=NULL;
}
void Endinsert(){
    cout<<"New Node are Added in End"<<endl;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node=(struct emp*) malloc(sizeof(struct emp));

    cout<<"Enter a ID : ";
    cin>>node->id;
    node->next=NULL;
    temp->next=node;
}

void show(){
    cout<<endl<<"Your all Nodes : ";
    temp=head;
    while(temp!=NULL){
        cout<<temp->id<<" -> ";
        temp=temp->next;
    }
}
void Beginsert(){
    cout<<endl<<"New Noded are Added in Begin "<<endl;
    node=(struct emp*)malloc(sizeof(struct emp));
    cout<<"Enter a ID : ";
    cin>>node->id;
    node->next=NULL;
    if(head==NULL)
        temp=head=node;
    else {
        temp->next=node;
        temp=temp->next;
    }
}
void BegDelete(){
    cout<<endl<<"Delete One Node at Begin";
    if(head==NULL){
        cout<<"OverFlow LL Condition ";
    }
    else if(head->next=NULL){
        temp=head;
        free(head);
    }
    else {
        temp=head;
        head=head->next;
        free(temp);
    }
}
void EndDelete(){
    
    if(head==NULL)
        cout<<"OverFlow";
    else if(head->next=NULL){
        temp=head;
        free(temp);
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        free(temp);
    }
}

void insertAtPos(){
    int pos;
    cout<<"Enter a position : ";
    cin>>pos;
    temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Cannot Add";
    }
    else{
        node->next=temp->next;
        temp->next=node;
    }
}
void deleteAtPosition(){
    struct emp * temp1;
    temp1=head;
    temp=head;
    int pos;
    cout<<"Enter a Position : ";
    cin>>pos;
    for(int i=1;i<pos;i++){
        temp=temp1;
        temp1=temp1->next;
    }
    if (temp1=NULL){
        cout<<"UnderFlow";
    }
    else{
        temp->next=temp1->next;
        temp1->next=NULL;
        free(temp);
    } 
}
int main(){
    int n;
    cout<<"Enter a number of LL : ";
    cin>>n;
    CreateLL(n);
    BegDelete();
    EndDelete();
    show();
    Endinsert();
    show();
    Beginsert();

    cout<<endl<<"Hello";
    cout<<endl;
    show();
    BegDelete();
    cout<<endl;
    show();
    return 0;
}