/*
Given a sequence of integers as an array, determine whether it is possible to obtain a
strictly increasing sequence by removing no more than one element from the array.
*/
#include <vector>
bool almostIncreasingSequence(std::vector<int> sequence) {
	bool a=true,b=true;
	for(int i=1;i<sequence.size();i++)
	{
		if(sequence[i]-sequence[i-1]<=0)
		{
			int temp=sequence[i];
			int j=0;
			while(j<i-1)
			{
				if(temp<=sequence[j])
				{
					a=false;
					break;
				}
				j++;
			}
			for(int j=i+1;j<sequence.size();j++)
			{
				if(sequence[i]>=sequence[j])
				{
					a=false;
					break;
				}
			}
		}
		if(sequence[i]-sequence[i-1]<=0)
		{
			int temp1=sequence[i-1];
			for(int j=0;j<i-1;j++)
			{
				if(sequence[i-1]<=sequence[j])
				{
					b=false;
					break;
				}
			}
			for(int j=i+1;j<sequence.size();j++)
			{
				if(temp1>=sequence[j])
				{
					b=false;
					break;
				}
			}
		}
	}
	if((a==false)&&(b==false))
		return false;
	return true;
}