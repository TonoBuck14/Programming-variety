#include <iostream>
using namespace std;

int main(){
	int TC;
	cin>>TC;
	while(TC--){
		string s;
		cin>>s;
		if(s.size()>10){
			cout<<s.at(0)<<s.size()-2<<s.at(s.size()-1)<<endl;
			}
		else{
			cout<<s<<endl;
			}
		
		}
	}
