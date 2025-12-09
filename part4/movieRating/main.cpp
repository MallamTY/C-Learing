#include <iostream>
#include <vector>

using namespace std;

int main() {
    int MOVIE_COUNT = 5;
    vector<string> movies;
    vector<int> ratings;

    string userMovie;
    int userRating;

    for (int i = 0; i < MOVIE_COUNT; i++)
    {
        cout<<"Enter the title of movies #"<<(i+1)<<":"<<endl;
        getline(cin, userMovie);

        cout<<"Enter the rating for \"" <<userMovie<<"\"(1-10):";
        cin >> userRating;
        cin.get();

        movies.push_back(userMovie);
        ratings.push_back(userRating);

    }

    cout << "\nMovies rating are: "<<endl;
    for (int i = 0; i < MOVIE_COUNT; i++)
    {
        cout<<"You rated \""<<movies[i]<<"\" a" <<ratings[i]<< "/10" << endl;
    }
    
    
    return 0;
}