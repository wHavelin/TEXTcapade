#include "load_encounters.h"
#include <fstream>
#include "file_load_error.h"
#include <algorithm>

using std::string;

void load_encounters(std::string & encounter_file, std::vector<encounter> & encounter_list){
	string current_line;
	std::ifstream encounter_file_stream(encounter_file);
	getline(encounter_file_stream, current_line);
	if(current_line != "ENCOUNTER FILE")
		throw  new file_load_error();
	current_line = "";
	string encounter_name;
	while(true){
		while(current_line==""){
			getline(encounter_file_stream, current_line);
		}
		if(current_line=="END OF FILE")
			break;
		encounter_name = current_line;
		getline(encounter_file_stream, current_line);
		encounter new_encounter(encounter_name, current_line);
		encounter_list.push_back(new_encounter);
	}
	std::sort(encounter_list.begin(), encounter_list.end());
}