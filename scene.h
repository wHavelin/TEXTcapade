#ifndef _SCENE_H_INCLUDED
#define _SCENE_H_INCLUDED

#include <string>
#include "encounter.h"

class scene
{
public:
    scene(std::string desc)
    {
        description = desc;
    }

    void add_encounter(encounter new_encounter)
    {
        scene_encounter = new_encounter;
    }
private:
    std::string description;
    encounter scene_encounter;
};

#endif // SCENE_H_INCLUDED
