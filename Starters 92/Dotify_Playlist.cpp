#include <bits/stdc++.h>
#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,l;
	    cin>>n>>k>>l;
	    int M[n];
	    int L[n];
	    vector<int>temp_ans;
	    int test=0;
	    for(int i=0;i<n;i++){
	        cin>>M[i]>>L[i];
	    }
	    for(int i=0;i<n;i++){
	        if(L[i]==l){
	            temp_ans.push_back(M[i]);
	            test=1;
	        }
	    }
	   if(!test || temp_ans.size()<k){cout<<"-1"<<endl;continue;}
	  
	   else{
	       sort(temp_ans.begin(),temp_ans.end(),greater<int>());
	       int ans=0;
	       if(temp_ans.size()>k){
	            for(int i=0;i<k;i++){
	        ans+=temp_ans[i];   
	       }
	       }
	       else{
	            for(int i=0;i<temp_ans.size();i++){
	        ans+=temp_ans[i];   
	       }
	       }
	       
	       cout<<ans<<endl;
	   }
	    
	}
	return 0;
}
