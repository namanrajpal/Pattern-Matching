#include<string>
#include<cmath>
#include<iostream>
#define HASHVALUE 3

using namespace std;
class AlgoKeeper{
	
	public:
		bool NaivePatternSearch(string text,string _pattern) const;
		bool RabinKarpPatternSearch(string text,string _pattern) const;
		bool KMPPatternSearch(string text,string _pattern) const;
		int  calculateStringHash(string str,int begin,int end) const;
};