#include <iostream>

using namespace std;

int main() {
int a[100][100];
	int r, c;

	cin >> r >> c;
	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		cin>>a[row][col];
	}
		int sr=0,sc=0,er=r-1,ec=c-1;
while(sr<=er)
{
	for(int i=sc;i<=ec;i++)
	{
		cout<<a[sr][i]<<" ,";
	}
	sr++;
//	if(sc>ec) break;

	for(int i=ec;i>=sc;i--)
	{
		cout<<a[sr][i]<<" ,";
	}
	sr++;
		for(int i=sc;i<=ec;i++)
		{
			cout<<a[sr][i]<<" ,";
		}
		sr++;
			for(int i=ec;i>=sc;i--)
             {
             			cout<<a[sr][i]<<" ,";

			 }
}
cout<<"END";
	cout << endl;
	
return 0;
}
