#include<iostream>
using namespace std;
#include "class.cpp"
node *input()
{
    int data;
    cin>>data;
    node *head=NULL,*tail=NULL;
    node *newnode =new node(data);
    while(data != -1)
    {
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
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
node *insertion(node *head,int pos,int data)
{
    node *newnode=new node(data);
    int count=0;
    node*temp=head;
    if(pos==0)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(count>pos-1 && temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL)
    {
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
}
int main()
{
    int pos,data;
    cin>>pos>>data;
    node *head=input();
    head=insertion(head,pos,data);
    print(head);
}
