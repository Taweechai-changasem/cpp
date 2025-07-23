// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//ให้นักเรียนสร้างโปรแกรมตัดเกรดแบ่งออกเป็นเกรด ส่งใน GitHub ดังนี้
//0-49 = 0 
//50-54 = 1
//55-59 = 1.5
//60-64 = 2
//65-69 = 2.5
//70-74 = 3
//75-79 = 3.5
//80-100 = 4

//กรณีที่คะแนน ต่ำกว่า 0 หรือ มากกว่า 100 ให้แสดงทางหน้าจอว่า "Invalid data, please try agian..."
int main(){

cout << "Please Enter Your Scores" << endl;
cout << "------------------------" << endl;

int x ;
cin >> x ;
 if(x <= 0){
    cout << "Please try again\n";
}else if(x <= 49){
    cout << "Grade 0\n";
}
else if(x >= 50){
    cout << "Grade 1\n";
}
else if(x <= 55){
    cout << "grade 1.5\n";
}
else if(x <= 60){
   cout << "Grade 2\n";
}
else if(x <= 65){
   cout << "Grade 2.5\n";
}else if(x <= 69){
   cout << "Grade 2.5\n";
}else if(x <= 70){
   cout << "Grade 3\n";
}else if(x <= 79){
   cout << "Grade 3.5\n";
}else if(x <= 100){
   cout << "Grade 4\n";
}
