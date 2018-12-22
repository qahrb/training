#include <iostream>
using namespace std;

int main(){
    int n, max_size, overflow, orange, waste = 0, empty = 0;
    cin>>n>>max_size>>overflow;

    while(n--){
        cin>>orange;
        if(orange <= max_size){
            waste += orange;
        }
        if(waste > overflow){
            empty += 1;
            waste = 0;
        }
    }
    cout<<empty;
}