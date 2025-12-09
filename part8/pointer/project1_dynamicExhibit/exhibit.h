#ifndef EXHIBIT_H
#define EXHIBIT_H

#include <string>
using namespace std;


class Exhibit
{
private:
    string name;
    int roomNumber;
    double displaySize;
public:
    Exhibit(string name, int roomNumber, double displaySize);
    string getName() const;
    int getRoomNumber() const;
    double getDisplaySize() const;
};

#endif
