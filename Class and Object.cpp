#include <iostream>
using namespace std;

//Declaring Class ..Why? where are my temp functions???
class Brimstone{
    //Access specifier
public:
    void HellFire(){
    cout << "Raining Hell Fire!!!" << endl;
    }
public:
    void Smoke(){
        cout << "Smoke Out" << endl;
    }

};

int main()
{
    //An Object is how you access the stuff inside the class
    Brimstone Bm; //this is the key to access the stuff inside the class
    Bm.HellFire();
    Bm.Smoke();
    return 0;
}
