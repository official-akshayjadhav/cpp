#include<iostream>

using namespace std;

int main()
{
	int arr1[3][3],arr2[3][3],ans[3][3];

	int i=0,j=0,k=0;

	cout<<"\nEnter data for matrix 1 (3X3) :\n";
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			cin>>arr1[i][j];

	cout<<"\nEnter data for matrix 2 (3X3) :\n";
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			cin>>arr2[i][j];


	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			ans[i][j]=0;

			for(k=0;k<3;k++)
				ans[i][j]+=(arr1[i][k]*arr2[k][j]);
		}

	cout<<"\nMatrix Multiplication (3X3) :\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
	
	return 0;
}	