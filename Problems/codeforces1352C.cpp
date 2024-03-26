#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
	int TC;
	cin>>TC;
	
	while(TC--){
		long long int n,k;
		cin>>n>>k;
		long long int res = k+((k-1)/(n-1));
		cout<<res<<endl;
	}

	return 0;
}
