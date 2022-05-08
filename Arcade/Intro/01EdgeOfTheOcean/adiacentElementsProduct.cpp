/*
Given an array of integers, find the pair of adjacent elements that has the largest 
product and return that product.
*/
#include <vector>
int adjacentElementsProduct(std::vector<int> inputArray) {

    int k=inputArray.size()-1;
    int a[k];
    for(int i=0; i<k; i++)
    {
        a[i]=inputArray[i]*inputArray[i+1];
    }
    int max=a[0];
    for(int i=0; i<k; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
