    #include <bits/stdc++.h> 
    using namespace std;
    
    int main() {

       int n;  // total no of input 
       cin >> n ;

    int no;
    int ans = 0;

    for (int i=0;i<n;i++){
        cin >> no ; // input 
        ans = ans ^ no ; 
    }
    cout << ans ;

        return 0;
    }