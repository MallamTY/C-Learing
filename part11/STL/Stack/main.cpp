#include <stack>
#include <iostream>
#include <string>

using namespace std;

 
void storeReverse(const string& originalString, stack<char>& reverseStack);
bool isPalindrome(const string& originalString);
void printResult(const string& originalString);


int main(){
    string strArray[5] = {"bob", "racecar", "civic", "dogs", "panama"};
    for (const string& str : strArray)
    {
        printResult(str);
        cout<<endl;
    }
    
    return 0;
}


void storeReverse(const string& originalString, stack<char>& reverseStack){
    for ( char c : originalString)
    {
        reverseStack.push(c);
    }
    
}
bool isPalindrome(const string& originalString){
    stack<char> reverseStack;
    storeReverse(originalString, reverseStack);

    for (char c : originalString)
    {
        if (c != reverseStack.top())
        {
            return false;
        }
        reverseStack.pop();
        
    }
    return true;
    
}
void printResult(const string& originalString){
    cout<<"\""<<originalString<<"\" a palindrome? "
    <<boolalpha<<isPalindrome(originalString)<<endl;
}