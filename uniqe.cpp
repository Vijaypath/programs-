#include<iostream>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	x=a[0];
	
for(int i=1;i<n;i++)
{
	if(a[i]==x)
	{
		cout<<"duplicates element are"<<" "<<a[i]<<endl;
		x++;
	}
	else
	cout<<x;
	break;
}
}

	

