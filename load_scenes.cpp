#include "load_scenes.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include "encounter.h"

using std::string;

void load_scenes(string & scene_file, std::vector<scene> & scene_list, std::vector<encounter> & encounter_list)
{
    string current_line;
    string description;
    std::ifstream scene_file_stream(scene_file);
    while(current_line!="BASE DESCRIPTION")
    {
        getline(scene_file_stream, current_line);
    }
    getline(scene_file_stream, current_line);// gets rid of empty line
    while(current_line!="ENCOUNTER")
    {
        description += current_line += " ";
        scene_file_stream >> current_line;
    }
	while(current_line!="END OF FILE"){
		getline(scene_file_stream, current_line); // removes empty line
		string encounter_name;
		getline(scene_file_stream, encounter_name);
		// Add in Encounter
		encounter search_encounter(encounter_name, "error");
		encounter scene_encounter = find(encounter_list.begin(), encounter_list.end(), search_encounter);
	}
}