#include <iostream>
#include <algorithm>
using namespace std;
int fashion(int n);
int main(){
	int n, t;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n;
		cout << fashion(n) << endl;
	}
}
int fashion(int n){
	int M[n], W[n], H[n], sum=0;
	for(int i=0; i<n; i++){
		cin >> M[i];
	}
	for(int i=0; i<n; i++){
		cin >> W[i];
	}
	sort(M, M+n);
	sort(W, W+n);
	for(int i=0; i<n; i++){
		H[i] = M[i]*W[i];
		sum = sum + H[i];
	}
	return sum;
}
