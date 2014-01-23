#ifndef _LOADEQUIPMENT_H_INCLUDED
#define _LOADEQUIPMENT_H_INCLUDED

#include <vector>
#include "item.h"
#include <fstream>

void load_equipment(std::ifstream & game_file_stream, std::vector<item> & item_database);

#endif // LOADEQUIPMENT_H_INCLUDED
