#include "load_scenes.h"
#include <fstream>
#include <iostream>

using std::string;

void load_scenes(string & scene_file, std::vector<scene> & sceneList)
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
    getline(scene_file_stream, current_line); // removes empty line
    getline(scene_file_stream, current_line);
    // Add in Encounter
}
