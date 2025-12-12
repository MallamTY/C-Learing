#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
    public:
        string name;
        int age;

        Person(string name, int age) : name(name), age(age) {
            cout << "Constructed .." << name << endl;
        }
        Person(const Person& other) {
            name = other.name;
            age = other.age;
            cout << "Copied: " << name << endl;
        }
};

int main() {
    vector<Person> people;

    cout << "\n Using push back" << endl;
    Person p1("Temitayo Sosanya", 28);
    people.push_back(p1);


    cout << "\n Using emplace" << endl;
    people.emplace_back("Temitope Raji", 25);
    
    return 0;
}