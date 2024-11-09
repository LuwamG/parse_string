#ifndef PARSE_STRING_HPP
#define PARSE_STRING_HPP
#include <iostream>
#include <string>
using namespace std;
struct Movie {
	string title;
	string season_year;
};
Movie parse_string(const string& film);
#endif
