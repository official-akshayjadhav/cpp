/*
prog : to change the specified word with new word
		 - arg. are passes through command line
		 $prog_run_file <old word> <new word> <file name>
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;


void repl(fstream &fl,char w[50],char ow[50],char nw[50])
{
	fstream fl2;
	fl2.open("tmp.txt");
	fl.seekp(0,ios::beg);
	if(fl2.fail())
	{
		cout<<"\ncould not open the file !";
		return ;
	}
	while(true)
	{
		fl>>w;

		if(fl.eof())
			break;
		if(strcmp(w,ow)==0)
			fl2.write((char *)nw,sizeof(&nw));
		else
			fl2.write((char *)w,sizeof(&w));
	}
	fl2.close();
	fl2.open("tmp.txt");
	
	fl2.seekp(0,ios::beg);
	cout<<"\n\n\nnew file : \n";
	while(true)
	{
		fl2>>w;
		cout<<"\t "<<w;
		if(fl2.eof())
			break;
	}
	fl2.close();
}
int main(int argc,char * argv[])
{
	char *ow,*nw,*fnm;
	char w[50];
	if(argc!=4)
	{
		cout<<"\ninvalid arguemtns !\ntry again. ";
		return 0;
	}

	ow=argv[1];
	nw=argv[2];
	fnm=argv[3];

	cout<<"\nold :"<<ow<<"\t new : "<<nw<<"\t file : "<<fnm<<endl;
	fstream fl;
	fl.open(fnm);

	if(fl.fail())
	{
		cout<<"\ncould not open the file !";
		return 0;
	}
	cout<<"\nreading file :...";

	while(true)
	{
		fl>>w;
		cout<<"\t "<<w;
		if(fl.eof())
			break;

		if(strcmp(w,ow)==0)
		{
			cout<<"\nreplacing ....";
			repl(fl,w,ow,nw);
			break;
		}
	}
	fl.close();

	return 0;
}