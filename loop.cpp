// Online C++ compiler to run C++ program online
#include <iostream>
int loop_num=1;
int fixed_loop;

void printmyname(){
    std::cout << "อย่าอ่าน" << std::endl;
}
void getLoop(){
    std::cin >> fixed_loop;
}
int main(){
    getLoop();
    while(loop_num < fixed_loop){
        std::cout << "loop" << loop_num ;
        if(loop_num == 7){
            std::cout << "ทำไมกัน" << std::endl;
        }else{
                   printmyname();
        }
     
        loop_num++;
    }
}
