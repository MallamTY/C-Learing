#include <iostream>

using namespace std;


int main(){
    // Enum usage using tradition method
    enum Directon {UP, DOWN, RIGTH, LEFT, STANDING};

    Directon myDirection = STANDING;

    switch (myDirection)
    {
    case UP:
        cout << "up!" << endl;
        break;
    case DOWN:
        cout << "down!" << endl;
        break;
    case RIGTH:
        cout << "right!" << endl;
        break;
    case LEFT:
        cout << "left!" << endl;
        break;
    case STANDING:
        cout << "standing!" << endl;
        break;
    default:
        break;
    }



    //Enum usage using enum class

    /* enum class Directon {UP, DOWN, RIGTH, LEFT};

        Directon myDirection = Directon::UP;

        switch (myDirection)
        {
        case Directon::UP:
            cout << "up!" << endl;
            break;
        case Directon::DOWN:
            cout << "down!" << endl;
            break;
        case Directon::RIGTH:
            cout << "right!" << endl;
            break;
        case Directon::LEFT:
            cout << "left!" << endl;
            break;
        default:
            break;
        }
    */
    return 0;
}