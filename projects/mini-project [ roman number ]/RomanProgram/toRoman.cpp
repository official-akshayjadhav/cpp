#include <iostream>
#include<string.h>

using namespace std;

string toRoman(float num)
{

	float no;
	int intnum, m, d, c, l, x, v, i, n;
	bool sf = false;

	string str = "";
	intnum = (int)num;
	no = (float)intnum;

	if(no != num ){
		intnum *=2;
		intnum +=1;
		sf = true;
	}


	if (intnum >= 1000)
	{
		m = intnum / 1000;
		n = 0;

		for (n; n < m; n++)
		//cout << "M";
		str+="M";
		intnum = intnum%1000;
	}

	if (intnum >= 900)
	{
		//cout << "CM";
		str+="CM";
		intnum = intnum%900;
	}
	else if (intnum >= 500)
	{
			{
			d = intnum / 500;
			n = 0;
			for (n; n < d; n++)
			//cout << "D";
			str+="D";
			}
	    intnum = intnum%500;
	}

	if (intnum >= 400)
	{
		//cout << "CD";
		str+="CD";
		intnum = intnum%400;
	}
	else if (intnum >= 100)
	{
			{
	        c = intnum / 100;
	        n = 0;
	        for (n; n < c; n++)
	        //cout << "C";
	        str+="C";
			}
		intnum = intnum%100;
	}

	if (intnum >= 90)
	{
	//cout << "XC";
	str+="XC";
	intnum = intnum%90;
	}
	else if (intnum >= 50)
	{
			{
	        l = intnum / 50;
			n = 0;
	        for (n; n < l; n++)
	        //cout << "L";
			str+="L";
			}
		intnum = intnum%50;
	}

	if (intnum >= 40)
	{
	//cout << "XL";
	str+="XL";
	intnum = intnum%40;
	}
	else if (intnum >= 10)
	{
			{
	        x = intnum / 10;
	        n = 0;
	        for (n; n < x; n++)
	        //cout << "X";
			str+="X";
			}
		intnum = intnum%10;
	}

	if (intnum >= 9)
	{
	//cout << "IX";
	str+="IX";
	intnum = intnum%9;
	}
	else if (intnum >= 5)
	{
			{
	        v = intnum / 5;
	        n = 0;
	        for (n; n < v; n++)
	        //cout << "V";
			str+="V";
			}
		intnum = intnum%5;
	}

	if (intnum >= 4)
	{
	//cout << "IV";
	str+="IV";
	intnum = intnum%4;
	}
	else if (intnum >= 1)
	{
	       i = intnum;
	       n = 0;
	       for (n; n < i; n++)
	       //cout << "I";
			str+="I";
	}

	if(sf == true)
		str +='S';

	return str;
}


int main(){

	while(1){
		cout<<"\n\nEnter number (enter 0 to exit) : ";
		float n;
		cin>>n;

		if(n == 0)
			return 0;
		cout<<"\nRoman number : "<<toRoman(n)<<endl;
	}
	return 0;
}
