#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string decrypt(int n, string ip);
int main(){
        int n;	
	string ip;
	while(1){
        	cin >> n;
		if(n == 0)	break;
		cin >> ip;
		cout << decrypt(n, ip)<< endl;
	}
}	
string decrypt(int n, string ip){
       		int i, j, x=0, var1, var2;	
		string op;
		int odd[n];
		for(int k=0; k<n; k++){
			odd[k] = 2*k+1;
		}
		i=n-1;
		j=0;
		while(var2 <= ip.length() && x<n){
			op = op + ip[x];
			var1 = x;
			var2 = x;
        		for(int l=0; l<(ip.length()/n-1); l++){
				if(l%2 == 0){
					var1 =  odd[i] + var2;
					op += ip[var1];
				}
				else{ 
					var2 = odd[j] + var1;
					op += ip[var2];
				}
        		}
			j++;i--;
			x++;
		}
		return op;
}
