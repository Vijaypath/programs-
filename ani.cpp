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
	while (sr <= er and sc <= ec) {
		for (int j = sc ; j <= ec ; j++) {
			cout << a[sr][j]<<","<< " ";
		}
		sr++;

		for (int i = sr ; i <= er ; i++) {
			cout << a[i][ec] <<","<< " ";
		}
		ec--;
		if (sr < er) {
			for (int i = ec ; i >= sc ; i--) {
				cout << a[er][i] <<","<< " ";
			}
			er--;
		}
		if (sc < ec) {
			for (int i = er ; i >= sr ; i--) {
				cout << a[i][sc] <<","<<" ";
			}
			sc++;
		}
	}
	cout<<"END";
	cout << endl;
	
return 0;
}
