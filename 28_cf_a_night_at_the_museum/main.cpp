#include <iostream>
#include <string>
using namespace std;

struct listt
{
    char letter;
    listt *next;
    listt *before;
};

int main(){
    
    listt letters[26];
    int char_l=97;
    
    listt *head = &letters[0];
    listt *current = &letters[0];
    listt *pstate = &letters[0];
    
    for(int i = 0; i<26; i++){
        if(i == 0){
            letters[i].letter = char_l;
            letters[i].next = &letters[i+1];
            letters[i].before = &letters[25];
            // cout<<letters[i].letter<<endl;
            char_l++;

//            cout<<letters[i].before->letter<<letters[i].letter<<letters[i].next->letter<<endl;
            continue;
        }
        if(i == 25){
            letters[i].letter = char_l;
            letters[i].next = &letters[0];
            letters[i].before = &letters[i-1];
            // cout<<letters[i].letter<<endl;
            char_l++;

//            cout<<letters[i].before->letter<<letters[i].letter<<letters[i].next->letter<<endl;
            continue;
        }
        letters[i].letter = char_l;
        letters[i].next = &letters[i+1];
        letters[i].before = &letters[i-1];
        char_l++;
        // cout<<letters[i].letter<<endl;
    }
    
    string to_print;
    cin >> to_print;
    int n = to_print.length();
    int r = 0, l = 0, steps = 0 ;
    // cout<< current->letter;
    for(int i = 0; i<to_print.length(); i++){
        r = 0;
        l = 0;
        pstate = current;
        while(1){//right
            if(to_print[i] == current->letter){
                break;
            }
            else{
                current = current->next;
                r++;
            }
        }
        current = pstate;
        while(1){//right
            if(to_print[i] == current->letter){
                break;
            }
            else{
                current = current->before;
                l++;
            }
        }
        steps += min(l,r);
        
    }
    cout<<steps;
    
}

// Accepted
// http://codeforces.com/contest/731/submission/47019932