#include "Trie.h"


bool Trie::insert(string &key)
{
	TrieNode *crawler = nullptr;
	crawler = &root;
	int len = 0;
	for(char c : key)
	{	
		len++;
		//std::cout<<"\nInserting at "<<(c-'a');
		if(crawler->children[c-'a']==nullptr)
			crawler->children[c-'a'] =  new TrieNode(c,len==key.length());
		crawler = (crawler->children[c-'a']);
	}
	crawler->setIsEndOfTheWord(true);
	
	return true;
}

bool Trie::search(string &pattern)
{
	TrieNode *crawler  = &root;
	for(char c: pattern)
	{
		if(!crawler->children[c-'a'])
			return false;
		crawler = (crawler->children[c-'a']);	
	}
	
	return true;
}