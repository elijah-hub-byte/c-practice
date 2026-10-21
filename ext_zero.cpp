#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, ans, dig, temp, rev;

	cin >> n;
	temp = n;
	rev = 0;
	    
	while(n > 0) {
	    dig = n % 10;
	    if (dig != 0){
	    	rev = rev*10+dig;
		}
		n = n/10;
	}
	
	while(rev > 0) {
	    dig = rev % 10;
	    ans = ans*10+dig;
	    rev = rev/10;
	}
	
	cout << ans;
}
