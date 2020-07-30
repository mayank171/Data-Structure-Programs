#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head=NULL;

class linked
{
public:
    void insert(int x)
    {
        struct node* temp=new node();
        temp->data=x;
        temp->next=NULL;
        temp->prev=NULL;
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
            temp1->next =temp;
            temp->prev =temp1;
            temp->next=NULL;

        }
    }

    void reverse()
    {
        struct node* temp=head;
        temp->prev=NULL;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        struct node* temp1=head;
        head=temp;

        temp=head;
        cout<<"reversed doubly linked list: ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }

    void disp()
    {
        struct node* temp=head;
        cout<<"original linked list: ";
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
    l.insert(1);
    l.insert(2);
    l.insert(4);
    l.insert(5);
    l.insert(6);
    l.insert(8);
    l.insert(9);
    l.insert(18);
    l.disp();
    l.reverse();
    return 0;
}


