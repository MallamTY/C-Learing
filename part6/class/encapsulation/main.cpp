#include <iostream>

using namespace std;


class House {
    public: 
        void setNumStories(int num) {
            this->numberStories = num;
        }
        void setNumRooms(int num) {
            this->numRooms = num;
        }
        void setColor(string color) {
            this->color = color;
        }

        int getStories() const {
            return numberStories;
        }
        int getRooms() const {
            return numRooms;
        }
        string getColor() const {
            return color; 
        }
    private:
        int numberStories;
        string color;
        int numRooms;
};

int main() {
    House temitayoHouse;
    House nurudeenHouse;

    temitayoHouse.setColor("Blue");
    temitayoHouse.setNumStories(1);
    temitayoHouse.setNumRooms(4);

    nurudeenHouse.setColor("Green");
    nurudeenHouse.setNumRooms(2);
    nurudeenHouse.setNumStories(3);
    
    cout<<"Temitayo house is "<<temitayoHouse.getColor()<<" and has "<< temitayoHouse.getStories()<<" stories with "<<temitayoHouse.getRooms()<<" rooms" <<endl;
    return 0;
}