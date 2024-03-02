#include <iostream>
using namespace std;

//works for finding coprime integers
int gcd(int a, int b){
	while(a%b){
		int rem = a%b;
		a = b;
		b = rem;
		}
	return b;
	}

int main(){
	int test = gcd(8,8);
	cout<<test<<"\n";
	
	}
