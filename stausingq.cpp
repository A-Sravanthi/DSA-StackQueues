#include<bits/stdc++.h>
using namespace std;
class stack1{
	public:
	queue<int> a;
	int size;
	stack1()
	{
	size=0;
	}
	void push(int val)
		{
		a.push(val);
		}

	void pop()
	{
		if(a.empty())
		{
		cout<<"stack underflow";
		}
		else
		cout<<"pop element is:"<<a.back()<<endl;
	}
	int top()
	{
		if(!a.empty())
		{
		return a.front();
		}
		else
		cout<<"underflow \n";
	}
	bool isempty()
	{
		if(!a.empty())
		{
		return false;
		}
		else
		return true;
	}
	void display()
	{
		while(!a.empty())
		{
		cout<<a.front()<<endl;
		a.pop();
		}
	}
};
int main()
{
	stack1 s;
	int n,i;
	cout<<"no.of elements:\n";
	cin>>n;
	cout<<" elements:\n";
	while(n>0)
	{
	cin>>i;
	s.push(i);
	n--;
	}
	s.display();
	cout<<" top element"<<endl;
	s.top();
//return 0;
}







