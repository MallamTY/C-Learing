#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;


int main() {
    cout << "======== std::map ===========" << endl;
    map<string, int> ordererMap;

    ordererMap["mango"] = 12;
    ordererMap["banana"] = 565;
    ordererMap["orange"] = 867;

    cout << "Content of ordered map" << endl;
    for (const auto& pair : ordererMap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "\n Looking up 'apply' in orderedMap" << endl;
    auto it1 = ordererMap.find("apply");
    if (it1 != ordererMap.end())
    {
        cout << "Found, value = " << it1->second << endl;
    }
    else {
        cout << "Not foud!" << endl;
    }

    cout << endl << endl;


    unordered_map<string, int> unorderedMap;
    unorderedMap["mango"] = 9;
    unorderedMap["banana"] = 34;
    unorderedMap["orange"] = 90;

    cout << "Content of unordered map" << endl;
    for (const auto& pair : unorderedMap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }


    cout << "\n Looking up 'apply' in unorderedMap" << endl;
    auto it2 = unorderedMap.find("apply");
    if (it2 != unorderedMap.end())
    {
        cout << "Found, value = " << it2->second << endl;
    }
    else {
        cout << "Not foud!" << endl;
    }
    return 0;
}