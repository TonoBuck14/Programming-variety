#include <iostream>
using namespace std;

int main(){
	int x=0;
	int y=0;
	int n;
	string s;
	cin>>n;
	cin>>s;
	int c = 0;
	int lk = 0;
	for(int i = 0; i<n; i++){
		if(s[i]=='U'){
			y++;
			}
		else if(s[i]=='R'){
			x++;
			}
		int k;
		if(x==y){
			k=0;
			}
		else if(y>x){
			k=2;
			}
		else if(x>y){
			k=1;
			}
		
		if (lk==0){
			lk = k;
			}
		if(k!=0 && lk!=k){
			lk=k;
			c++;
			}
		
		
		}
	cout<<c<<endl;
	
	
	return 0;
	}
