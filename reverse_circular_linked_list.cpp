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


    void delete_even()
    {
        struct node* temp=head;
        int c=1;
        while(temp->next!=head)
        {
            c++;
            temp=temp->next;
        }
        temp=head;
        temp=temp->next;

        if(c%2==0)
        {
            struct node* temp1=head;
            int n=-1;
            while(temp->next!=head)
            {
                if(n==-1)
                {
                    temp1->next=temp->next;
                    temp1=temp1->next;
                }
                temp=temp->next;

                n=n*(-1);
            }
            temp1->next=head;
        }
        else if(c%2!=0)
        {
            struct node* temp1=head;
            int n=-1;
            while(temp->next!=head)
            {
                if(n==-1)
                {
                    temp1->next=temp->next;
                    temp1=temp1->next;
                }
                temp=temp->next;

                n=n*(-1);
            }
        }
        cout<<"List after deleting even-numbered nodes: ";
        disp();

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
    l.insert(9);
    l.insert(0);
    l.insert(2);
    l.insert(5);
    l.assignhead();
    cout<<"original list: ";
    l.disp();
    l.delete_even();
    return 0;
}
