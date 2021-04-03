#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
//	int a[100];
	int cntbit=0;
//	for(int i=0;i<n;i++)
	//{
		//cin>>a[i];
	//}
	while(n!=0)
	{		
		if((n&1)==1)
		{
			cntbit++;
		}
		else
		n=n>>1;
	}
	cout<<cntbit<<endl;
	return 0;
}
