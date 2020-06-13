#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    long long x;
    long long y;
    cin >> t;
     while (t > 0){
              cin >> y >> x;
              long long z;
              long long ans;
              z = max(x,y);
              long long ap;
              ap = z*(z-1) + 1;
              if (z%2==0) {
                      ans = ap + y- x;
              }
              else {
                      ans = ap + x - y;
              }
              cout << ans << "\n";
              t--;
     }


    return 0;
}