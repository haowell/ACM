#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<stack>
#include<iomanip>
#include<cmath>
using namespace std;
struct Student
{
	string id;
	int moral;
	int talent;

	//记录考生类别
	int type;
};

//排序规则
bool cmp(Student a,Student b)
{
	//考生类别相同时
	if(a.type==b.type)
	{

		//考生总分相同时
		if((a.moral+a.talent)==(b.moral+b.talent))
		{
			//考生德分相同时，准考证号越小越靠前
			if(a.moral==b.moral)
			{
				return a.id<b.id;
			}

			//考生德分越大越靠前
			else
			{
				return a.moral>b.moral;
			}
		}

		//考生总分越高越靠前
		else
		{
			return (a.moral+a.talent)>(b.moral+b.talent);
		}
	}

	//考生类别越小越靠前
	else
	{
		return a.type<b.type;
	}
}
int main()
{
	Student student[100005];
	Student a;

	//sum记录达到最低录取线的考生数
	int num,low,high,sum=0;
	cin>>num>>low>>high;
	for(int i=0;i<num;i++)
	{
		cin>>a.id>>a.moral>>a.talent;

		//未达到最低录取线的考生舍弃，否则排序时可能会超时
		if(a.moral>=low&&a.talent>=low){
			student[sum]=a;

			//德才兼备的考生，即第一类考生
			if(a.moral>=high&&a.talent>=high)
			{
				student[sum].type=0;
			}

			//德胜才的考生，即第二类考生
			else if(a.moral>=high&&a.talent<high)
			{
				student[sum].type=1;
			}
			else
			{	
				//才德兼亡但德胜才的考生，即第三类考生
				if(a.moral>=a.talent)
				{
					student[sum].type=2;
				}

				//第四类考生
				else
				{
					student[sum].type=3;
				}
			}
			sum++;
		}
	}

	sort(student,student+sum,cmp);

	cout<<sum<<"\n";
	for(int i=0;i<sum;i++)
	{
		cout<<student[i].id<<" "<<student[i].moral<<" "<<student[i].talent<<"\n";
	}
}
