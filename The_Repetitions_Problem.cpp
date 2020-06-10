#include <bits/stdc++.h>

using namespace std;
int i = 0;

int main()
  { X: {
        
        int count = 0;
 int result = 0 ;
  char v [1000000];
 
  
  while( cin >> v[i] ) {
          
          if (i == 0) {
                  i++;
                  continue;
          }
          else if(v[i-1] == v[i]) {
                  
                  count++;
                  
          }
          else count = 0;
          result = max(result,count);
          i++;
                   
  }
  
 result+=1;
  cout<< result; }
  return 0;
}