#include <iostream>
using namespace std;
int main(){
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        while(a!=0 || b!=0 || c!=0){
        	if(2*b == a+c)
			cout << "AP" << " " <<(c+(b-a)) << endl;
		else
			cout << "GP" << " " <<(b/a)*c << endl;
		cin >> a;
        	cin >> b;
        	cin >> c;
        }
        return 0;
}


