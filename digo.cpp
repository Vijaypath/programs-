#include <bits/stdc++.h>
#define R 5
#define C 4
using namespace std;

bool isValid(int i, int j)
{
	if (i < 0 || i >= R 
		|| j >= C || j < 0)
		return false;
	return true;
}

void diagonalOrder(int arr[][])
{
	/* through this for loop we choose 
	each element of first column as 
	starting point and print diagonal 
	starting at it.
	arr[0][0], arr[1][0]....arr[R-1][0] 
	are all starting points */
	for (int k = 0; k < R; k++) 
	{
		cout << arr[k][0] << " ";
	
		// set row index for next point in
		// diagonal
		int i = k - 1;
		
		// set column index for next point in
		// diagonal
		int j = 1; 

		/* Print Diagonally upward */
		while (isValid(i, j)) {
			cout << arr[i][j] << " ";
			i--;
		
			// move in upright direction
			j++; 
		}
		cout << endl;
	}

	for (int k = 1; k < C; k++)
	{
		cout << arr[R - 1][k] << " ";
	
		// set row index for next point in
		// diagonal
		int i = R - 2; 
		
		// set column index for next point in
		// diagonal
		int j = k + 1; 

		/* Print Diagonally upward */
		while (isValid(i, j)) 
		{
			cout << arr[i][j] << " ";
			i--;
		
			j++;
		}
		cout << endl;
	}
}

int main()
{

	int arr[100][100],r,c;
	cin>>r >>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		cin>>arr[i][j];
	}
	diagonalOrder(arr);
	return 0;
}

