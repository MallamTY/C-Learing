#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> contacts;

    contacts["Temitayo"] = "+234-703-377-67045";
    contacts["Nurudeen"] = "+234-703-377-3448";
    contacts["Akanni"] = "+234-703-694-7843";
    cout<<endl;
    cout << "{";
    for (auto it = contacts.begin(); it != contacts.end(); ) {
        cout << "\"" << it->first << "\": \"" << it->second << "\"";
        ++it;
        if (it != contacts.end()) cout << ", ";
    }
    cout << "}" << endl; 
    // for(auto element : contacts) {
    //     cout << element.first << " => " << element.second <<endl;
    //     cout<<endl;
    // }
    return 0;
}