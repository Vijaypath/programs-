#include<iostream> 
using namespace std; 

/*C++ Function to print leaders in an array */
void printLeaders(int arr[], int size) 
{ 
	for (int i = 0; i < size; i++) 
	{ 
		int j; 
		for (j = i+1; j < size; j++) 
		{ 
			if (arr[i] >arr[j]) 
				break; 
		}	 
		if (j == size)
			cout << arr[i] << " "; 
} 
} 

int main() 
{ 
	int arr[100]; 
int n;
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];
	printLeaders(arr, n); 
	return 0; 
} 

