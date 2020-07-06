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

    void nthnodefromend(int x)
    {
         struct node* temp=head;
         int c=0;
         while(temp!=NULL)
         {
             temp=temp->next;
             c++;
         }
         c=c-x;
         temp=head;
         int t=1;
         while(t<=c)
         {
             temp=temp->next;
             t++;
         }
         cout<<x<<"th node from end is "<<temp->data<<endl;

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
    l.insert(21);
    l.insert(46);
    l.insert(48);
    l.insert(54);
    l.insert(10);

    l.disp();
    int n;
    cout<<"enter position of node from end to be searched: ";
    cin>>n;
    l.nthnodefromend(n);
    return 0;
}
