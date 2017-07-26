#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
#include<cmath>
using namespace std;

//记录某类月饼的信息，分别表示库存，总售价和单价
struct Cake
{
	double amount;
	double value;
	double price;
};

//排序规则，把单价高的排前面，先卖出去以获取最大收益
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
		cake[i].price=cake[i].value/cake[i].amount;
	}
	sort(cake,cake+num,cmp);

	//把单价高的月饼先卖出去，直至达到市场最大需求或者库存月饼全卖出
	for(int i=0;sum<maxdemand&&i<num;i++)
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
