#include<iostream>
#include<cstring>
using namespace std;

class exceptionClass
{
	int age;
	double income ;
	string city;
	int fw,cnt;
	public:
	
	void getAge()
	{
		try{
		cout<<"Enter the age: "<<endl;
		cin>>age;
		if(age>55 || age <18)
			throw age;
		else
			cnt++;	
		}catch(int i){
			cout<<"The age should be within 55 and 18: "<<endl;}
	}
	
	void getIncome()
	{
		try{
			cout<<"Enter the Income: "<<endl;
			cin>>income;
			if(income < 50000 || income > 100000)
				throw income;
			else
				cnt++;
		}catch(double in)
		{
			cout<<"The income should be in the range of 50K and 100K only: "<<in<<endl;
		}
	}
	void getCity()
	{
		try{
			cout<<"Enter the City: "<<endl;
			cin>>city;
			if(city == "pune" || city == "mumbai" || city == "banglore" || city == "chennai")
				cnt++;
			else
				throw city;
		}
		catch(string c)
		{
			cout<<"The person should be living in valid cities only : "<<c;
		}
	}
	void getFw()
	{
		try{
			cout<<"Do you have a Four Wheeler ? [1/0]"<<endl;
			cin>>fw;
			if(fw)
				cnt++;
			else
				throw fw;
		}catch(int f)
		{
			cout<<"The person should have a four wheeler"<<endl;
		}		
	}
	
	void check()
	{
		if(cnt == 4)
			cout<<"The Entered data has been accepted thank you !"<<endl;
		else
			cout<<"The Entered data seems to be invalid please try again"<<endl;
	}
};

int main()
{
	exceptionClass e;
	e.getAge();
	e.getIncome();
	e.getCity();
	e.getFw();
	e.check();
	
	return 0;
}
