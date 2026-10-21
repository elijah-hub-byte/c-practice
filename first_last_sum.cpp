#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, last, first, temp;
    cin >> t;
    cin >> n;
    temp = n;
	last = temp % 10;
	while (t > 1){
	    temp = temp / 10;
	    t--;
	    if (t == 0){
	        first = temp;
	        break;
	    }
	}
	cout << first+last;

}
