#include<string>
#include<cmath>
#include<iostream>
#include<vector>
#include "Trie.h"
#define HASHVALUE 3

using namespace std;
class AlgoKeeper{
	
	public:
		bool NaivePatternSearch(string text,string _pattern) const;
		bool RabinKarpPatternSearch(string text,string _pattern) const;
		bool KMPPatternSearch(string text,string _pattern) const;
		bool TriePatternSearch(std::vector<string> texts,string pattern) const;
		int  calculateStringHash(string str,int begin,int end) const;
};