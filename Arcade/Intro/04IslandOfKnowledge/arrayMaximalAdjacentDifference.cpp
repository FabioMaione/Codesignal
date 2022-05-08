/*
Given an array of integers, find the maximal absolute difference between any two of its adjacent elements.
*/
#include <vector>
int arrayMaximalAdjacentDifference(std::vector<int> a) {
    int max = 0;
    for(int i = 0; i < a.size()-1; i++)
        if(fabs(a[i] - a[i+1]) > max)
            max = fabs(a[i] - a[i+1]);
    return max;
}