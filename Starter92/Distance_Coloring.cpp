#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    long long int ans=1;
	    for(int i=1;i<=n;i++){
	        if(k>0){
	           ans=ans*k%1000000007;
	           k--;
	        }
	        else break;
	    }
	    cout<<ans%1000000007<<endl;;
	
}
return 0;
}
