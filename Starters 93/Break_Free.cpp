#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int even=0;
	    int arr[n];
	    int ans=1;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]%2==0)even++;
	    }
	   for(int i=0;i<even;i++){
	       ans=(ans*2)%1000000007;
	   }
	   if(even==n)ans--;
	    cout<<ans%1000000007<<endl;
	}
	return 0;
}
