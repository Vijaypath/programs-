#include<iostream>
using namespace std;
int finmaxsum(int a[],int n)
{
	int incl=a[0],excl=0,newexcl;
	for(int i=1;i<n;i++)
	{
		newexcl=max(incl,excl);
		
	incl=excl+a[i];
	excl=newexcl;
	}

return (max(incl,excl));
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
//	cout<<tmp;
	
	cout<<finmaxsum(a,n);
}
