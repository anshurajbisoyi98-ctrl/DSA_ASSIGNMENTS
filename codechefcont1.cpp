

#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int m,n;
    cin>>m>>n;

if(m>=n){cout<<m-n<<endl;}
else{cout<<abs(m-n)%2<<endl;}
}
}