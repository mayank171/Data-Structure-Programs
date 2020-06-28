#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL ;

void insert(int x)   //function it insert elements
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
        temp->next=NULL;
    }
}

void deletemiddle()   //function to delete middle element
{
    struct node *temp1=head;
    int count=0;
    while(temp1!=NULL)    //count number of nodes in linked list
    {
        count++;
        temp1=temp1->next;
    }
    temp1=head;
    if(count%2==0)      //if number of nodes are even
    {
        int mid1=count/2;     //find mid of linked list
        int p=0;              //it will tell if we have reached mid or not
        while(temp1!=NULL)
        {
            p++;
            if(p+1==mid1)     // it means next node is the mid of linked list
            {
                temp1->next=temp1->next->next->next;
            }
            temp1=temp1->next;
        }
    }
    else if(count%2!=0)    //if number of nodes are odd
    {
        int mid=(count+1)/2;    //find mid of linked list
        int p=0;                //it will tell if we have reached mid or not
        while(temp1!=NULL)
        {
            p++;
            if(p+1==mid)        // it means next node is the mid of linked list
            {
                temp1->next=temp1->next->next;
            }
            temp1=temp1->next;
        }
    }
}

void show()          //function to display linked list
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    insert(2);
    insert(4);
    insert(-3);
    insert(7);
    insert(9);
    insert(8);
    insert(-13);
    cout<<"original linked list: ";
    show();
    cout<<endl;
    cout<<"after deleting middle element: ";
    deletemiddle();
    show();
    return 0;
}


