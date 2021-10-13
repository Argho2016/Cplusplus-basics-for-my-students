#include <iostream>
using namespace std;
/*
void FFDP(){
    cout << "House of the Rising Sun" << endl;
}
*/

int addNumbers(int x, int y){
    int answer = x + y;
    return answer;
}

void FFDP(); //Function Prototyping

int main()
{
    cout << addNumbers(20, 80);
    //FFDP();
    return 0;
}

void FFDP(){
  cout << "House of the Rising Sun" << endl;
}
