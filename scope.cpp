/*
	prog: scope of var -local var har more precedence than global
	dt: 27-09-2017
*/

#include<iostream>

using namespace std;

int val=10;

void  extra()
{
	cout<<val<<endl;
}

int main()
{
	extra();

	{
		int val=20;
		cout<<val<<endl;
		cout<<::val<<endl<<endl;

		val=1;

		++val+=val;
		cout<<val;

	}
}