#include<string.h>
#include<vector>

#include "intToRoman.cpp"
#include "romanToInt.cpp"



bool isValidNumber(string str, int n, char ch)
{
	n = 0;
	while(str[n] !='\0')
		n++;
	n--;

	// 1. D L V should not be repeated
	if((str[n] == 'd' || str[n] == 'D') && (ch == 'D' || ch == 'd'))
		return false;
	else if((str[n] == 'l' || str[n] == 'L') && (ch == 'l' || ch == 'L'))
		return false;
	else if((str[n] == 'v' || str[n] == 'V') && (ch == 'v' || ch == 'V'))
		return false;
		
	// I X C M should repeated only for 3 times
	if(n >= 2){
		if((str[n] == 'm'||str[n] == 'M') && (str[n-1] == 'm'||str[n-1] == 'M')&& (str[n-2] == 'm'||str[n-2] == 'M') && (ch == 'm'||ch == 'M'))
			return false;
	else if((str[n] == 'x'||str[n] == 'X') && (str[n-1] == 'x'||str[n-1] == 'X')&& (str[n-2] == 'x'||str[n-2] == 'X') && (ch == 'x'||ch == 'X'))
		return false;
	else if((str[n] == 'c'||str[n] == 'C') && (str[n-1] == 'c'||str[n-1] == 'C')&& (str[n-2] == 'c'||str[n-2] == 'C') && (ch == 'c'||ch == 'C'))
		return false;
	else if((str[n] == 'i'||str[n] == 'I') && (str[n-1] == 'i'||str[n-1] == 'I') && (str[n-2] == 'i'||str[n-2] == 'I') &&(ch == 'i'||ch == 'I'))
		return false;
	}
	
	//i should be subtracted from V and X only
	
	if(value(str[n]) < value(ch)){
	
		if((str[n] == 's'||str[n]=='S')||(str[n] == 'v'||str[n]=='V')||(str[n] == 'l'||str[n]=='L')||(str[n] == 'd'||str[n]=='D'))
			return false;
			
		if(str[n] == 'i'||str[n] == 'I'){
			if(!((ch == 'X'||ch == 'x')||(ch == 'v' || ch == 'V')))
				return false;
		}	
		//x should be subtracted from L and C only
		if(str[n] == 'x'||str[n] == 'X'){
			if(!((ch == 'c'||ch == 'C')||(ch == 'l' || ch == 'L')))
				return false;
		}
		//c should be subtracted from D and M only
		if(str[n] == 'c'||str[n] == 'C'){
			if(!((ch == 'd'||ch == 'D')||(ch == 'm' || ch == 'M')))
				return false;
		}	
	}		
	return true;
}



int main(){
	string str, nstr;
		
	cout<<"Enter string : ";
	getline(cin,str);
		
	int i = 0, k = 0, no = 0 ;
	int n1=0, n2=0;
	
	char ch;
	nstr = "";
	while(str[i] != '\0'){
		
		ch = str[i];
		k = value(ch);
		
		//if char is valid
		if(k != -1 ){
		
			 if(isValidNumber(nstr, i, ch) == true){
			 	nstr += ch;
			 }
			 
			 else{
			 	n2 = romanToInt(nstr);
				if(n2 > n1 )
					n1 = n2;
					
				nstr = ch;
			 }
		}	
		i++;
	}
	if(nstr != ""){
		n2 = romanToInt(nstr);
		if(n2 > n1 )
			n1 = n2;
	}
	
	nstr = intToRoman(n1);	
	cout<<"greater val int : "<<n1<< "  roman : "<<nstr<<endl;
	
	return 0;
}

