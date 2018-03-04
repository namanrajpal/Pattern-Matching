#include "AlgoKeeper.h"


bool AlgoKeeper::NaivePatternSearch(string text,string pattern) const
{
	int i=-1;
	int j=-1;
	int k;
	auto textLength = text.length();
	auto patternLength = pattern.length();
	for(i=0;i<textLength;i++)
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
bool AlgoKeeper::RabinKarpPatternSearch(string text,string pattern) const
{
	int i=-1;
	auto textLength = text.length();
	auto patternLength = pattern.length();
	auto patternHash = calculateStringHash(pattern,0,patternLength);
	auto textHash = calculateStringHash(text,0,patternLength);
	//cout<<"Calculated hash"<<patternHash;
	for(i=0;i<textLength-patternLength;i++)
	{
		//cout<<endl<<"Calculated String hash"<<textHash;
		//cout<<" "<<text.at(i);
		if(textHash == patternHash)
		{
			return true;
		}
		textHash = (textHash)/HASHVALUE - ((int)text.at(i) -96 ) + ((int)text.at(i+patternLength)-96)*std::pow(HASHVALUE,patternLength);
	}
	return false;
}
bool AlgoKeeper::KMPPatternSearch(string text,string _pattern) const
{	
	return "Not implemented";
}

bool AlgoKeeper::TriePatternSearch(std::vector<string> texts,string pattern) const
{
	Trie myTrie;
	for(string s: texts)
		myTrie.insert(s);
	
	return myTrie.search(pattern);
}
		



//Helper Functions

int AlgoKeeper::calculateStringHash(string str,int begin,int end) const//begin inclusive and end exclusive
{
	int hash = 0;
	int k = 1;
	for(int i=begin;i<end;i++)
	{		
		hash+=(((int)str.at(i)-96) * std::pow(HASHVALUE,k));
		k++;
	}
	return hash;
}










