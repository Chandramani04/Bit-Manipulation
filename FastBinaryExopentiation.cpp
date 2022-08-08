#include <bits/stdc++.h> 
using namespace std;

//calculate a^b mod 10^9+7 

#define lli  long long int 

 lli binaryexponetion(lli a, lli b, lli mod){

    lli ans =1 ;
    while (b){

        if (b%2 == 1){
            ans = ans *a %mod ;
        }
        a  = a*a  %mod ; 
        b = b/ 2 ;  // to remove tha last set bit of exponent 

    }
    return ans ; 

 }




int main() {
    lli a ,b ;
    cin >> a  >> b; //

    cout << binaryexponetion(a,b ,1e9+7) << endl ; 

    // to find inverse of a  
    // a^-1 mod p  = a^p-2 mod p 

    cout << binaryexponetion(a,1e9+7-2,1e9+7) ;



    return 0;
}