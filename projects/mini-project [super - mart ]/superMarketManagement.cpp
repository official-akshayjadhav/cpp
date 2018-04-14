#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct Stock
{
	string item_name;
	int quantity;
	float price_pk;
};

struct customer
{
	long bill_no;
	char name;
	float price;
	int quantity;
};


class Stock_records
{
	Stock s[10];
	int n;
		
	public:
		void add_stock();
		void remove_stock();
		void display();
};

void Stock_records::add_stock()
{
	
	string password={"pass"}; 
	
	cout<<"\n enter the password : ";
	string entcode;
	cin>>entcode;
	
	ofstream f;
	f.open("database1.txt",ios::out);
	
	if(password==entcode)
	{
		cout<<"\n enter the total number of product details to be entered : ";
		cin>>n;
		
		cout<<"\n enter the details of the products : ";
		
		for(int i=0;i<n;i++)
		{
			cout<<"\n =============================";
			cout<<"\n product "<<i+1<<" : ";
			cout<<"\n ------------------";
			
			cout<<"\n enter the product Name : ";
			cin>>s[i].item_name;
			
			cout<<"\n enter the quantity : ";
			cin>>s[i].quantity;
			
			cout<<"\n enter the price per kg : ";
			cin>>s[i].price_pk;
			
		}
		f.write((char*)this,sizeof(this));
		f.close();
	}
	else
	{
		cout<<"\n entered wrong pass word";
	}
}

void Stock_records::display()
{
	ifstream f;
	f.open("database.txt",ios::in);
	f.read((char*)this,sizeof(this));
	f.close();
	
	for(int i=0;i<n;i++)
		{
			cout<<"\n =============================";
			cout<<"\n product "<<i+1<<" : ";
			cout<<"\n ------------------";
			
			cout<<"\n the product Name : ";
			cout<<s[i].item_name;
			
			cout<<"\n the quantity : ";
			cout<<s[i].quantity;
			
			cout<<"\n the price per kg : ";
			cout<<s[i].price_pk;
			int m;cin>>m;
			
		}
	
}

int main()
{
	Stock_records s;

	int choice;
	
	
	
	while(1)
	{
		cout<<"\n enter the choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				s.add_stock();
				break;
				
			case 2:
				s.display();
				break;
				
			case 3:
				exit(0);	
				
			default:
				cout<<"\n enter wrong number ";		
		}
	
	}
	return 0;
}
