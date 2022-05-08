/*
Given two strings, find the number of common characters between them.
*/
#include <string>
int commonCharacterCount(std::string s1, std::string s2)
{
   	char al[26];
	al[0]=97;

	char temp;
	for(int i=1; i<26; i++)
	{
		temp=al[i-1];
		temp++;
		al[i]=temp;
	}

	int a[26]={0};
	int b[26]={0};

	for(int k=0; k<s1.length(); k++)
		for(int i=0; i<26; i++)
			if(s1[k]==al[i])
				a[i]++;

	for(int k=0; k<s2.length(); k++)
		for(int i=0; i<26; i++)
			if(s2[k]==al[i])
				b[i]++;

	int tot=0;

	for(int i=0; i<26; i++)
	{
		if(a[i]!=0 && b[i]!=0)
		{
			if(a[i]<b[i])
				tot+=a[i];
			else
				tot+=b[i];
		}
	}

   return tot;
}
