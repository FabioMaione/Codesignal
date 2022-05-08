/*
You are given an array of integers representing coordinates of obstacles situated on a 
straight line.
Assume that you are jumping from the point with coordinate 0 to the right. 
You are allowed only to make jumps of the same length represented by some integer.
Find the minimal length of the jump enough to avoid all the obstacles.
*/
#include <vector>
int avoidObstacles(std::vector<int> inputArray) {
    int jump = 2;
    int i = 0;

    while(i < inputArray.size())
    {
        if(inputArray[i] % jump == 0)
        {
            jump += 1;
            i = 0;
            continue;
        }
    
        i += 1;
    }

    return jump;
}