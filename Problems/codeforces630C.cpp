#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	
	int n;
	long long int sum = 0;
	cin>>n;
	for(int i=0;i<=n;i++){
		sum+=pow(2,i);
		}
	sum-=1;
	cout<<sum<<endl;
	return 0;
	}
