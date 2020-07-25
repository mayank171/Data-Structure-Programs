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
            temp1->next =temp;

        }
    }


    void sum(int s)
    {
        struct node* temp=head;
        while(temp->next!=NULL)
        {
            struct node* temp1=temp->next;
            while(temp1!=NULL)
            {
                if(temp->data + temp1->data ==s)
                {
                    cout<<"("<<temp->data<<","<<temp1->data<<")"<<endl;
                }
                temp1=temp1->next;
            }
            temp=temp->next;
        }

    }

    void disp()
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
    l.insert(5);
    l.insert(3);
    l.insert(-4);
    l.insert(7);
    l.insert(-6);
    l.insert(0);
    l.insert(9);
    l.insert(18);
    l.disp();

    int s;
    cout<<"Enter sum that you want to find in the doubly linked list: ";
    cin>>s;
    l.sum(s);
    return 0;
}


