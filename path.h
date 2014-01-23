#ifndef _PATH_H_INCLUDED
#define _PATH_H_INCLUDED

#include <string>

class path
{
public:
    path(std::string & desc)
    {
        description = desc;
    }
    std::string return_desc()
    {
        return description;
    }
private:
    std::string description;
};

#endif // PATH_H_INCLUDED
