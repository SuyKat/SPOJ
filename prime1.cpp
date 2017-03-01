#include <iostream>
#include <cmath>
#include <cstring>
#define diffen 1000000
using namespace std;
void primes(int m, int n);
void primes(int m, int n){
	int temp = sqrt(n), res;
	int size = temp+1, num;
	bool *b = new bool[diffen];
	bool *a = new bool[size];
	for(int i=0; i<=size; i++){
		a[i] = true;
	}
	for(int i=0; i<=diffen; i++){
                b[i] = true;
        }
	if(m==2 || m==1) 
		cout << "2"<< "\n"<< "3" << endl;
	if(m == 3) 
		cout << "3" << endl;
//	b[0] = false;
//	b[0] = false;
	a[0] = false;
	a[1] = false;
	for(int i=4; i<=temp; i+=2){
		a[i] = false;
	}
	for(int i=3; i <= sqrt(temp); i++){
		if(a[i] == true)
			for(int j=3; (num=i*j)<= temp; j++)
					a[num] = false;
	}
	for(int i=2; i<=temp; i++){
		if(a[i] == true){
			res = m/i;
			res = i*res;
			for(int j=res; j<=n; j=j+i){
				if(j<m)	continue;
				b[j-m] = false;
			}
		}
	}
	for(int i=0; i<n-m+1; i++){
		if(b[i] == true){
			cout << i+m << endl;
		}
	}
	delete[] b;
	delete[] a;
}
int main(){
	int m, n, t;
        cin >> t;
        while(t--){
                cin >> m;
		cin >> n;
//		if(m<n && n<1000000000 && n-m<1000000)
                	primes(m, n);
		cout << "\n";
        }
	return 0;
}
