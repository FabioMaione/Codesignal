/*
After becoming famous, the CodeBots decided to move into a new building together. 
Each of the rooms has a different cost, and some of them are free, but there's a 
rumour that all the free rooms are haunted! Since the CodeBots are quite superstitious, 
they refuse to stay in any of the free rooms, or any of the rooms below any of the free rooms.
Given matrix, a rectangular matrix of integers, where each value represents 
the cost of the room, your task is to return the total sum of all rooms that are 
suitable for the CodeBots (ie: add up all the values that don't appear below a 0).
*/
#include <vector>
int matrixElementsSum(std::vector<std::vector<int>> matrix) 
{
int price = 0;

for(int i=0; i<matrix.size(); i++){
    for(int j=0; j<matrix[i].size(); j++){
        
       if(matrix[i][j]== 0 && matrix.size() -1 != i){
           matrix[i+1][j] = 0;
       }
        else
            price += matrix[i][j];
    }
}

return price;
}