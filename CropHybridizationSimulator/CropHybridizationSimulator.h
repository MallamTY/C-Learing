#ifndef CROPHYBRIDIZATIONSIMULATOR_H
#define CROPHYBRIDIZATIONSIMULATOR_H

class CropHybridizationSimulator{
    private:
        int heigth;
        int yield;
        int droughtResistance;
    public:
        CropHybridizationSimulator(int h, int y, int d);
        int getHeigth() const;
        int getYield() const ;
        int getScore() const ;
        int getDroughtResistance() const;


        bool operator==(const CropHybridizationSimulator &other) const;
        bool operator!=(const CropHybridizationSimulator &other) const;
        bool operator<(const CropHybridizationSimulator &other) const;
        bool operator>(const CropHybridizationSimulator &other) const;
        bool operator<=(const CropHybridizationSimulator &other) const;
        bool operator>=(const CropHybridizationSimulator &other) const;
        CropHybridizationSimulator operator+(const CropHybridizationSimulator &other) const;
        void operator=(const CropHybridizationSimulator &other);

};
#endif