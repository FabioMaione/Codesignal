/*
Correct variable names consist only of English letters, digits and underscores 
and they can't start with a digit.
Check if the given string is a correct variable name.
*/
#include <string>
bool variableName(std::string name) 
{
	if(name.at(0) >= 48 && name.at(0) <= 57)
		return false;

	for(unsigned i = 0; i < name.length(); i++)
	{
		if(
			(static_cast<char>(name.at(i)) < 48) ||
				(static_cast<char>(name.at(i)) >= 58 && static_cast<char>(name.at(i)) <= 64) ||
					(static_cast<char>(name.at(i)) >= 91 && static_cast<char>(name.at(i)) <= 94) ||
						(static_cast<char>(name.at(i)) >= 96 && static_cast<char>(name.at(i)) < 97) ||
							(static_cast<char>(name.at(i)) >= 123)
			)
		{
		//	cout << name[i] <<" "<< static_cast<int>(name[i]) << " falso"<<endl;
			return false;
		}
	}
	return true;
}