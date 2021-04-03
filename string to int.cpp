#include<iostream>
#include<cstring>
using namespace std;
int strtoint(char *a,int n)
{
	if(n==0)
	{
		return 0;
	}
	int dig=a[n-1]-'0';
	int chota=strtoint(a,n-1);
	return chota*10+dig;
}

int main()
{
	char a[100];
	cin>>a;
	int x=strtoint(a,strlen(a));
	cout<<x<<endl;
	return 0;
}
