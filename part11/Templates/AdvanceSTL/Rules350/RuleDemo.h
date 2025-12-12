#ifndef RULE_DEMO_H
#define RULE_DEMO_H

#include <iostream>
#include <memory>
#include <string>

using namespace std;
class RuleOfThree  {
    private:
        char * data;
    public:
        RuleOfThree(const char* text = "default") {
            data = new char[strlen(text) + 1];
            strcpy(data, text);
            cout <<"Three constructed with: " << data << endl;
        }

        RuleOfThree(const RuleOfThree& other) {
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
            cout << "[Three] copied .." << data << endl;
        }
        
        RuleOfThree& operator=(const RuleOfThree& other) {
            if(this != &other) {
                delete data;
                data = new char[strlen(other.data) + 1];
                strcpy(data, other.data);
            }
            cout << "[Three] Assigned: " << data << endl;
            return *this;
        }

        ~RuleOfThree() {
            cout << "Three Destroyed !!!" << data << endl;
            delete [] data;
        }
};


#endif