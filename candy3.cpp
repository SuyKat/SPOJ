#include <iostream>
using namespace std;
int main(){
	int t;
	long long int N, c;
	cin >> t;
	for(int i=0; i<t; i++){
		cout << "\n";
		cin >> N;
		long sum=0;
		for(int j=0; j<N; j++){
			cin >> c;
			sum = (sum+c)%N;
		}
		if(sum == 0)	cout << "YES" << endl;
		else	cout << "NO" << endl;
	}
}
