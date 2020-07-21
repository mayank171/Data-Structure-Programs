#include<iostream>
using namespace std;
struct node{

  int data;
  struct node* next;
  struct node* prev;

};
struct node* head=NULL;

class doubly
{
    public:
    void insert(int x)
    {
        struct node* temp=new node();
        temp->data=x;
        if(head==NULL)
        {
            head=temp;
            temp->prev=NULL;
            temp->next=NULL;
        }
        else
        {
            struct node* temp1=head;
            while(temp1->next!=NULL)
            {
                temp1=temp1->next;
            }
            temp->prev=temp1;
            temp1->next=temp;
            temp->next=NULL;
        }
    }

    void middle()
    {
        struct node* temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }

        temp=head;
        int p=1;
        if(c%2==0)
        {
            int mid=c/2;
            while(p!=mid)
            {
                p++;
                temp=temp->next;
            }
            cout<<temp->data<<" "<<temp->next->data<<endl;
        }
        else
        {
            int mid=(c+1)/2;
            while(p!=mid)
            {
                p++;
                temp=temp->next;
            }
            cout<<temp->data<<endl;
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
    }
};

int main()
{
    doubly l;
    l.insert(3);
    l.insert(5);
    l.insert(1);
    l.insert(4);
    l.insert(8);
    l.insert(7);
    l.insert(0);
    l.disp();
    cout<<endl;
    l.middle();
    return 0;
  
}
