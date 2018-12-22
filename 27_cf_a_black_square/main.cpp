#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int one, two, three, four;
    cin>>one>>two>>three>>four;
    string game;
    cin>>game;

    int calories = 0;
    int n = game.length();

    for(int i = 0; i<n; i++){
        char x = int(game[i]);
        switch (x)
        {
        case '1': calories += one;
                break;
        case '2': calories += two;
                break;
        case '3': calories += three;
                break;
        case '4': calories += four;
                break;
        default:
            break;
        }
    }

    cout<<calories;
}

// Accepted
// http://codeforces.com/contest/431/submission/47018286