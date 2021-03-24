#include<iostream>
using namespace std;
#include "class-node.cpp"
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
node* deletenode(node*head,int m,int n)
{
    if(m==0)
    {
        node*temp=head;
        node *n=NULL;
        while(temp!=NULL)
        {
            n=temp->next;
            delete temp;
            temp=n;
        }
        head=NULL;
        return head;
    }
    if(n==0)
    {
        return head;
    }
    int time =0;
    node*p=head;
    while(p!=NULL)
    {
        int i;
        if(time==0){
            i=m-1;
            time=1;
        }
        else{
            i=m;
        }
        while(i>0&&p!=NULL)
        {
            p=p->next;
            i--;
        }
        int j=n;
        while(j>0 && p!=NULL && p->next!=NULL)
        {
            node*q=p->next;
            node*r=q->next;
            delete q;
            p->next=r;
            j--;
        }
    }
    return head;
}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node*head=takeinput();
    int m,n;
    cin>>m>>n;
    head=deletenode(head,m,n);
    print(head);
}
