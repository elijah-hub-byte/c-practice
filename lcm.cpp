#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int maxx = max(a, b);
	int ans;
	for(int i = maxx; i <= a*b; i += maxx){
		if(i % a == 0 && i % b == 0){
			ans = i;
			break;
		}
	}
	cout << ans;
}