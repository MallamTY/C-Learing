#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int main() {
    vector<int> myNumbers;

    try
    {
       myNumbers.resize(myNumbers.max_size() + 1);
    }
    catch(const logic_error& err)
    {
        cout<<"Caught a length error: "<< err.what() <<endl;
    }
    
}

