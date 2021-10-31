#include <iostream>
using namespace std;

int main() {
    cout << "fuck you." << endl;

/*
    변수    | 용량      | 데이터                | 표현 범위         | unsigned(부호x)   |
   --------------------------------------------------------------------------------------
    char    | 1byte     | 문자                  | -128 ~ 127        | 0 ~ 255           |
    bool    | 1byte     | T/F                   | true / false      | true / false      |
    short   | 2byte     | 정수                  | -32768 ~ 32767    | 0 ~ 65535         |
    int     | 4byte     | 정수                  | 약 -22억 ~ 21억   | 0 ~ 약 43억       |
    float   | 4byte     | 실수(부동소수점)      |                   |                   |
    double  | 8byte     | 실수(부동소수점)      |                   |                   |
*/
    
    int number = 10;
    cout << number << endl;

    bool ABTest = true;
    cout << ABTest << endl;

    char first_name = 'h';
    cout << first_name << endl;

    float fNum = 3.14;
    cout << fNum << endl;

    double dNum = 123.34323434;
    cout << dNum << endl;

    return number;

}