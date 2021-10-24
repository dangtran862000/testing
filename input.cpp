//
//  input.cpp
//  CC++
//
//  Created by La Trần Hải Đăng on 21/10/2021.
//

#include <iostream>
using namespace std;
int main(int argc,char * argv[]) {
    
    cout << "Number of arguments:  " << argc <<endl;
    for (int i =0; i < argc; i++) {
        cout << "input argument: ";
        cin >> argv[i];
    }
   
    
}
