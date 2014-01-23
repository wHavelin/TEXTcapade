#ifndef _ENCOUNTER_H_INCLUDED
#define _ENCOUNTER_H_INCLUDED

#include<string>
#include<vector>
#include "path.h"

class encounter
{
public:
    encounter();

    encounter(std::string & encounter_name)
    {
        name = encounter_name;
    }

    void add_path(path new_path)
    {
        path_list.push_back(new_path);
    }
private:
    std::vector<path> path_list;
    std::string name;
};

#endif // ENCOUNTER_H_INCLUDED
