#include <iostream>
#include "Shablon.h"
using namespace std;

int main(){
    char input[5];
    char output[5];
    
    strcpy_s(input, 5, "Inga");
    unsigned int len = 4;
    Shablon shablon;
    shablon.encrypt(input, 4, output, len);
    *(output + len) = 0;
    cout << output;
    return 0;
}
