#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, ans, dig, sum, i = 2;

	cin >> n;
	sum = 0;
	// 1 2 3 4 5 6
	while(n > 0) {
		if (i % 2 == 0) {
			dig = n % 10;
			sum = sum + dig;
		}
		n = n/10;
		i++;
	}
	cout << sum;
}
