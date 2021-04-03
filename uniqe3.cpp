#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,arr[100];
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> arr[i];

	int tc = INT_MAX , tcp1 = 0 , tcp2 = 0;

	for(int i=0;i<n;i++){
		int temp = tc & arr[i];
		int temp1 = tcp1 & arr[i];
		int temp2 = tcp2 & arr[i];

		tc = tc & (~temp);
		tcp1 = tcp1 | temp;

		tcp1 = tcp1 & (~temp1);
		tcp2 = tcp2 | temp1;

		tcp2 = tcp2 & (~temp2);
		tc = tc | temp2;
	} 

	cout << tcp1 ;
	return 0;
}
