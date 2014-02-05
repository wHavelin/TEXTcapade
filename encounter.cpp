#include "encounter.h"

bool operator<(encounter & encounter_1, encounter & encounter_2){
	if(encounter_1.get_name()<encounter_2.get_name())
		return true;
	return false;
}

bool operator==(encounter & encounter_1, encounter & encounter_2){
	if(encounter_1.get_name()==encounter_2.get_name())
		return true;
	return false;
}