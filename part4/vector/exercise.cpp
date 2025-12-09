#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> names;

    names.push_back("Temitayo");
    names.push_back("Temitope");
    names.push_back("Omolola");
    names.push_back("Nurudeen");
    names.push_back("Robiat");

    names.insert(names.begin() +2, "John Baugh");
    names.pop_back();

    cout<<"Remaining elements\n" <<endl;
    for (const string& name : names)
    {
        cout<<name<<endl;
    }
    
}