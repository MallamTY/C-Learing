#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

class House {
    public: 
        House();
        ~House();
        void setNumStories(int num);
        void setNumRooms(int num);
        void setColor(string color);
        void print() const;
        int getStories() const;
        int getRooms() const;
        string getColor() const;
    private:
        int numberStories;
        string color;
        int numRooms;
};

#endif
