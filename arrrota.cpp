#include<iostream>
using namespace std;
void leftrotabyone(int a[],int n)
{
	int temp=a[0];
	for(int i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=temp;
}
	void leftrota(int a[],int d,int n)
	{
	for(int i=0;i<d;i++)
	{
	  leftrotabyone(a,n);
	}
}
	void printarr(int a[],int n)
	{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int a[100],n,d;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>d;
	leftrota(a,d,n);
	printarr(a,n);
	return 0;
}
