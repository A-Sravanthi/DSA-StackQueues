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
		cout<<x<<endl;
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
st.push(1);
st.push(10);
st.push(100);
st.push(1000);
st.push(10000);
st.push(100000);
cout<<"top element is"<<st.Top()<<endl;
st.pop();
st.pop();
cout<<"top element is"<<st.Top()<<endl;
st.pop();
st.pop();
st.pop();
st.empty();
return 0;
}







