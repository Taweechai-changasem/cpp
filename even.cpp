// Online C++ compiler to run C++ program online
#include <iostream>
int loop_num = 1;
int fixed_loop;

void getLoop(){
    std::cout << "Enter number of loop : ";
    std::cin >> fixed_loop;
    std::cout << std::endl;
}

int main() {
    std::cout << "===ODD Program===" << std::endl;
    getLoop();
    while(loop_num <= fixed_loop){
        if(loop_num % 2){
         std::cout << "Number : " << loop_num << std::endl;
        }
        loop_num++;
    }

    return 0;
}
