#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;
int main()
{
	string a,input;
	
	//用栈存储单词，实现先进后出（LIFO）/后进先出（FILO）的效果
	stack<string> store;

	while(cin>>a)
	{
		store.push(a);
	}
	cout<<store.top();
	store.pop();
	while(!store.empty())
	{
		cout<<" "<<store.top();
		store.pop();
	}
	cout<<"\n";
}
