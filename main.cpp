#include "parse_string.hpp"
#include <iostream>

using namespace std;
int main() {
    string film;
    cout << "Enter movie title and season: ";
    getline(cin,film);
    Movie movie = parse_string(film);


    cout << "Title: " << movie.title << endl;
    cout << "Season and Year: " << movie.season_year << endl;

    return 0;
}
