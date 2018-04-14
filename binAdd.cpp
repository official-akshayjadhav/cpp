#include<iostream>
#include<stack>

using namespace std;


class binAdd
{
		char ch[100];
		stack <int > n1;
		stack < int > n2;
		stack < int > res;
	public:
		void getData();
		void add();
};

void binAdd::getData()
{
	cout<<"\nEnter 1st no : ";
	cin>>ch;

	for(int i=0;ch[i]!='\0';i++)
		n1.push(ch[i]-48);

	cout<<"\nEnter 2nd no : ";
	cin>>ch;
	for(int i=0;ch[i]!='\0';i++)
		n2.push(ch[i]-48);

}



void binAdd::add()
{
	int carry=0,sum=0,a,b;
	while(!n1.empty()||!n2.empty())
	{

		if(!n1.empty())
			{a=n1.top();n1.pop();}
		else
			a=0;
		if(!n2.empty())
			{b=n2.top();n2.pop();}
		else
			b=0;
		sum=(a+b+carry)%2;
		carry=(a+b+carry)/2;
		res.push(sum);
	}

	cout<<"\nAddition   : "<<carry<<" ";
	while(!res.empty())
	{
		cout<<res.top();res.pop();
	}
}

int main()
{
	binAdd b;
	b.getData();
	b.add();

	return 0;
}