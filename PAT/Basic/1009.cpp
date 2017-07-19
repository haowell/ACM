#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;
int main()
{
	string a,input;
	stack<string> store;
	while(getline(cin,input))
	{
		istringstream sin(input);
		while(sin>>a)
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
}
