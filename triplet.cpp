#include <bits/stdc++.h> 
using namespace std; 

 
int maximum(int a, int b, int c) 
{ 
return max(max(a, b), c); 
} 


int minimum(int a, int b, int c) 
{ 
return min(min(a, b), c); 
} 


void smallestDifferenceTriplet(int arr1[], int arr2[], 
									int arr3[], int n) 
{ 

	sort(arr1, arr1+n); 
	sort(arr2, arr2+n); 
	sort(arr3, arr3+n); 

	int res_min, res_max, res_mid; 

	
	int i = 0, j = 0, k = 0; 

 
	int diff = INT_MAX; 
	while (i < n && j < n && k < n) 
	{ 
		int sum = arr1[i] + arr2[j] + arr3[k]; 

	
		int max = maximum(arr1[i], arr2[j], arr3[k]); 

	 
		int min = minimum(arr1[i], arr2[j], arr3[k]); 
		if (min == arr1[i]) 
			i++; 
		else if (min == arr2[j]) 
			j++; 
		else
			k++; 

		if (diff > (max-min)) 
		{ 
			diff = max - min; 
			res_max = max; 
			res_mid = sum - (max + min); 
			res_min = min; 
		} 
	} 

	cout << res_max << ", " << res_mid << ", " << res_min; 
} 

int main() 
{ 
	int arr1[100]; 
	int arr2[100]; 
	int arr3[100]; 
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr1[i];
	for(int j=0;j<n;j++)
	cin>>arr2[j];
	for(int k=0;k<n;k++)
	cin>>arr3[k];
//	int n = sizeof(arr1) / sizeof(arr1[0]); 
	smallestDifferenceTriplet(arr1, arr2, arr3, n); 
	return 0; 
} 

