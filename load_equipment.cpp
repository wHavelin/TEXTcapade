#include <vector>
#include <iostream>
#include <fstream>
#include "load_equipment.h"

void load_equipment(std::ifstream & game_file_stream, std::vector<item> & item_database)
{
    std::string temp_string, temp_string2, current_line;
    int temp_int;
    while(current_line!="MODULE_END")
    {
        getline(game_file_stream, current_line);
        if(current_line=="ITEM")
        {
            getline(game_file_stream, current_line);
            item new_item(current_line);
            item_database.push_back(new_item);
        }
        if(current_line=="CATEGORIES")
        {
            while(current_line!="")
            {
                getline(game_file_stream, current_line);
                item_database.back().add_category(current_line);
            }
        }
        if(current_line=="ATTRIBUTES")
        {
            game_file_stream >> temp_string; //This is the name of the first Attribute
            while(temp_string!="CONDITIONS")
            {
                game_file_stream >> temp_string2; //This should be an =
                game_file_stream >> temp_int; //This is the initial value of the Attribute
                item_database.back().add_attribute(temp_string, temp_int);
                game_file_stream >> temp_string; //This is the name of the next Attribute
            }
            while(current_line!="ITEM")
            {
                getline(game_file_stream, current_line); //REPLACE WITH SUPPORT FOR CODITIONAL MODIFIERS
                if(current_line=="MODULE END")
                    return; // ends LOADING EQUIPMENT
            }
        }
    }
}
