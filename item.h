#ifndef _ITEM_H_INCLUDED
#define _ITEM_H_INCLUDED
#include <string>
#include <vector>
#include <map>

class item
{
public:
    item(std::string item_name)
    {
        name = item_name;
    }

    void add_category(std::string & category)
    {
        categories.push_back(category);
    }
    void add_attribute(std::string attribute, int value)
    {
        attributes[attribute] = value;
    }

private:
    std::string name;
    std::vector<std::string> categories;
    std::map<std::string, int> attributes;
};

#endif // ITEM_H_INCLUDED
