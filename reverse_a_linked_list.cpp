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

    void reverse()
    {
        struct node* current=head;
        struct node* prev=head;
        struct node* forward=head;
        forward=current->next;
        current->next=NULL;
        while(current!=NULL && forward!=NULL)
        {
            prev=current;
            current=forward;
            forward=forward->next;
            current->next=prev;
        }
        head=current;
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
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.insert(6);

    l.insert(9);
    l.disp();
    l.reverse();
    l.disp();
    return 0;
}


