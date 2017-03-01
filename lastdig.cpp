#include <iostream>
int mod(int base, long long index);

using namespace std;
int main(){
	int base, t;
	long long index;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> base;
		cin >> index;
		if(base==0 && index==0)
			cout << "Wrong input"<<endl;
		else 
			cout << mod(base, index) << endl;
	}
}
int mod(int base, long long index){
	int y;
	if(index == 0)
		return 1;
	else if(index%2 == 0){
		y = mod(base, index/2);
		return (y*y) % 10;
	}
	else
		return ((base%10)*mod(base, index-1))%10;
}
