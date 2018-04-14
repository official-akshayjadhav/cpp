#include<iostream>

using namespace std;

class shape
{
	public:
		virtual void area()=0;
};

class rectangle:public shape
{
		int l,b;
		double a;
	public:
			void getData();
			void display();
			void area();
};

void rectangle::getData()
{
	cout<<"\nenter l & b :";
	cin>>l>>b;
}

void rectangle::display()
{
	cout<<"l :"<<l<<" b: "<<b<<endl;
}

void rectangle::area()
{
	a=l*b;
	cout<<"  area : "<<a<<endl;
}

class triangle:public shape
{
		int h,b;
		int a;

	public:
		void getData();
		void display();
		void area();
};

void triangle::getData()
{
	cout<<"\nEnter h & b : ";
	cin>>h>>b;
}

void triangle::display()
{
	cout<<"h : "<<h<<"b : "<<b<<endl;
}

void triangle::area()
{
	a=(h*b)/2;
	cout<<"area : "<<a;
}


class circle:public shape
{
		int r;
	public:
			void getData();
			void display();
			void area();
};

void circle::getData()
{
	cout<<"\nEnter r: ";
	cin>>r;
}

void circle::display()
{
	cout<<"\n r : "<<r<<endl;
}

void circle::area()
{
	cout<<"area of circle :"<<(3.1415 * r * r)<<endl;
}


int menu()
{
	cout<<"\ngetdata :\n\t1.rectangle\n\t2.triangle\n\t3.circle";
	cout<<"\nDisplay :\n\t4.rectangle\n\t5.triangle\n\t6.circle";
	cout<<"\nArea : \n\t7.rectangle\n\t8.triangle\n\t9.circle";
	cout<<"\n10.exit";
	cout<<"\nchoose option :";
	
	int opt;
	cin>>opt;

	return opt;
}


int main()
{
	rectangle r;
	triangle t;
	circle c;

	while(true)
	{
		system("clear");

		switch(menu())
		{
			case 1:
				r.getData();
				break;
			case 2:
				t.getData();
				break;
			case 3:
				c.getData();
				break;

			case 4:
				r.display();
				break;
			case 5:
				t.display();
				break;
			case 6:
				c.display();
				break;
			case 7:
				r.area();
				break;
			case 8:
				t.area();
				break;
			case 9:
				c.area();
				break;
			case 10:
				exit(0);
			default:
				cout<<"sorry ! wrong choice :(\ntry again :)"<<endl;
		}
		getchar();
		getchar();
	}

	return 0;
}
