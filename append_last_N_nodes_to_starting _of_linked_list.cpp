#include<bits/stdc++.h>

using namespace std;

struct Node{// linked list Node
	int data;
	Node * next;
};

Node *newNode(int k){ //defining new node
	Node *temp = (Node*)malloc(sizeof(Node)); 
	temp->data = k; 
	temp->next = NULL; 
	return temp; 
}

//Used to add new node at the end of the list
Node *addNode(Node* head, int k){
	if(head == NULL){
		head = newNode(k);
	}
	else{
		Node * temp = head;
		Node * node = newNode(k);
		while(temp->next!= NULL){
			temp = temp->next;
		}
		temp-> next = node;
	}

	return head;
}

// Used to create new linked list and return head
Node *createNewLL(){
	int cont = 1;
	int data;
	Node* head = NULL;
	while(cont){
		cout<<"Enter the data of the Node"<<endl;
		cin>>data;
		head = addNode(head,data);
		cout<<"Do you want to continue?(0/1)"<<endl;
		cin>>cont;
	}
	return head;
}

//To print the Linked List
void *printLL(Node * head){
	while(head!= NULL){
		cout<<head->data<<"->";
		head = head-> next;
	}
	cout<<"NULL"<<endl;
}

//Function 
Node *appendNNodes(Node* head, int n){
	// Two pointers, one for traversal and 
	// other for finding the new head of LL
	Node *temp = head, *t = head;           
	//index maintained for finding new head
	int i = -n;                             
	while(temp->next!=NULL){
		//When temp went forward n nodes from t
		if(i>=0){                          
			t = t->next;
		}
		temp = temp ->next;
		i++;
	}
	//Connecting the tail to head
	temp->next = head;                      
	//Assigning the new node
	head = t->next;                         
	//Deleting the previous connection
	t->next = NULL;                         

	return head;
}

//Driver Main
int main(){
	Node * head = createNewLL();
	cout<<"The linked list is"<<endl;
	printLL(head);
	int data;
	cout<<"Enter the number of nodes you want to append."<<endl;
	cin>>data;
	head = appendNNodes(head,data);
	cout<<"The new Linked List is" <<endl;

	printLL(head);
	return 0;
}

