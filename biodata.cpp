#include<iostream>
#include<iomanip>

using namespace std;

class Personal
{
	protected:
	char name[20];
	char adder[30];
	char dob[10];
	char gnd[1];
	public : 
	void getData(){
		cout<<"Enter the name:"<<endl;
		cin>>name;
		cout<<"Enter the address: "<<endl;
		cin>>adder;
		cout<<"Enter the DOB[DD/MM/YYYY]: "<<endl;
		cin>>dob;
		cout<<"Enter the Gender: "<<endl;
		cin>>gnd;
	}
};


class Academic
{
	protected:
		int year;
		int mark;
		int percentage;
		char class_[20];
	public:
		void getData()
		{
		cout<<"Enter Year of Passing: "<<endl;
		cin>>year;
		cout<<"Enter marks: "<<endl;
		cin>>mark;
		cout<<"Enter the percentage: "<<endl;
		cin>>percentage;
		cout<<"Enter the class"<<endl;
		cin>>class_;
		}
};

class Professional
{
	protected:
	char org[20];
	int noofexp;
	public:
		void getData()
		{
			cout<<"Enter the organization Name: "<<endl;		
			cin>>org;
			cout<<"Enter the No of Experience: "<<endl;
			cin>>noofexp;		
		}
};

class  Biodata : public Personal , public Academic , public Professional
{
	public:

	void display(){
		cout<<endl;
		for(int i=0;i<10;i++) 
		cout<<"*";	
	
		cout<<"\nPersonal Details :";
		
		for(int i=0;i<10;i++) 
			cout<<"*";
	
		cout<<"\n\nName :\t"<<name<<endl;
		cout<<"Address :\t"<<adder<<endl;
		cout<<"DOB :\t"<<dob<<endl;
		cout<<"Gender :\t"<<gnd<<endl;
	
		cout<<endl;
		for(int i=0;i<10;i++) 
			cout<<"*";	
	
		cout<<"Academic :";

		for(int i=0;i<10;i++) 
			cout<<"*";
	
		cout<<"\n\nYear :\t"<<year<<endl;
		cout<<"Mark :\t"<<mark<<endl;
		cout<<"Percentage :\t"<<percentage<<endl;
		cout<<"Class :\t"<<class_<<endl;
	
		cout<<endl;
		for(int i=0;i<10;i++) 
			cout<<"*";	

		cout<<"Professional :";
		for(int i=0;i<10;i++) 
			cout<<"*";

		cout<<"\n\nOrganization :\t"<<org<<endl;
		cout<<"No. of Exp. :\t"<<noofexp<<endl;
		
		cout<<endl;
		for(int i=0;i<20;i++) 
			cout<<"*";	
		}
};

int main()
{
	Biodata b;
	cout<<"***Enter Personal Data: ***"<<endl;
	b.Personal::getData();
	cout<<"***Enter Academic Data: ***"<<endl;
	b.Academic::getData();
	cout<<"***Enter Profressional: ***"<<endl;
	b.Professional::getData();

	b.display();
	
}
