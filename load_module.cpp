#include "load_module.h"
#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include "item.h"
#include "file_load_error.h"
#include "load_attributes.h"
#include "load_equipment.h"
#include "load_scenes.h"
#include "scene.h"
#include "load_encounters.h"

using std::string;

void load_module(string & game_file, 
	string & scene_file, 
	string & encounter_file, 
	string & module_name, 
	std::map<string, int> & attributes,
	std::vector<item> & item_database, 
	std::vector<encounter> & encounter_list, 
	std::vector<scene> & scene_list)
{
    std::ifstream game_file_stream(game_file);
    string current_line;
    string temp_string;
    string temp_string2;
    int temp_int;
    getline(game_file_stream, current_line);
    if(current_line != "MODULE START")
        throw file_load_error();
    getline(game_file_stream, module_name);
    getline(game_file_stream, current_line); //This line should be blank
    getline(game_file_stream, current_line); //This line should say ATTRIBUTES
    if(current_line != "ATTRIBUTES")
        throw file_load_error();
    load_attributes(game_file_stream, attributes);
    load_equipment(game_file_stream, item_database);
	load_encounters(encounter_file, encounter_list);
    load_scenes(scene_file, scene_list, encounter_list);
}
