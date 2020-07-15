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


    void sort()
    {
        struct node* temp=head;

        while(temp->next!=NULL)
        {
            struct node* temp1=temp->next;
            while(temp1!=NULL)
            {
                if(temp->data > temp1->data)
                {
                    swap(temp->data,temp1->data);
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
    l.insert(2);
    l.insert(18);
    l.insert(-84);
    l.insert(90);
    l.insert(42);
    l.insert(81);
    l.insert(34);
    l.insert(-101);
    l.insert(6);
    l.insert(48);
    l.insert(54);
    l.insert(5);
    l.insert(-6);
    l.insert(8);
    l.insert(-54);
    l.insert(10);

    l.disp();
    l.sort();
    l.disp();
    return 0;
}


