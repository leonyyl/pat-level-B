 ///
 /// @file    1001.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-03-04 00:05:29
 ///
 
#include <iostream>
using namespace std;
int flag = 0;
int func(int i)
{
	if(i==1){
	return i;
	}
	++flag;
	if(i%2==0)
		i /= 2;
	else i =(3*i+1)/2;
		func(i);
}
int main ()
{
	int i;
	cin>>i;
	if(i>0&&i<=1000)
	{
		func(i);
	}
	cout<<flag<<endl;
	return 0;
}
