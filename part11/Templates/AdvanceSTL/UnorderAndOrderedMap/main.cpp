#include <iostream>
#include <map>
#include <unordered_map>
#include <string>


using namespace std;


int main() {
    cout << "==== std::map ====" << endl;
    map<string, int> orderMap;
    orderMap["water melon"] = 54;
    orderMap["apple"] = 5;
    orderMap["grape"] = 4;
    orderMap["banana"] = 54;

    cout << "Content of ordered map (keys will be sorted):" << endl;
    for (const auto& pair : orderMap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "Looking up water melon in ordered map" << endl;

    auto it1 = orderMap.find("water melon");
    if(it1 != orderMap.end()) {
        cout << "Found value: " << it1->second << endl;
    }
    else {
        cout << "Not found!" << endl;
    }
    
    cout << endl << endl;
    cout << "==== std::unordered_map" << endl;

    unordered_map<string, int> unorderedMap;
    unorderedMap["water melon"] = 54;
    unorderedMap["apple"] = 5;
    unorderedMap["grape"] = 4;
    unorderedMap["banana"] = 50;

    cout << "Content of unordered map (no guarantee sorted key):" << endl;
    for (const auto& pair : unorderedMap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "Looking up water melon in unordered map" << endl;

    auto it2 = unorderedMap.find("water melon");
    if(it2 != unorderedMap.end()) {
        cout << "Found value: " << it2->second << endl;
    }
    else {
        cout << "Not found!" << endl;
    }
    return 0;
}
