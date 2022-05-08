/*
Given an array of strings, return another array containing all of its longest strings.
*/
#include <algorithm>
#include <string>
#include <vector>
std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray)
{
    int dim=inputArray[0].length();
    for(unsigned i=0; i<inputArray.size(); i++)
        if(inputArray[i].length()>dim)
            dim=inputArray[i].length();

    std::vector<std::string> longString;
    for(unsigned i=0; i<inputArray.size(); i++)
        if(inputArray[i].length()==dim)
            longString.push_back(inputArray[i]);

    return longString;

}
