#include<iostream>
#include<math.h>
using namespace std;
int step(int num)
{
  if(num==1)
    {
      return 0;
    }
  else if(num%2)
    {
      int temp=3*num+1;
      return step(temp/2)+1;
    }
  else 
    {
      return step(num/2)+1;
    }
}
int main()
{
  int num;
  while(cin>>num)
    {
      cout<<step(num)<<"\n";
    }
  return 0;
}
