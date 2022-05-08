/*
Ratiorg got statues of different sizes as a present from CodeMaster for his birthday, 
each statue having an non-negative integer size. Since he likes to make things perfect, 
he wants to arrange them from smallest to largest so that each statue will be bigger 
than the previous one exactly by 1. He may need some additional statues to be able to 
accomplish that. Help him figure out the minimum number of additional statues needed.
*/
#include <algorithm>
#include <vector>
int makeArrayConsecutive2(std::vector<int> statues) {

        sort(statues.begin(), statues.end());

        int n=0;
        for(int i=0; i<statues.size()-1; i++)
        {
        	n+=(statues[i+1]-statues[i])-1;
        }

        return n;
}
