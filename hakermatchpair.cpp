#include<iostream>
using namespace std;
int main() {
	int n,c=0;
	int a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j] && a[i]>0)
			{
				c++;
				a[i]=0;
				a[j]=0;
			}
		}
	}
	cout<<c;
}
