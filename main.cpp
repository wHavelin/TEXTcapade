#include <iostream>
#include "misc_error.h"
#include "run_program.h"
#include <string>

int main()
{
    try
    {
        run_program("AgainIntoTheDark.txt", "AgainIntoTheDarkScenes.txt", "AgainIntoTheDarkEncounters.txt");
		std::cout << "test";
		while(true){
		}
    }
    catch(misc_error e)
    {
        std::cout << "I'm sorry there has been an error; this game will now close";
    }
    return 0;
}
