/*
prog : 	to test virtual function function working 
		
	       	class base-> display();
		   ___________________________
		       	||             ||     
		       	||          derived-base
		       	||             ||  
			 derived-base      ||
			 	||			   \/	
			    ||     class derived2-> display();
			    ||						||					
			    \/                      ||
		class derived1-> display();     ||
							||          ||
							||          ||
				derived -derived1   derived -derived2  
							||          ||
					________\/__________\/_________
					
					   class derived 3->display();



				checking working with "virtual"
							&&
					   without "virtual"

date : 08-12-2017

*/
#include<iostream>

using namespace std;

class base
{
	public:
	    void display()
		{
			cout<<"display from base"<<endl;
		}
};

class derived1 : virtual public base
{
	public:
		void display()
		{
			cout<<"display from derived 1"<<endl;
		}
};

class derived2 : virtual public base
{
	public:
		void display()
		{
			cout<<"display from derived 2"<<endl;
		}
};


class derived3 : public derived1, public derived2
{
	public:
		 void display()
		{
			cout<<"display from derived 3"<<endl;
		}
};
int main()
{
	base *d = new derived3();
	d->display();

	return 0;
}
