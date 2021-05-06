#include<iostream>
using namespace std;
#include "class.cpp"
void print(node *head)
{
    node*temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node* input()
{
    int data;
    cin>>data;
    node *head=NULL;
    while(data!=-1)
    {
        node *newnode=new node(data);
        if(head==NULL)
        head=newnode;
        else{
            node *temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
    }
    return head;
}
int main()
{
    node *head=input();
    print(head);
}
