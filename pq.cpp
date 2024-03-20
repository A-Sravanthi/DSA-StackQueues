#include<iostream>
using namespace std;
struct node{
	int data;
	int priority;
	node *next;
};
node* front=NULL;
node* create(int ele,int pri)
{
node* nn=new node(ele,pri);
cout<<"Addr: %p"<<(void *)nn;
	nn->data = ele;
	nn->priority = pri;
	nn->next = NULL;
	return nn;
}
void enqp(int e, int p){
	node *nn, *temp= front;
	nn = create(e, p);
	if(front==NULL || p <  front->priority){		/*When Queue is empty*/
        nn->next = front;
		front=nn;
    }
	else{					/*When Queue is not empty*/
        while(temp->next != NULL && temp->next->priority<= p)
            temp = temp->next;
		nn->next=temp->next;
		temp->next = nn;	/*now newNode will be rear*/
	}
}
void deqp(){
	node *temp=front;
	if(front == NULL)			/*When Queue is empty*/
		cout<<("Queue underflow\n");
	else{					/*When Queue is not empty*/
		front=front->next;
		free(temp);
	}
}

void display(){
          node *temp = front;
	if(temp==NULL){				/*When Queue is empty*/
        	cout<<("\nQueue is empty \n");
        	return;
	}
	while(temp != NULL){			/*When Queue is not empty*/
		cout<<"\n%d\t%d"<<temp->data<<temp->priority;
		temp = temp->next;
	}
	cout<<"\n\n";
}

int main(){
	int elem;
	enqp(10, 1);
    enqp(30, 3);
    enqp(20, 2);
	//enqp(20, 4);
	display();
	deqp();
    deqp();
 	display();
	return 0;
}
