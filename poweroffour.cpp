#include<bits/stdc++.h>

using namespace std;

bool isPowerOfFour(int n)
{
	int count = 0;

	if ( n && !(n&(n-1)) )
	{
		while(n > 1)
		{
			n >>= 1;
			count += 1;
		}
	if(count%2 == 0)
	cout<<"true";
	else 
	cout<<"false";
	}
	return false;
}
int main()
{
	int n;
	cin>>n;
	isPowerOfFour(n);
}


