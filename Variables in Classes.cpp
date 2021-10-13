#include<iostream>
using namespace std;

class linkinPark{

public:
    void setName(string x)
    {
        name = x;
    }
    string getName(){
    return name;
    }

private:
    string name;

//public: //Try to make everything Private
 //   string name;
};

int main()
{
    /*
    linkinPark lp;
    lp.name = "Chester R.I.P";
    cout << lp.name << endl;
*/
    linkinPark lp;
    lp.setName("NUMB");
    cout << lp.getName();

    return 0;
}
