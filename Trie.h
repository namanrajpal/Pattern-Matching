#include "TrieNode.h"
#include <string>
#include <iostream>
class Trie{
	public:
		bool insert(string &key);
		bool search(string &key);
	private:
		TrieNode root;
};