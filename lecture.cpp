//
//  lecture.cpp
//  CC++
//
//  Created by La Trần Hải Đăng on 05/10/2021.
//

#include <iostream>

using namespace std;

int main() {
//    int a;
//    cout << "Nhap vao so a: ";
//    cin >> a;
//
//    cout << "So a la : " << a << endl;
    
    int total = 32000;
    int * ptr;
    ptr = &total; // The memory address of the int variable is written to ptr
    cout << *ptr << endl;
    
    *ptr = 1000;
    cout << total << endl;
    cout << *ptr << endl;
    
    char str[80] = "This is a test";
//    char *p = NULL;
//
//    for(p = str; (*p) != 0; p++)
//    {
//    cout << *p;
//    }

    char * p = str;
    str[4] = 'X';
    *(p + 5) = 'Y';
    
    cout << str << endl;
    
}
