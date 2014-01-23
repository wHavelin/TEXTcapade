#ifndef _LOADATTRIBUTES_H_INCLUDED
#define _LOADATTRIBUTES_H_INCLUDED\

#include <map>
#include <string>
#include <fstream>

void load_attributes(std::ifstream & game_file_stream, std::map<std::string, int> & attributes);

#endif // LOADATTRIBUTES_H_INCLUDED
