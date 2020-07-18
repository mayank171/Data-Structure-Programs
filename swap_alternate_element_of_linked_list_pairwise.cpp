#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
class linked
{
public:
    void insert(int x)          //insert node in a linked list
    {
        struct node* temp=new node();
        temp->data=x;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            struct node* temp1=head;
            while(temp1->next!=NULL)
            {
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
    }

    void swap()   //swap alternate elements pairwise
    {
        struct node* temp=head;
        int p;
        while(temp!=NULL && temp->next!=NULL)
        {
             p=temp->data;
             temp->data=temp->next->data;
             temp->next->data=p;
             temp=temp->next->next;
        }
    }

    void disp()    //display the linked list
    {
        struct node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    linked l;
    l.insert(2);
    l.insert(4);
    l.insert(-3);
    l.insert(-6);
    l.insert(8);
    l.insert(9);
    l.insert(6);
    l.disp();
    l.swap();
    l.disp();
    return 0;
    
}


