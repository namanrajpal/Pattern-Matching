#include "TrieNode.h"

TrieNode::TrieNode(const char &_key,bool endOfWord) :
 m_isEndOfTheWord(endOfWord)
,key(_key)
{
	
	for(int i=0;i<26;i++)
		children[i] = nullptr;
}
TrieNode::TrieNode():
key('$')
{
	m_isEndOfTheWord =false;
	for(int i=0;i<26;i++)
		children[i] = nullptr;
}