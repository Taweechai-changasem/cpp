#include <iostream>
#include <iomanip>  // สำหรับ std::setprecision
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "ป้อนน้ำหนัก (กิโลกรัม): ";
    cin >> weight;

    cout << "ป้อนส่วนสูง (เมตร): ";
    cin >> height;

    // คำนวณ BMI
    bmi = weight / (height * height);

    // แสดงผลลัพธ์ (ทศนิยม 2 ตำแหน่ง)
    cout << fixed << setprecision(2);
    cout << "ค่าดัชนีมวลกาย (BMI) ของคุณคือ: " << bmi << endl;

    // ตีความค่า BMI
    if (bmi < 18.5) {
        cout << "อยู่ในเกณฑ์น้ำหนักน้อย/ผอม" << endl;
    } else if (bmi < 25) {
        cout << "อยู่ในเกณฑ์ปกติ" << endl;
    } else if (bmi < 30) {
        cout << "อยู่ในเกณฑ์น้ำหนักเกิน" << endl;
    } else {
        cout << "อยู่ในเกณฑ์อ้วน" << endl;
    }

    return 0;
}
