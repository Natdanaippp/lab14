#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void showMatrix(const bool a[][N])
	{
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
void inputMatrix(double a[][N])
	{
		for(int i=0;i<5;i++)
		{
			cout<<"Row "<<i+1<<": ";
			for(int j=0;j<5;j++)
			{
				cin>>a[i][j];
			}
		}
	}
void findLocalMax(const double a[][N], bool s[][N])
{
    for(int i=0;i<5;i++)
    		{
    			for(int j=0;j<5;j++)
    			{
    			    s[i][j]=0;
    			}
    		}
    for(int i=1;i<4;i++)
		{
			for(int j=1;j<4;j++)
			{
				if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
				{
				    s[i][j]=1;
				}
			}
		}
}