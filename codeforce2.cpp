#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
           
            }
        
            for(int i=0;i<n;i++){
     
            if(arr[i]<arr[i+1]){
                arr[i+1]=arr[i];
            }}
        int sum=0;
        
        
    
        for(int i=0;i<n;i++){
         sum=sum+arr[i];
        }
  
                  cout<<sum<<endl;
    }
}
  
 