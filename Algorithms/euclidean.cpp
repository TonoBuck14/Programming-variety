#include <iostream>
using namespace std;


int gcd(int a, int b){
	while(a%b){
		int rem = a%b;
		a = b;
		b = rem;
		}
	return b;
	}

int main(){
	int test = gcd(8,9);
	cout<<test<<"\n";
	
	}
