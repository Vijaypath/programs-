#include<iostream>
using namespace std;
void leaderele(int a[],int n)
{
		for(int i=0;i<n;i++)
	{
		int j;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			break;
		}
		if(j==n)
		cout<<a[i];

	}
}


int main () {
	int a[100];
    int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	leaderele(a,n);

	return 0;
}
