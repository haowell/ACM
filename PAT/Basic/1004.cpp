#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,grade,mingrade,maxgrade;

	//minname，minid记录当前成绩最低学生信息
    	//maxname，maxid记录当前成绩最高学生信息
	string name,id,minname,minid,maxname,maxid;
	cin>>n;	

	//设定初始基准	
	mingrade=101;
	maxgrade=-1;
	while(n--)
	{

		cin>>name>>id>>grade;

		//分数低于当前最低分
		if(grade<mingrade)
		{
			mingrade=grade;
			minname=name;
			minid=id;
		}

		//分数高于当前最高分
		if(grade>maxgrade)
		{
			maxgrade=grade;
			maxname=name;
			maxid=id;
		}
	}
	cout<<maxname<<" "<<maxid<<"\n";
	cout<<minname<<" "<<minid<<"\n";
}
