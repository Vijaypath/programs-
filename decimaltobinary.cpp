#include<iostream>
using namespace std;
int main()
{
	int n;
    int i=0;

	int a[100];
	cin>>n;
	while(n>0)
	{
     	a[i]=n%2;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
{
	cout<<a[j]<<" ";
}	
}
