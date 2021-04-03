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
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
node* unionnode(node*head1,node*head2)
{
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }
    if(head1==NULL && head2==NULL)
    {
        return NULL;
    }
    else{
        node*temp1=head1;
        node*tail1=head1;
        while(tail1->next!=NULL)
        {
            tail1=tail1->next;
        }
        node*temp2=head2;
        while(temp2!=NULL)
        {
            node *a=head1;
            bool ans=true;
            while(a!=NULL)
            {
                if(a->data == temp2->data)
                {
                   ans=false;
                   break;
                }
                else{
                    a=a->next;
                }
            }
            if(ans==true)
            {
                tail1->next=temp2;
            }
            temp2=temp2->next;
        }
        return head1;
    }
}
int main()
{
    node*head1=takeinput();
    node*head2=takeinput();
    node*head3=unionnode(head1,head2);
    print(head3);

}
