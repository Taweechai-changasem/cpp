// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  
    cout << "calculator" << endl;
cout << "----------------------------" << endl;
int op,num1,num2;
cin >> op;

if(op==1) {
    cout << "Adder function" << endl;
    cout << "enter num1 : ";
    cin >> num1;
    cout << endl;
    cout << "-------------" << endl;
    cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
}else if(op==2){
    cout << "Adder function" << endl;
}else if(op==3){
    cout << "adder function" << endl;
}else if (op==32){
    cout << ":3" << endl;
}else{
    cout << "invalid data!" << endl;
}
    return 0;
}
