#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;


void printFormatted(ofstream& outfile, int counter);
int main() {
    cout<<"Writing to file ...."<<endl;
    int counter;
    cout<<"Please enter the counter value: ";
    cin>>counter;
    ofstream outfile("output.txt");
    if (!outfile)
    {cerr<<"An error occured while trying to open file.!!!"<<endl;
        return 1;
    }

    cout<<fixed<<showpoint;
    outfile<<fixed<<showpoint;
    printFormatted(outfile, counter);
    
    // outfile<<"Welcome to file handing in C++ by Temitayo Sosanya."<<endl;
    outfile.close();
    cout<<"Done ...."<<endl;
    
    return 0;
}

void printFormatted(ofstream& outfile, int counter){
    for (int i = 0; i < counter; i++)
    {
        if (i == 0)
        {
            outfile<<"\n///////////// OUTPUT /////////////\n"<<endl;
        }
        
        double value1 = i * 5.53343;
        double value2 = i * 3.142;

       outfile<<setw(12)<<setprecision(2)<<value1
       <<setw(13)<<setprecision(3)<<value2<<endl;
    }
}