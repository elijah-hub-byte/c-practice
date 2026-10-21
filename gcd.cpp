#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int minn = min(a, b);
	int ans;
	for(int i = minn; i >= 1; i --){
		if(a % i == 0 && b % i == 0){
			ans = i;
			break;
		}
	}
	cout << ans;
}