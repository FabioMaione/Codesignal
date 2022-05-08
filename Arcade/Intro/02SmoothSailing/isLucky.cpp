/*
Ticket numbers usually consist of an even number of digits. 
A ticket number is considered lucky if the sum of the first half of the digits is 
equal to the sum of the second half.
Given a ticket number n, determine if it's lucky or not.
*/
#include <vector>
bool isLucky(int n) 
{
    std::vector<int> v;

	while(n>0)
	{
		unsigned long int temp;
		temp=n%10;
		n=n/10;
		v.push_back(temp);
	}

	int c=0;
	int c2=0;
	for(unsigned i=0; i<v.size()/2; i++)
		c+=v[i];
	for(unsigned i=v.size()/2; i<v.size(); i++)
		c2+=v[i];

	if(c==c2)
		return true;
	return false;
}
