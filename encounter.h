#ifndef _ENCOUNTER_H_INCLUDED
#define _ENCOUNTER_H_INCLUDED

#include<string>
#include<vector>
#include "path.h"

class encounter
{
public:
    encounter();

    encounter(std::string encounter_name, std::string desc)
    {
        name = encounter_name;
		description = desc;
    }

	std::string get_name(){
		return name;
	}

    void add_path(path new_path)
    {
        path_list.push_back(new_path);
    }

private:
    std::vector<path> path_list;
    std::string name;
	std::string description;
};

bool operator<(encounter & encounter_1, encounter & encounter_2);

bool operator==(encounter & encounter_1, encounter & encounter_2);

#endif // ENCOUNTER_H_INCLUDED
