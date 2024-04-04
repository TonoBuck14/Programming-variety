#include <iostream>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int result = 0;
		int h, m;
		cin>>h>>m;
		result+=60*(24-h)-m;
		cout<<result<<endl;
		}
	
	}
