#include<string>

using namespace std;
class AlgoKeeper{
	public:
		bool NaivePatternSearch(string text,string _pattern) const;
		bool RabinKarpPatternSearch(string text,string _pattern) const;
		bool KMPPatternSearch(string text,string _pattern) const;
};