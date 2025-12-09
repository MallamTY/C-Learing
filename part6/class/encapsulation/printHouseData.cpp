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
void printHouseData(const House& house);
int main() {
    House temitayoHouse;
    temitayoHouse.setColor("Blue");
    temitayoHouse.setNumStories(1);
    temitayoHouse.setNumRooms(4);
    printHouseData(temitayoHouse);
    return 0;
}

void printHouseData(const House& house) {
    cout<<"Temitayo house is "<<house.getColor()<<" and has "<< house.getStories()<<" stories with "<<house.getRooms()<<" rooms" <<endl;

}

