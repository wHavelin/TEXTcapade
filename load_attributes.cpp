#include <string>
#include <iostream>
#include "load_attributes.h"
#include "file_load_error.h"
using std::string;

void load_attributes(std::ifstream & game_file_stream, std::map<std::string, int> & attributes)
{
    string temp_string, temp_string2;
    int temp_int;
    game_file_stream >> temp_string; //This is the name of the Attribute
    while(temp_string!="EQUIPMENT")
    {
        game_file_stream >> temp_string2; //This should be an =
        game_file_stream >> temp_int; //This is the initial value of the Attribute
        attributes[temp_string] = temp_int;
        game_file_stream >> temp_string;
    }
}
