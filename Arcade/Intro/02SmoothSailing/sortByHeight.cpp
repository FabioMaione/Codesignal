/*
Some people are standing in a row in a park. There are trees between them which cannot 
be moved. Your task is to rearrange the people by their heights in a non-descending 
order without moving the trees. People can be very tall!
*/
#include <algorithm>
#include <vector>
std::vector<int> sortByHeight(std::vector<int> a) 
{
	std::vector<int> negative;
	std::vector<int> positive;

	for(unsigned i=0; i<a.size(); i++)
	{
		if(a[i]==-1)
			negative.push_back(i);
		else
		{
			positive.push_back(a[i]);
			negative.push_back(-1);
		}
	} 
	sort(positive.begin(), positive.end());

	unsigned k=0;
	for(unsigned i=0; i<a.size(); i++)
	{
		if(i==negative[i])
			a[i]=-1;
		else
		{
			a[i]=positive[k];
			k++;
		}
	}
	return a;
}