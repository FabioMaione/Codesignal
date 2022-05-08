/*
Two arrays are called similar if one can be obtained from another by swapping at most 
one pair of elements in one of the arrays.
Given two arrays a and b, check whether they are similar.
*/
#include <vector>
bool areSimilar(std::vector<int> a, std::vector<int> b) 
{
    if (a == b)
        return true;
    std::iter_swap(
        std::mismatch(a.begin(), a.end(), b.begin(), b.end()).first,
        std::mismatch(a.rbegin(), a.rend(), b.rbegin(), b.rend()).first
    );
    return a == b;
}