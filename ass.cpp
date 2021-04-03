// A simple C++ based program to find length of longest even length 
// substring with same sum of digits in left and right 
#include<bits/stdc++.h> 
using namespace std; 

int findLength(char *str) 
{ 
	int n = strlen(str); 
	int maxlen =0;

	for (int i=0; i<n; i++) 
	{ 
		for (int j =i+1; j<n; j += 2) 
		{ 
			int length = j-i+1;//Find length of current substr 

			// Calculate left & right sums for current substr 
			int leftsum = 0, rightsum =0; 
			for (int k =0; k<length/2; k++) 
			{ 
				leftsum += (str[i+k]-'0'); 
				rightsum += (str[i+k+length/2]-'0'); 
			} 

			// Update result if needed 
			if (leftsum == rightsum && maxlen < length) 
					maxlen = length; 
		} 
	} 
	return maxlen; 
} 

int main(void) 
{ 
    int n;
	char str[100] ; 
	cin>>n;
	cin>>str;
	cout<< findLength(str); 
	return 0; 
} 
 

