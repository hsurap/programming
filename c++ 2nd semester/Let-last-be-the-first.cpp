#include<iostream>
using namespace std;
#include "class-node.cpp"
void print(node*head);
node* takeinput()
{
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1)
    {
        node *newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}
node* func(node*head)
{
    node*temp=head;
    if(head==NULL && head->next==NULL)
    return head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    node*q=temp->next;
    temp->next=NULL;
    q->next=head;
    head=q;
    return head;
}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    node *head=takeinput();
    head=func(head);
    print(head);
}
