#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums{1,2,3,4,5,6};
    cout << "Original vector...." << endl;
    for (int n : nums)
    {
        cout << n << " ";
    }
    cout << endl;

    for(auto it = nums.begin() ; it != nums.end();) {
        if (*it % 2 == 0)
        {
            it = nums.erase(it);
        }
        else {
            ++it;
        };
    }
    cout << "Vector after removing even numbers ...." << endl;
    for (int n : nums)
    {
        cout << n << " ";
    }
    cout << endl;
    
    return 0;
}