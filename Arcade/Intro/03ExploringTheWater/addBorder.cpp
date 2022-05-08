/*
Given a rectangular matrix of characters, add a border of asterisks(*) to it.
*/
#include <vector>
#include <string>
std::vector<std::string> addBorder(std::vector<std::string> picture) {
    for(std::string & x:picture)
    {
        x.insert(x.begin(), '*');
        x.push_back('*');
    }
    
    std::string tmp(picture[0].size(), '*');
    picture.insert(picture.begin(), tmp);
    picture.push_back(tmp);
    
    return picture;
}
