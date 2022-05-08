/*
Given two cells on the standard chess board, determine whether they have the same color or not.
*/
#include <string>
bool chessBoardCellColor(std::string cell1, std::string cell2)
{
    if(cell1 == cell2)
		return true;
	int q = 0;
	int y = 0;
	q += (static_cast<char>(cell1.at(0)) + static_cast<int>(cell1.at(1))) - 48;
	y += (static_cast<char>(cell2.at(0)) + static_cast<int>(cell2.at(1))) - 48;

	if((q%2 == 0 && y%2 == 0) || (q&2 != 0 && y%2 !=0))
		return true;
	else
		return false; 
}