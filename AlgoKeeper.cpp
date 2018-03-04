#include "AlgoKeeper.h"

bool AlgoKeeper::NaivePatternSearch(string text,string pattern) const
{
	int i=-1;
	int j=-1;
	int k;
	for(i=0;i<text.length();i++)
	{
		k=0;
		if(text[i] == pattern[k]) //first character Match
		{
			j=i;
			while(text[j++]==pattern[k++]) //if first character matches we will iterate till the end of pattern
			{
				if(k==pattern.length())
					return true;
			}
		}
	}
	return false;
}
bool AlgoKeeper::RabinKarpPatternSearch(string text,string _pattern) const
{
	return "Not Implemented";
}
bool AlgoKeeper::KMPPatternSearch(string text,string _pattern) const
{	
	return "Not implemented";
}