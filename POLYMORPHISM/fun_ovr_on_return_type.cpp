/*
prog : 	function overloading on return type
		
		checking ambiguity while calling overloaded function based
		on return type.
*/

#include<iostream>

using namespace std;

class Test
{
		int i=5;
		float f=5.5;
	public:
		int getNo(){return i;}
		float getNo(){return f;}
};

int main()
{
	Test t;
	int i=t.getNo();
}