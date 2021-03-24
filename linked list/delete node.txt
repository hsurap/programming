#include<iostream>
using namespace std;
#include "class-delete-node.cpp"
node* takeinput()
{
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data!=-1)
    {
        node* newnode=new node(data);
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
node* deletenode(int pos,node *head)
{
    if(pos==0)
    {
        head=head->next;
        return head;
    }
    node *temp=head;
    int i=0;
    while(i<pos-1 && temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    if(temp!=NULL)
    {
        node *x=temp->next;
        node *y=x->next;
        temp->next=y;
        delete(x);
    }
    return head;

}
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node *head=takeinput();
    int pos;
    cin>>pos;
    head=deletenode(pos,head);
    print(head);
}
