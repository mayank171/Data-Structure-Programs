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
    void insert(int x)
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

    void assignhead()
    {
        struct node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
    }


    void Swap()
    {
        struct node* temp=head;
        struct node* temp1=head;
        while(temp1->next!=head)
        {
            temp1=temp1->next;
        }
        swap(temp1->data,temp->data);
    }

    void disp()
    {
        struct node* temp=head;
        cout<<temp->data<<" ";
        temp=temp->next;
        while(temp!=head)
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
    l.insert(3);
    l.insert(5);
    l.insert(8);
    l.insert(1);
    l.insert(-2);
    l.insert(7);
    l.insert(-3);
    l.assignhead();
    l.disp();
    l.Swap();
    l.disp();
    return 0;
}




