/*
prog : 	to test virtual function function working 
		
		class base-> display();
		       	||
			 derived
			    ||
			    \/
		class derived-> display();

		checking working with virtuality
		and without virtuality

date : 08-12-2017

*/
#include<iostream>

using namespace std;

class base
{
	public:
	    virtual void display()
		{
			cout<<"display from base"<<endl;
		}
};

class derived : public base
{
	public:
		void display()
		{
			cout<<"display from derived"<<endl;
		}
};

int main()
{
	base *d = new derived();
	d->display();

	return 0;
}
