#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int myNum = 5; //Whole Number 4 Bytes

    float myFloat = 5.598; //Point Number 4 Bytes

    double myDouble = 52.25; //Larger Point Number 8 Bytes

    char myLetter = 'A';  //Character 1 Bytes

    bool myBoolean = true; //Boolean 1 Bytes

    string myText = "This is me"; //String

   /*
    bool isCodingFun = true;
    bool isFoodGood = false;
    cout << isCodingFun << "\n" << endl;
    cout << isFoodGood;

    char a = '50', b = '55', c = '60';
    cout << a;
    cout << b;
    cout << c;

    string ab = "Hello";
    cout << ab;
    */

    /*int i = 0;
    while (i < 10){
        cout << i << "\n";
        i++;
        if (i == 8){
            break;
        }
    }
    */
/*
    int i = 0;
    while (i < 10){
        if (i == 4){
                i++;
            continue;
        }
        cout << i << "\n";
        i++;
    }
*/

    cout << max(5, 10)<< "\n" << endl; //Find the highest value

    cout << min(5, 10)<< "\n" << endl; //Find the lowest

    cout << round(2.5)<< "\n" << endl;

    cout << sqrt(64) << "\n" << endl;

    cout << log(2) << "\n" << endl;

}
