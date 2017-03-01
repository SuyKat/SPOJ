#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int N, r=0, sum=0;
	cin >> N;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=sqrt(i); j++){
			if(i%j == 0)	r++;
		}
		sum += r;
	}
	cout << r<< endl;
}
