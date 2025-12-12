#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void printVector(const vector<int>& vec);
int main() {
    vector<int> numbers = {1,2,34,5,3,54,53,54,5,3,3,3,4,5,4,3,2,5,6,4,243,5,32,2,2};
    cout << "Original vector: ";
    printVector(numbers);

    cout << endl;
    // Using remove

    // Erase them from containers
    auto newEnd = remove(numbers.begin(), numbers.end(), 2);
    numbers.erase(newEnd, numbers.end());

    cout << "After removing 2s: ";
    printVector(numbers);
    cout << endl;
    return 0;
}

void printVector(const vector<int>& vec) {
    for (int value : vec)
    {
       cout << value << " ";
    }
    
}