/*
Given the string, check if it is a palindrome.
*/
#include <string>
bool checkPalindrome(std::string inputString) 
{
	if(inputString.length()==1)
		return true;
	else
	{
		 int j=inputString.length()-1;
		int q=0;
		for(int i=0; i<inputString.length()/2; i++)
		{
			if(inputString[i]!=inputString[j])
				q=1;
			j--;
		}
		if(q==1)
			return false;
		return true;
	}
}