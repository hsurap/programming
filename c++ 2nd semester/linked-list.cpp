#include<iostream>
using namespace std;
#include "node.cpp"
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    /*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }*/
}
int main()
{
    node n1(1);
    node *head=&n1;
    node n2(2);
    node *n3=new node(3);
    node *n4=new node(4);
    node n5(5);
    n1.next=&n2;
    n2.next=n3;
    n3->next=n4;
    n4->next=&n5;
    print(head);
    cout<<endl;
    print(head);
}
