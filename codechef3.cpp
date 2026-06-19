#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin>>k;
	while(k--){
	    int n,m;
	    cin>>n>>m;
	    string a;
	    cin>>a;
	    string b;
	    cin>>b;
	    string c;
	    for(int i=0;i<min(m,n);i++){
	       if(a[i]!=b[i]){
	           break;
	       }
	       cout<<a[i];
	          
	        }
	    
	    cout<<endl;
	}


}