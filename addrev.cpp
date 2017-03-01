#include <iostream>
using namespace std;
int reverse(int x){
        int res = 0;
        while(x>0){
                res = res*10 + x%10;
                x = x/10;
        }
        return res;
}
int main(){
        int n, m, times, z;
        cin >> times;
        while(times--){
                cin >> n >> m;
                z = reverse(reverse(n)+reverse(m));
                cout << z<<endl;
        }
}                                                                                                
