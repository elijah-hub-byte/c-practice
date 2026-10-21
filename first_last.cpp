#include<bits/stdc++.h>
using namespace std;

int main () {
	int t, d, x, f, l;
	cin >> x;
	
	while (x--) {
		int n;
		cin >> n;
		t = n;
		d = t % 10;
		f = d;
		
		while (t >= 10) {
			t = t/10;
		}
		
		l = t;
		
		cout << f+l;
	}
	
	
}