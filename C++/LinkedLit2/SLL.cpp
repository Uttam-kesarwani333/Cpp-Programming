#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void BeginInsert(Node* &head,int data){
        Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;

}
void Traversal(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"";
        temp=temp->next;
    }
}
int main(){
    Node* head=NULL;
    BeginInsert(head,33);
    BeginInsert(head,44);
    BeginInsert(head,55);
    BeginInsert(head,66);
    BeginInsert(head,77);

    Traversal(head);


    return 0;
}