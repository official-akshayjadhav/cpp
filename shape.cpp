#include<iostream>

const PI = 3.14;

using namespace std;

class shape
{
	public:
	virtual void area()=0;
};

class circle :public shape
{
	double rad; 
	void area(){
		cout<<"Enter the value for radius: "<<endl;
		cin>>rad;
		cout<<"The area of circle is: "<<(PI*rad*rad);
	}
};

class rectangle:public shape
{
	int len,b;
	void area()
	{
		cout<<"Enter the value for length and breadth: "<<endl;
		cin>>len>>b;
		
		cout<<"Area: "<<len*b;	
	}
}
 
 class triangle :public shape
 {
 	int h , len;
 	public:
 		void area()
 		{
 				cout<<"Enter the value of height and length: "<endl;
 				cin>>h>>len;
 	
 				cout<<"Area: "<<(0.5*h*len);
 		}
 }
int main()
{
	shape base;
	int ch ;
	char status;
	do{
		cout<<"1.triangle \n 2.rectangle \n 3.circle \n 4.Exit \n Choose Option: \n";
		cin>>ch;
		switch(ch)
		{
			case 4:
			exit(EXIT_SUCCESS);
			case 1:
					triangle().area();
			break;
			case 2:
					rectangle().area();
			break;
			case 3:
					circle().area(); break;
			default:
				cout<<"Wrong Choice !"<<endl;
		}
		cout<<"Do you want to continue ?[Y/N]"<<endl;
		cin>>status;
	}while(status == 'Y' || status == 'y');
	return 0;
}