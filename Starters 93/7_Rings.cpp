#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	 int n,x;
	 cin>>n>>x;
	 int check=n*x;
	 int digits=0;
	 while(check){
	     check/=10;
	     digits++;
	 }
	 if(digits==5)cout<<"YES"<<endl;
	 else cout<<"NO"<<endl;
	}
	return 0;
}
