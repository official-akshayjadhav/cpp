#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream inf;
	inf.open("/media/akshay/127106de-0c48-42c0-95bf-890cb6371783/PROGRAMMING/DS-LOGICAL/FILE-HANDLING/text.txt");
	char ch;
	while(true)
	{
		inf>>ch;
		cout<<ch;
		if(inf.eof())
			break;
	}

	return 0;
}