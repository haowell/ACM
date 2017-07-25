#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
#include<cmath>
using namespace std;
struct Cake
{
	int amount;
	int value;
	double price;
};
bool cmp(Cake a,Cake b)
{
	return a.price>b.price;
}
int main()
{
	Cake cake[1005];
	int num,maxdemand,sum=0;
	double collect=0.0;
	cin>>num>>maxdemand;
	for(int i=0;i<num;i++)
	{
		cin>>cake[i].amount;
	}
	for(int i=0;i<num;i++)
	{
		cin>>cake[i].value;
		cake[i].price=double(cake[i].value)/double(cake[i].amount);
		//cout<<cake[i].price<<"\n";
	}
	sort(cake,cake+num,cmp);
	for(int i=0;sum<maxdemand;i++)
	{
		if((sum+cake[i].amount)<maxdemand)
		{
			collect+=cake[i].value;
			sum+=cake[i].amount;
		}
		else
		{
			collect+=cake[i].price*(maxdemand-sum);
			sum+=cake[i].amount;		
		}
	}
	cout<<fixed<<setprecision(2)<<collect<<"\n";
}
