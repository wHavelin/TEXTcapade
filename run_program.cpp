#include "run_program.h"
#include <vector>
#include "describe_scene.h"
#include "get_player_input.h"
#include "determine_effects_of_player_action.h"
#include "load_module.h"
#include "scene.h"
#include "file_load_error.h"
#include <string>
#include <iostream>
#include "item.h"

void run_program(std::string module_file, std::string scene_file, std::string encounter_file)
{
    std::vector<scene> scene_list;
    std::vector<item> item_database;
    std::map<std::string, int> attributes;
	std::vector<encounter> encounter_list;
    std::string module_name;
    load_module(module_file,scene_file, encounter_file, module_name, attributes, item_database, encounter_list, scene_list);
    std::cout << module_name << "\n";
    bool hasWon = false;
    bool hasLost = false;
    while(true)
    {
        describe_scene();
        get_player_input();
        determine_effects_of_player_action();
        if(hasWon || hasLost)
            break;
    }
};
