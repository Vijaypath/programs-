#include<iostream>
using namespace std;
void intersection(int a[],int b[],int m,int n)
{
	int i=0,j=0;
	while(i<m && j<n)
	{
			if(a[i]<b[j])
			{
				i++;
			}
			else if(b[j]<a[i])
			{
			j++;
			}
			else 
			{
				cout<<a[i++]<<" ";
			//	i++;
				j++;
			}
}
/*	while(i<m)
	{
		cout<<a[i++]<<" ";
	}
	while(j<n)
	{
		cout<<a[j++]<<" ";
	}*/
}
int main()
{
	int m,a[1000],b[1000];
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	int n;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>b[j];
	}
intersection(a,b,m,n);
}
