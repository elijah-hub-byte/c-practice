#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int strt, end;
		cin >> strt >> end;
		
		for(int num = strt+1; num < end; num++){
			
			bool isPrime = true;
			
			for(int i = 2; i <= (num/2); i++){
				
				if(num % i == 0 ) {
					isPrime = false;
					break;
				}
			}
			if(isPrime) cout << num << " ";
		}
		cout << endl;
	}
}