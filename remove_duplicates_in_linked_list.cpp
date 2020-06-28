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

    void duplicate()
    {
        struct node* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int p=0;
        temp=head;
        while(temp->next!=NULL && p<count)
        {
            struct node* temp1=temp->next;
            while(temp1!=NULL)
            {
                if(temp->data!=-1)
                {
                    if(temp->data==temp1->data)
                    {
                         temp1->data=-1;
                    }

                }
                temp1=temp1->next;
            }
            temp=temp->next;
            p++;
        }

        temp=head;
        struct node* temp1=head;
        while(temp->next!=NULL)
        {
            if(temp->next->data==-1)
            {
                temp1=temp;
                while(temp1->next!=NULL)
                {
                    if(temp1->next->data!=-1)
                        break;
                    temp1=temp1->next;
                }
                temp->next=temp1->next;
                if(temp->next==NULL)
                    break;
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
    l.insert(5);
    l.insert(2);
    l.insert(6);
    l.insert(4);
    l.insert(5);
    l.insert(1);
    l.insert(3);
    l.insert(2);
    l.insert(6);
    l.insert(5);
    l.insert(2);
    l.insert(9);
    l.insert(7);
    l.insert(6);
    l.insert(2);
    l.insert(3);
    l.insert(3);
    l.insert(14);
    l.insert(2);
    l.disp();
    l.duplicate();
    l.disp();
    return 0;
}


