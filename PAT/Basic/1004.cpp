#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,grade,min,max;
	string name,id,minname,minid,maxname,maxid;
	cin>>n;		
	min=101;
	max=-1;
	while(n--)
	{

		cin>>name>>id>>grade;
		if(grade<min)
		{
			min=grade;
			minname=name;
			minid=id;
		}
		if(grade>max)
		{
			max=grade;
			maxname=name;
			maxid=id;
		}
	}
	cout<<maxname<<" "<<maxid<<"\n";
	cout<<minname<<" "<<minid<<"\n";
}
