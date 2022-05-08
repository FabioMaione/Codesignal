/*
You are given an array of integers. On each move you are allowed to increase exactly 
one of its element by one. Find the minimal number of moves required to obtain a 
strictly increasing sequence from the input.
*/
#include <vector>
bool checkifAllSame(std::vector<int> a)
{
    int x = a[0];
    for(int i = 0; i < a.size(); i++)
        if(a[i] != x)
            return false;
    return true;
}

int arrayChange(std::vector<int> inputArray) {
    int tot = 0;
    
    if(checkifAllSame(inputArray))
        for(int i = 1; i < inputArray.size(); i++)
            tot += i;
    else
    {
        for(int i = 1; i < inputArray.size(); i++)
        {
            if(inputArray[i] == inputArray[i-1])
            {
                tot ++;
                inputArray[i]++;
            }
            else if(inputArray[i] < inputArray[i-1])
            {
                tot += ((inputArray[i-1]+1)-inputArray[i]);
                inputArray[i] += ((inputArray[i-1]+1)-inputArray[i]);
            }
        }
    }   
    return tot;
}
