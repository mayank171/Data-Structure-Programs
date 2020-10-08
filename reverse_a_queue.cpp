  
    #include<iostream>
using namespace std;

class Queue
{
	private:
		int front;
		int rear;
		int a[];
		int size;
	public:
		Queue(int s)   //constructor to set size of array
		{
			size=s;
			front=-1;
			rear=-1;
		}
		
		int empty()   //checks if queue is empty or not
		{
			if(front==-1 && rear==-1)
			   return 1;
			else
			   return 0;
		}
		
		int full()    //checks if queue is full or not
		{
			if(rear==size-1)
			  return 1;
			else
			  return 0;
		}
		
		void enqueue(int data)  //insert data in queue
		{
			if(empty())
			{
				front=rear=0;
			}
			if(full())
			{
				return;
			}
			else
			{
				rear=rear+1;
			}
			a[rear]=data;
		}
		
		
		void reverse()
		{
			for(int i=rear;i>=front+1;i--)
			{
				cout<<a[i]<<" ";
			}
		}
		
		void show()   //print data in the queue
		{
			for(int i=front+1;i<=rear;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
};

int main()
{
	Queue q(7);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(-4);
	q.enqueue(5);
	q.enqueue(-6);
	cout<<"data in queue: ";
	q.show();
	cout<<endl;
	cout<<"queue after reversing: ";
	q.reverse();
	return 0;
}

  
  
