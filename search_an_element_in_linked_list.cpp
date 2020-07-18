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

    void search(int x)
    {
         int flag=0,c=0;
         struct node* temp=head;
         while(temp!=NULL)
         {
             if(temp->data==x)
             {
                flag=1;
                break;
             }
             temp=temp->next;
             c++;
         }
         if(flag==1)
         {
             cout<<"value found at "<<c+1<<endl;
         }
         else
         {
             cout<<"value not found ";
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
    int n;
    cout<<"enter value to be searched: ";
    cin>>n;
    l.search(n);
    return 0;
    
}


