#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    public:
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
