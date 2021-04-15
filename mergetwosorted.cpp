#include<bits/stdc++.h>
using namespace std;
/*void printarr(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
*/
void mergetwoarr(int a[],int b[],int n,int m)
{
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
		
		cout<<a[i++]<<" ";
	}
		else if(b[j]<a[i])
		{
		
		cout<<b[j++]<<" ";
	}
		else
		{
		cout<<a[i++]<<" "<<b[j++];
	//	j++;
	}
	}
	while(i<n)
	{
		cout<<a[i++]<<" ";
	}
	while(j<m)
	{
		cout<<b[j++]<<" ";
			}
//	printarr(a,n);
}
int main()
{
	int a[1000],b[1000],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	for(int j=0;j<m;j++)
	{
		cin>>b[j];
	}
	
	mergetwoarr(a,b,n,m);
}
