/*
prog :	handling divide by zero exception
		with - exception handling
*/

#include<iostream>

using namespace std;

int main()
{
	try{
		throw 0;
	}
	catch(int i)
	{
		cout<<"in catch wow !";
	}

	return 0;

}