#include "parse_string.hpp"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Function to parse the input string 
Movie parse_string(const string& film) {
    Movie movie;
    stringstream stream(film);

    getline(stream, movie.title); // Parse the title
    getline(stream, movie.season_year); //Parse the season and year

    return movie;
}

