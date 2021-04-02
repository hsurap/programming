#include<iostream>
using namespace std;
#include "class-node.cpp"
node *takeinput()
{
    int data;
    cin>>data;
    node*head=NULL;
    node*tail=NULL;
    while(data!=-1)
    {
        node*newnode =new node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
node *reverse(node *head)
{
    node*cn=head,*pn=NULL,*nn;
    while(cn!=NULL)
    {
        nn=cn->next;
        cn->next=pn;
        pn=cn;
        cn=nn;
    }
    return pn;
}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void func(node*head)
{
    bool ans,count=0;
    if(head==NULL || head->next==NULL)
        ans=false;
    node*temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    node*rev;
    if(count%2==0)
    {
        node*ptr=head;
        int i=0;
        while(i<count/2)
        {
            ptr=ptr->next;
        }
        rev=reverse(ptr);
    }
    else{
        node*ptr;
        int i=0;
        while(i<=count/2)
        {
            ptr=ptr->next;
        }
        rev=reverse(ptr);
    }
    node *st=head;
    while(st!=NULL || rev!=NULL)
    {
        if(st->data != rev->data)
        {
            ans=false;
            break;
        }
    }
    if(ans==true)
        cout<<"yes";
    else
        cout<<"no";
}
int main()
{
    node*head=takeinput();
    func(head);
}
