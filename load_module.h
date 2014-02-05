#ifndef _LOADMODULE_H_INCLUDED
#define _LOADMODULE_H_INCLUDED
#include <string>
#include <map>
#include <vector>
#include "item.h"
#include "scene.h"

void load_module(std::string & game_file,
	std::string & scene_file, 
	std::string & encounter_file,
	std::string & module_name,
	std::map<std::string, int> & attributes, 
	std::vector<item> & item_database, 
	std::vector<encounter> & encounter_list,
	std::vector<scene> & scene_list);

#endif // LOADMODULE_H_INCLUDED
