#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int a=1;a<N;a++)
	{
		cout << a<<"  ";
		for(int i=a-1;i>=0;i--)	
		{	
			int r=0;
			int f;
			int asd = d[a];
			if(d[a]>=d[i])
			{
				if(i==0)
				{
					for(int j=a;j>=0;j--)
					{
						d[j]=d[j-1];
					}
					d[0]=asd;
					continue;
				}
				f=i;
				r+=1;
				continue;
			}
			else
			{
				if(r!=0)
				{
					for(int i=a;i>=f;i--)	
					{
						d[i]=d[i-1];
					}
					d[f]=asd;
				}
				
			}
		}
		for(int i = 0; i < 10; i++) cout << d[i] << " ";
		cout << "\n";
	}
	
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
