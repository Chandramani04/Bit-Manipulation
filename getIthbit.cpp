#include <bits/stdc++.h> 
using namespace std;

int getbit(int n,int i){
    int mask = (1<<i) ; 
   int bit= n&mask ;
   int ans =0;
   if(bit==0){
    ans= 0;
   }
   else{
    ans= 1;
   }
   return ans ;
 }

int main() {
    int n =5;
    int i;  // the 'i'th position bit we needed
    cin >> i ;
cout << getbit(n,i);

    return 0;
}