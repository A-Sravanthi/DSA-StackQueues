#include<iostream>
using namespace std;
#define n 100
class stack{
	int *arr;
	int top;
	public:
	stack(){
	arr=new int[n];
	top=-1;
	}
	void push(int x)
	{
		if(top==n-1)
		{
			cout<<"stack is overflow"<<endl;
			return;
		}
		top++;
		arr[top]=x;
		cout<<"push element:"<<x<<endl;
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"stack is empty"<<endl;
			return;
		}
		top--;
		
	}
	int Top()
		{
		if(top==-1)
		{
			cout<<"no elements in the stack"<<endl;
			return -1;
		}
		return arr[top];
	}
	bool empty()
	{
	        return top==-1;
	}
};

int main()
{
	stack st;
	int k,i;
	cout<<"enter the no.of elements for push:"<<endl;
	cin>>k;
	cout<<"enter the elements:"<<endl;
	while(k>0)
	{
	cin>>i;
	st.push(i);
	k--;
	
	}
	cout<<"top element is:";
	cout<<st.Top()<<endl;
	st.pop();
	st.pop();
	cout<<"top element is:";
	cout<<st.Top()<<endl;
	return 0;
}








