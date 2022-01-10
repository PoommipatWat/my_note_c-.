
//สำหรับการแสดงผล
#include <iostream>

//คิดเลข
#include <cmath>
pow(x,y) // x ยกกำลัง y
sqrt(X) // ถอดรากที่สอง
exp(x) // expo
ln(x) // หา log ฐาน 10
log2(x) // หา log ฐาน 2
sin(x) , cos(x) // หา cos sin x ไม่ใช่องศา

// file i/o
#include <fstream>
//ofstream สำหรับเขียนไฟล์
//ifstream สำหรับอ่านไฟล์
//fstream ทั้งเขียนและอ่านไฟล์
//Ex. การเขียน
int main(){
    ofstream dest;
    dest.open("C:\\poom\\floder\\ok.txt");
    dest << "hi";
    dest.close();
    return 0;
}
//Ex. การอ่าน
int main(){
    ifstream dest;
    dest.open("C:\\poom\\floder\\ok.txt");
    string textline;
    getline(dest, textline);
    cout << textline << "1";
    getline(dest, textline);
    cout << textline << "2";
    while(getline(dest,textline)){
        cout << getline << endl;
    }
    dest.close();
}


//string to (รับค่าเฉพาะ array char)
#include <cstdlib>
atoi // str to int
atoi // str to long int
atof // str to doublr
strtof // str to float

//Ex. แปลง string to char array
int main(){
    char ctext[] = "12345";
    string cpptext = "12345";
    cout << atoi(ctext);
    cout << atoi(cpp.text.c_str());
}


//string
#include <string>
stoi // str to int c++11
stol // str to long int c++11
stoll // str to lomg long int c++11
stoul // str to unsign long int
stoull // str to unsign long long int
stof // str to float
stod // str to double
stold // str to long double

//สุ่ม random และเวลา
#include <cstdlib>
#include <ctime>
rand(); //คือการสุ่มค่า
// ถ้าต้องการค่าแค่ถึง 1-6
rand()%7 +1;
srand(seed) // การกำหนดค่าสุ่มว่าให้เอามาจากไหน
// Ex.
srand(time(0));



using namespace std;

//ฟังก์ชัน
//การเขียนฟังฟ์ชันปกติ
double namefunc(int x){
    return x;
}
//call by ref คือ เปลี่ยนค่านอกฟังก์ชันด้วย
double namefunc(int &x){
    return x;
}
// กำหนดค่าเริ่มต้นให้ตัวแปรในฟังก์ชัน
// Ex.
int ok(int i = 1. int x = 2){

}
// ฟังชั่น prototype และการกำหนดค่าเริ่มต้นให้ตัวแปร
void prin(char, int y = 5, int);
int main(){
}
void prin(char x, int y, int z){
}
// ฟังก์ชัน overload คือฟังก์ชันที่ชื่อเดียวกันแต่ส่งออกค่าได้หลายชนิด ถูกแทนด้วย function templates
// Ex.
template <typename t>
t name_function(t x){
    t y = x-1;
    return y;
}
//Ex.
template <typename t>
t name_func(x);
int main(){
}
template <typename t>
t name_func(t x){
    t y = x-1;
    return y;
}
// ฟังก์ชัน recursion หรือ วนไม่รู้จบ
//Ex. ฟังก์ชัน factorial
int factorial(int x){
    if(x <= 1){
        return 1;
    }
    else{
        x*factorial(x-1);
    }
}



// if statement
if (x == 1){
    
}
else if (x == 2){

}
else{

}


//switch case
switch (x){
    case 1:
        cout << "hi";
    case 2:
    default:
}

// operatiob operator !
cout << (s>=80 ? 'A' : s >= 70 ? 'B');

//while
while (true){

}

//do-while
do{

} while(true);

// for statement
for (int i = 1; i <= 15 ; i++){

}

// break สำหรับการออกลูป
break;

//continur สำหรับการข้ามลูปปัจจุบัน
continue;

// global variable
int x = 68;

int main(){
    int x = 32;
    cout << ::x;
    ::x++;
    cout << ::x;
}

//array
// หาจำนวนสมาชิกใน array
sizeof(b)/sizeof(b[0]);
//char array == string
char stringl[] = "hello";
// มีค่าเท่ากับ
char stringl = {'h','e','l','l','o','\0'};
//การใส่ array ใน ฟังก์ชัน เป็นการ call by ref เสมอ
//Ex.
myFunct(myareay , ขนาด)
// array 2 มิติ
// int A[แถว][หลัก]

// การ sort และ searching
// bobble การสลับตำแหน่งทีละหลัก
// Ex.
void bouble(double d[], int n){
    for(int end = N; end > 1; end--){
        for (int i = 0; i < n-1 ; i++){
            if(d[i] > d[i+1]) // ให้สลับค่ากัน
        }
    }
}
// insertion การสลับทีละตัวเพื่อหาที่ของตัวเอง
// linear search คือการหาแบบเส้นตรงตามปกติที่ทำ
// binary search คือการหาที่ค่ากลางแล้วเปรียบเทียบมากกว่าน้อยกว่าไปเรื่อยๆ



