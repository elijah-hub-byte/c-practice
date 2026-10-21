#include<bits/stdc++.h>
using namespace std;

int main () {
	int n, t, sum = 0, d;
	cin >> n;
	t = n;
	while (t > 0) {
		d = t % 10;
		sum += d;
		t =t/10;
	}
	cout << sum;
}
