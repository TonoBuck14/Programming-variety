#include <iostream>
using namespace std;

int main(){
	
	string s;
	cin>>s;
	for(int i = 0; i<s.size()-1; i++){
		if(s.size()==1){
			break;
			}
		for(int j = 0; j<s.size()-i-1; j++){
			if(s[j]=='+'){
				continue;
				}
			
			if(s[j]>s[j+2]){
				swap(s[j], s[j+2]);
				}
			}
		}
	cout<<s<<endl;
	return 0;
	}
