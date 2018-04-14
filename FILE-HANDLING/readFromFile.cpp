/*
prog : 	to read data from file specified in command line and display on screen

date :	08-12-2017
*/		

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char str[100];
	string fnm;
	fstream fin;

	//open file
	fnm="tmp.txt";
	fin.open("tmp.txt");

	//checking file opening error
	if(fin.fail())
	{
		cout<<"\nError while opening file !";
		return 0;
	}

	while(!fin.eof())
	{
		fin.getline(str,100);
		cout<<str<<endl;
	}

	return 0;
}

