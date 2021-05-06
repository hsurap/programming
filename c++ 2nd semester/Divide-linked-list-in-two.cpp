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
node *reverse(node *head)
{
    node*prevptr=NULL;
    node*currptr=head;
    node*nexptr;
    while(currptr!=NULL)
    {
        nexptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nexptr;
    }
    return prevptr;
}
void deletenode(node*head)
{
    node*head1=head;
    node*temp1=head1;
    node*head2=head->next;
    node*temp2=head2;
    if(head->next==NULL)
    {
        head2=NULL;
        print(head1);
        //print(head2);
    }
    else
    {
        while(temp1!=NULL && temp2!=NULL)
        {
            node*p=temp1->next->next;
            node*q=temp2->next->next;
            temp1->next=p;
            temp2->next=q;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        head1=reverse(head1);
        head2=reverse(head2);
        print(head1);
        print(head2);
    }
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
    deletenode(head);
    //head=reverse(head);
    //print(head);
}
