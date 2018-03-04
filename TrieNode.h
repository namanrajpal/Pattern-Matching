
using namespace std;

class TrieNode{
	public:
		friend class Trie;
		TrieNode(const char &key,bool endOfWord);
		TrieNode();
		bool getIsEndOfTheWord() const {return m_isEndOfTheWord;}
		bool setIsEndOfTheWord(bool val){m_isEndOfTheWord = val;}
	private:
		TrieNode *children[26];
		bool m_isEndOfTheWord;
		char key;
};