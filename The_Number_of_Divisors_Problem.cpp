#include<bits/stdc++.h>
using namespace std;
int main() {
        long long t;
        cin>>t; 
        long long n;
        long long k;
        
        while(t--) {
        cin>> n >> k;
        
        long long s;
        s = n*(n+1)/2;
     
        long long kpower;
        kpower = k; 
        long long z;
        while(kpower<=n) {
                z = n/kpower;
                s = s-(k-1)*(z*(z+1))/2 ;
                kpower*=k;
                 }
                 cout<<s<<"\n";
        }
        return 0;
        }


