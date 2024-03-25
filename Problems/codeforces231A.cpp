#include <iostream>
using namespace std;

int main(){
	int TC;
	int cont = 0;
	int a, b,c;
	cin >> TC;
	while(TC--){
		cin >> a >> b >> c;
		if((a&&b)||(a&&c)||(b&&c)||(a&&b&&c)){
			cont++;
			}
		}
	cout<< cont <<endl;
	return 0;
	}
