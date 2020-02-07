#include <iostream>
using namespace std;

class Figura
{
public:
    float x;
    Figura(int _x)
    {
        x = _x;
    }
};

main() {

    Figura uno =  Figura(20);
    cout<< uno.x << endl;


return 0;
}



