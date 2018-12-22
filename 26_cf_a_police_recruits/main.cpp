#include <iostream>
using namespace std;

int main(){
    int x, c, t = 0, crimes = 0;
    cin>>x;
    int p = 0, treated;
    while(x--){
        cin>>c;
        if (c >= 1){
            p +=c;
        }
        else{
            if (p <= 0) {
                crimes++;
            }
            else{
                p--;
            }  
        }
    }
    cout<<crimes;
}

// Accepted
// http://codeforces.com/contest/427/submission/47007559