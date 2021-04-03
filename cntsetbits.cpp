// CountSetBits.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int counter[100],i=0;
	while (n != 0) {
	
		n = n & (n - 1);
		counter[i]++;
	}
	for(int i=0;i<n;i++)
	{
	cout << "Set Bits: " << counter[i] << endl;
}

	// int count_setbits =  0, count_unset = 0;

	// while (n != 0) {
	// 	if ((n & 1) == 1) {
	// 		count_setbits++;
	// 	}
	// 	else {
	// 		count_unset++;
	// 	}

	// 	n = n >> 1;
	// }


	// cout << "Sets Bits: " << count_setbits << endl;
	// cout << "UnSets Bits: " << count_unset << endl;

	return 0;
}












