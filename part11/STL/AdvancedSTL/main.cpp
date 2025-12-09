#include <vector>
#include <iostream>

using namespace std;


int main () {
    vector<int> myVector{1,2,3,4,5,6,7};

     cout << "Original vector :" << endl;
    for (int value : myVector)
    {
        cout << value << " ";
    }
    cout << endl;

    for (auto it = myVector.begin(); it != myVector.end();)
    {
        if ((*it % 2) == 0)
        {
            it = myVector.erase(it);
        }
        else {
            it ++;
        }
        
    }

    cout << "After removing even numbers :" << endl;
    for (int value : myVector)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}