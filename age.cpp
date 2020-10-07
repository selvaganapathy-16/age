#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter the age\n";
	cin>>age;
	if(age>=18)
	{
		cout<<"ELIGABLE";
	}
	else
	{
		cout<<"NON ELIGABLE \n";
		cout<<"wait for "<<18-age<<"years";
	}
	return 0;
}
