#include<bits/stdc++.h>
using namespace std;

int main(){
	//integer's
	int num=11;// int 4 bytes => -2^31 to 2^31-1
	long long num2 = 99999999;//8 bytes => -2^63 to 2^63-1
	cout<< num << endl;
	cout<< num2 <<endl;
	
	//decimal
	float height = 5.66666;//4 bytes
	double weight = 55.67;//8 bytes
	cout<< height << endl;
	cout<< weight << endl;
	
	//character
	char ch=108;
	char alp='a'+4;
	cout<< ch << endl;
	cout<< alp << endl;
	
}