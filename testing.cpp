#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >> t;
	while (t--) {
	    cin >> x, y;
	    int a = y*10;
	    if (x > a) cout << "yes" << endl;
	    else cout << "no" << endl;
	}

}
