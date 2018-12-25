#include <iostream>
using namespace std;

int main(){
    int cakes, x_time_cake, x_cake, new_oven, t_one_oven =  0, t_two_oven = 0, min_o = 0, min_n = 0, min = 0;
    bool done = 0;
    cin>>cakes>>x_time_cake>>x_cake>>new_oven;
    
    int cakes_done = cakes;
    do{
        t_one_oven += x_time_cake;
        cakes_done -= x_cake;
    }while(cakes_done > 0);
    
    cakes_done = cakes;
    do{
        min_o++;
        min_n++;
        min++;
        if(min_o == x_time_cake){
            t_two_oven += min;
            cakes_done -= x_cake;
            min_o = 0;
            if(cakes_done== 0 || cakes_done < 0)break;
        }
        if(done && min_n == x_time_cake){
            t_two_oven += min;
            cakes_done -= x_cake;
            min_n = 0;
            if(cakes_done== 0 || cakes_done < 0)break;
        }
        if(min_n == new_oven &&  done != 1){
            done = 1;
            min_n = 0;
        }
        
    }while(1);
    if(t_one_oven>min)cout<<"yes";
    else cout<<"no";    
}
