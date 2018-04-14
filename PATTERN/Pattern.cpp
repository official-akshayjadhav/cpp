#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	char a = 'A';

	int i,j,k = n/2;

	for(i = 0; i< (n/2+1);i++){
			
			for(j=0;j<n;j++){
			if( i== 0 || (j< (k-i+1) || (j> (k+i-1))))
				cout<<a;
			else
				cout<<" ";

			a = (j<n/2)?(a+1):(a-1);
		}
		cout<<endl;
	}

	return 0;
}