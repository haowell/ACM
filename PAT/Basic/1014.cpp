#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
#include<cmath>
using namespace std;
void Week(char week)
{
	switch(week)
	{
		case 'A':
			cout<<"MON ";
			break;
		case 'B':
			cout<<"TUE ";
			break;
		case 'C':
			cout<<"WED ";
			break;
		case 'D':
			cout<<"THU ";
			break;
		case 'E':
			cout<<"FRI ";
			break;
		case 'F':
			cout<<"SAT ";
			break;
		case 'G':
			cout<<"SUN ";
			break;
	}
}
void Hour(char hour)
{
	if(hour>='0'&&hour<='9')
	{
		cout<<"0"<<(hour-'0')<<":";
	}
	else
	{
		cout<<(hour-'A')+10<<":";
	}
}
void Minute(int minute)
{
	if(minute<10)
	{
		cout<<"0"<<minute<<"\n";
	}
	else
	{
		cout<<minute<<"\n";
	}
}
int main()
{
	string a1,a2,b1,b2;
	int alen,blen,judge,minute;
	char week,hour;
	while(cin>>a1>>a2>>b1>>b2)
	{
		judge=0;
		alen=min(a1.length(),a2.length());
		for(int i=0;i<alen;i++)
		{
			//前两个字符串第一对相等的符合条件大写字母
			if(judge==0&&a1[i]>='A'&&a1[i]<='G'&&a1[i]==a2[i])
			{
				week=a1[i];
				judge++;
			}

			//前两个字符串第二对相等的符合条件字符
			else if(judge==1&&
			( (a1[i]>='A'&&a1[i]<='N')||
			(a1[i]>='0'&&a1[i]<='9') )&&
			a1[i]==a2[i])
			{
				hour=a1[i];
				judge++;
			}
		}

		
		blen=min(b1.length(),b2.length());
		for(int i=0;i<blen;i++)
		{
			//后两个字符串第一对相等的符合条件的字母
			if(( (b1[i]>='a'&&b1[i]<='z')||
			(b1[i]>='A'&&b1[i]<='Z') )&&
			b1[i]==b2[i])
			{
				minute=i;
				break;
			}
		}
		Week(week);
		Hour(hour);
		Minute(minute);
	}	
}
