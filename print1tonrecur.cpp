#include<iostream>
using namespace std;
void print(int n)
{
	//Base condition 
	if(n<=0)
		return ;
		// recurssive condition
//	cout<<n<<" ";

	print(n-1);
cout<<n<<" "; 
}
int main()
{
	int n;
	cin>>n;
	print(n);
//	return 0;
}
