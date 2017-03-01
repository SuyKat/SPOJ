#include <iostream>
using namespace std;
void giveNumber(int x, int y);
void giveNumber(int x, int y){
	int z;
	bool b;
	if(x>=y)
		z = x-y;
		b=(z==2 || z==0); 
	if((x%2 == 0) && (y%2 == 0) && (y<=x) && b)
		cout << x+y << endl;
	else if((x%2 == 1) && (y%2 == 1) && (y<=x) && b)
		cout << x+y-1 << endl;
	else
		cout << "No Number"<< endl;
}
int main(){
        int x, y, n_ip;
        cin >> n_ip;
        for(int i=0; i<n_ip; i++){
                cin >> x;
                cin >> y;
                giveNumber(x, y);
        }
        return 0;
}
