#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <map>

using namespace std;


int main() {
    ifstream fileGenre ("movie_genres.txt");
    
    if (!fileGenre)
    {
        cerr << "An error occured while opening file. Aborting ....... " << endl;
        return 1;
    }

    map<string, int> genreCounts;
    string genre;
    int total = 0;

    while ( fileGenre >> genre )
    {
        genreCounts[genre]++;
        total++;
    }

    fileGenre.close();

    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "\nMovie Genre Preference." << endl;
    cout << "......................................."<<endl;

    cout << left << setw(15) << "Genre"
        << right << setw(10) << "Count"
        << setw(12) << "Percent" << endl;
      
    
    string mostPopularGenre;
    int mostPopularGenreCount = 0;
    for ( const auto& pair : genreCounts)
    {
        double percent = (static_cast<double> (pair.second)/total) * 100;
        cout << left << setw(15) << pair.first
        << right << setw(10) << pair.second
        << setw(12) << percent << "%" << endl;
        if (pair.second > mostPopularGenreCount)
        {
            mostPopularGenreCount = pair.second;
            mostPopularGenre = pair.first;
        }
        
    };
    cout << "......................................."<<endl;

    cout << "\nTotal Movies Genres : " << total << endl;
    cout << "\nThe most popular genre is " << mostPopularGenre << " with " << mostPopularGenreCount << " votes" << endl;
    
    return 0;
}