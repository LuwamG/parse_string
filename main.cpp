#include "parse_string.hpp"
#include "parse_string.cpp"
using namespace std;
int main() {
    string film;
    cin >> film;
    Movie movie = parse_string(film);


    cout << "Title: " << movie.title << endl;
    cout << "Season and Year: " << movie.season_year << endl;

    return 0;
}
