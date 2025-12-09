#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

void fillVector(vector<int>& myVector);
void printVector(const vector<int>& myVector);
void countFives(const vector<int>& myVector);

int main(){
    vector<int> myVector;
    fillVector(myVector);
    printVector(myVector);
    countFives(myVector);

    cout << "\nReplacing 5s with 99" << endl;
    replace(myVector.begin(), myVector.end(), 5, 99);

    printVector(myVector);
    countFives(myVector);

    sort(myVector.begin(), myVector.end());
    cout << "\nSorted vector"<<endl;
    printVector(myVector);

    return 0;
}

void fillVector(vector<int>& myVector){
    srand(time(nullptr));
    for (int i = 0; i < 20; i++)
    {
        myVector.push_back(rand() % 5 + 1);
    }
    
}
void printVector(const vector<int>& myVector){
    for(int value : myVector) {
        cout << value <<" ";
    }
    cout << endl;
}

void countFives(const vector<int>& myVector){
    int countOfFives = count(myVector.begin(), myVector.end(), 5);
    cout << "Number of 5s: " << countOfFives << endl;
}