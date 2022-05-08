/*
Given a string, your task is to replace each of its characters by the next one in 
the English alphabet; i.e. replace a with b, replace b with c, etc 
(z would be replaced by a).
*/
#include <string>
std::string alphabeticShift(std::string inputString) 
{
	for(unsigned i = 0; i< inputString.length(); i++)
	{
		if(inputString[i] == 'z')
			inputString[i] = 'a';
		else
			inputString[i]++;
	}
	return inputString;
}