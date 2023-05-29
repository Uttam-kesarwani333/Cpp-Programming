#include<iostream>
#include<stdlib.h>
using namespace std;

struct emp {
    int id;
    struct emp * next;
} *temp,*node,*head=NULL;

void CreateCircularSLL(int n){
    node=(struct emp*)malloc(sizeof(struct emp));
    node->next=NULL;
    cout<<"Enter a ID : ";
    cin >> node->id;
    temp=node;
    head=node;
    for(int i=2;i<=n;i++){
    node=(struct emp*)malloc(sizeof(struct emp));
    node->next=NULL;
    cout<<"Enter a ID : ";
    cin >> node->id;

    temp->next=node;
    
    }
    node->next=head;
}
void Traversal(){
    temp=head;
    while(temp->next!=head){
        cout<<temp->id;
        temp=temp->next;
    }
}
int main(){

    int n;
    cout<<"Enter a Number of LL : ";
    cin>>n;
    CreateCircularSLL(n);
    Traversal();
    return 0;
}