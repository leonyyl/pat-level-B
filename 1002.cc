 ///
 /// @file    1002.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-03-04 00:40:59
 ///
 
#include <iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
	string num;
	vector<string> word {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	cin >> num;
	int sum = 0;
	for(auto mem : num)
		sum += (mem-48);
	if(sum/1000>0)
		return -1;
	if(sum > 99 && sum < 1000)
	cout<<word[sum/100]<<" "<<word[sum/10%10]<<" "<<word[sum%10]<<endl;
	if(sum < 100 && sum > 9)
		cout<<word[sum/10]<<" "<<word[sum%10]<<endl;
	if(sum < 10 && sum > 0)
		cout << word[sum] <<endl;
	return 0;
}
