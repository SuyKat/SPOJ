#include <iostream>
using namespace std;
void trailzeros(int num);
void trailzeros(int num){
	int actual, mul_fiv = 5, var;
	actual = num/5;
	var = actual;
	while(var != 0){
		mul_fiv = mul_fiv * 5;
		var = num/mul_fiv;
		actual = actual + var;
	}
	cout << actual << endl;
}
int main(){
	int ip, n_ip;
	cin >> n_ip;
	for(int i=0; i<n_ip; i++){
		cin >> ip;	
		trailzeros(ip);
	}
	return 0;
}
