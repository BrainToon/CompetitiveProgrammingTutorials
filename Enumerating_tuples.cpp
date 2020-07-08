//Enumerating tuples of set containing elements from 1 to 10 selected 5 at a time
#include <bits/stdc++.h>
using namespace std;
int result[5]; 
void print() {
for( int i=0; i<5;i++) {
cout<<result[i]<<" " ;
} 
cout<<"\n";
}
void output(int n) {
if(n==5) {
print();
return;
}
for(int i=1; i<=10; ++i) { 
result[n] = i;
output(n+1); 
}
} 
int main() {
output(0);
return 0;
}
