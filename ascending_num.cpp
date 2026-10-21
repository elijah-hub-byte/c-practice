#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, ans, dig, dig1, temp, rev;

	cin >> n;
	temp = n;
	rev = 0;
	bool p = true;
	
	while(n > 0 && p == true) {
        dig1 = n % 10;
        n = n/10;
	    dig = n % 10;
	    if (dig > dig1 || dig == dig1){
	    	cout << "no";
	    	p = false;
		}
		n = n/10;
	}
	if(p) cout << "yes";
}