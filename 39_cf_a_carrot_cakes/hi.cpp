#include <iostream>
using namespace std;

int main(){
    int cakes, x_time_cake, x_cake, new_oven, t_one_oven =  0, t_two_oven = 0, min_o = 0, min_n = 0, min = 0;
    float fff;
    bool done = 0;
    cin>>cakes>>x_time_cake>>x_cake>>new_oven;
    
    
    fff = float(cakes/ x_cake )* float(x_time_cake);

    cout<< fff;
    // do{
        
    //     t_two_oven += x_time_cake;
    //     cakes_done -= 2*x_cake;
    // }while(cakes_done);

    // t_two_oven += new_oven*x_time_cake;
    

}
