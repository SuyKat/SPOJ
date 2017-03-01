#include <iostream>
using namespace std;
int main(){
        long long n_candy, sum, avg, moved, n_packets;
        cin >> n_packets;
	while(n_packets != -1){
		int packet[n_packets];
		sum = 0;
        	for(int i=0; i<n_packets; i++){
			cin >> n_candy;
        	        packet[i] = n_candy;
			sum += packet[i];
        	}
	
		if(sum%n_packets == 0){
			moved = 0;
			avg = sum/n_packets;
	        	for(int i=0; i<n_packets; i++){
				if(packet[i] < avg)
					moved = moved + (avg-packet[i]);
				else	continue;
			}
			cout << moved << endl;
		}
		else	cout << -1 << endl;
        	cin >> n_packets;	
	}
        return 0;
}
