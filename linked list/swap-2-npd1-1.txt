#include<iostream>
#include<bits/stdc++.h>
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
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
node *swapnode(node*head,int pos1,int pos2)
{
    if(pos1 == pos2)
        return head;
    if(abs(pos1-pos2)==1)
    {
        node *prev = NULL, *curr = head, *nnext;
        int x = 0;
        while(curr!=NULL && x<pos1) {
            prev = curr;
            curr= curr->next;
            x++;
        }
        if(curr==NULL || curr->next==NULL)
            return head;
        nnext = curr->next;
        node* pnext = nnext ->next;
        nnext->next = curr;
        curr->next = pnext;
        if(prev == NULL)
            return nnext;
        else {
            prev->next = nnext;
            return head;
        }
    }
}
int main()
{
    node*head=takeinput();
    //pos1<pos2
    int pos1,pos2;
    cin>>pos1>>pos2;
    head =swapnode(head,pos1,pos2);
    print(head);
}
