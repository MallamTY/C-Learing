#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    vector<int> intVector;
    vector<string> stringVector(3);

    intVector.push_back(1);
    intVector.push_back(3);
    intVector.push_back(4);

    cout << "Integer vectore is: " << intVector.size() << endl;

    stringVector[0] = "Temitayo";
    stringVector[1] = "Sosanya";
    stringVector[2] = "Developer";

    stringVector.push_back("DevOps");
    for (string stringVec : stringVector)
    {
        cout << stringVec << endl;
    }

    cout << "Front and back of string vector" << endl;
    cout << "Front:" << stringVector.front() << endl;
    cout << "Back:" << stringVector.back() << endl;

    stringVector.pop_back();
    stringVector.insert(stringVector.begin(), "Akanni");

    cout <<"\nString vector after modification:" << endl;
    cout << "Front:" << stringVector.front() << endl;
    cout << "Back:" << stringVector.back() << endl;

    return 0;
}