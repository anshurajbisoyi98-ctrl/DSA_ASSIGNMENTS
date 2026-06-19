#include <bits/stdc++.h>
using namespace std;

int main() {
long long t;
    cin>>t;
    while(t--){
       long long n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
           
            }
            
        
          for(int i=0;i<n-1;i++){
              if(arr[i]>arr[i+1]){swap(arr[i],arr[i+1]);
                  arr[i+1]=arr[i]+arr[i+1];
              }
          }
         cout<<arr[n-1]<<endl;  
            

     
        
    
        
  
                  
    }
}
  
 