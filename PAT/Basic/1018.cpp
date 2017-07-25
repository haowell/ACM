#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
#include<cmath>
using namespace std;
struct Count
{
	//记录胜的次数和某手势胜的次数
	int C;
	int B;
	int J;
	int win; 
};

//找出个人胜次最多的手势
void winmost(Count p)
{
	char c;
	
	//比较锤子和布的胜次
	if(p.C>p.B)
	{
		//比较锤子和剪刀的胜次
		if(p.J>p.C)
		{
			c='J';
		}
		else
		{
			c='C';
		}
	}
	else
	{
		//比较布和剪刀的胜次
		if(p.J>p.B)
		{
			c='J';
		}
		else
		{
			c='B';
		}
	}
	cout<<c;
}
int main()
{
	//初始化甲乙两人胜次，均为0
	Count jia,yi;
	jia.B=jia.C=jia.J=jia.win=yi.B=yi.C=yi.J=yi.win=0;
	int n;
	char a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
	
		//甲胜的情况
		if(a=='C'&&b=='J')
		{
			jia.C++;
			jia.win++;
		}
		else if(a=='J'&&b=='B')
		{
			jia.J++;
			jia.win++;
		}
		else if(a=='B'&&b=='C')
		{
			jia.B++;
			jia.win++;
		}

		//乙胜的情况
		else if(a=='C'&&b=='B')
		{
			yi.B++;
			yi.win++;
		}
		else if(a=='J'&&b=='C')
		{
			yi.C++;
			yi.win++;
		}
		else if(a=='B'&&b=='J')
		{
			yi.J++;
			yi.win++;
		}
	}
	cout<<jia.win<<" "<<n-jia.win-yi.win<<" "<<yi.win<<"\n";
	cout<<yi.win<<" "<<n-jia.win-yi.win<<" "<<jia.win<<"\n";
	winmost(jia);
	cout<<" ";
	winmost(yi);
	cout<<"\n";
}
