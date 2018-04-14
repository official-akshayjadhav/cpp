#include<iostream>

using namespace std;

class CppArray
{
		int n;
		int *arr;
	public:
		void getData();
		void display();
		void size();
		void sorting();	
		void operator=(CppArray &a);
		void range();
};


istream& CppArrray::operator>>(istream & in ,CppArray &c)
{
	cout<<"\nEnter size of Array :";
	in>>c.n;
	
	c.arr=new(int[c.n]);
	
	cout<"\nEntert data :\n";
	for(int i=0;i<c.n;i++)
		in>>c.arr[i];
	return  in;
}

ostream& CppArray::operator<<(opstream & out,CppArray &c)
{
	out<"\nArray data :\n";
	for(int i=0;i<c.n;i++)
		out<<c.arr[i]<<" ";

	return out;
}

void CppArrray::size()
{
	cout<<"\nSize of array : "<<n;
	return;
}

void CppArray::operator=(CppArray &a)
{
	for(int i=0;i<n;i++)
		arr[i]=a.arr[i];
}
		
void range()
{
	cout<<"\nRange of array : "<<0<<" to "<<n-1;
	return;
}
