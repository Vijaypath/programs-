#include <iostream>
using namespace std;

int main() {
int a[100][100];
	int r, c;

	cin >> r >> c;
	int sr=0,sc=0,er=r-1,ec=c-1;
	for(int row=0;row<r;row++)
	{
		for(int col=0;col<c;col++)
		cin>>a[row][col];
	}
	while(sr<=er && sc<=ec)
	{
		for(int i=0;i<=ec;i++)
		{
			cout<<a[sr][i]<<" ";
		}
		sr++;
		for(int i=3;i>=0;i--)
		{
			cout<<a[sr][i]<<" ";
		}
		sr++;
		for(int i=0;i<=ec;i++)
		{
			cout<<a[sr][i]<<" ";
		}
		sr++;
		for(int i=ec;i>=0;i--)
		{
		cout<<a[sr][i]<<" ";
		}
		sr++;
	}
}
