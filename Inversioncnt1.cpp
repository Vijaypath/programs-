#include<iostream>
using namespace std;
int cntinvers(int a[],int n)
{
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j] && i<j)
			{
				cnt++;
			}
		}
	}
	return cnt;
	
}
int main()
{
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<cntinvers(a,n)<<" ";
}
