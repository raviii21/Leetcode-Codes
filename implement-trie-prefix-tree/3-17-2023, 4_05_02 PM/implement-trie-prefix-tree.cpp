// Link: https://leetcode.com/problems/implement-trie-prefix-tree

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: implement-trie-prefix-tree
 *  RUNTIME: 63 ms
 *  MEMORY: 44.8 MB
 *  DATE: 3-17-2023, 4:05:02 PM
 *
 */

// Solution:

class Trie {
    
    struct TrieNode{
        TrieNode*child[26];
        bool flag=false;
        bool availablechar(char ch)
        {
         return child[ch-'a']!=NULL;
        }
        void addNode(char ch,TrieNode*node)
        {
            child[ch-'a'] = node;
        }
        TrieNode* getNode(char ch)
        {
           return child[ch-'a']; 
        }
        void end()
        {
            flag = true;
        }
       bool isEnd()
        {
            return flag;
        }
    };
public:
    TrieNode*root;
    Trie() {
       root = new TrieNode(); 
    }
    
    void insert(string word) {
      TrieNode *node = root;
		for (int i = 0; i < word.size(); i++) {
			if (!node->availablechar(word[i])) {
				node->addNode(word[i], new TrieNode());
			}
			node = node->getNode(word[i]);
		}
		node->end();
    }
    
    bool search(string word) {
        TrieNode*node = root;  
      for(int i=0;i<word.size();i++)
      {
          if(!node->availablechar(word[i]))  return false;
          node = node->getNode(word[i]);
      }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        TrieNode*node = root;
     for(int i=0;i<prefix.size();i++)
      {
          if(!node->availablechar(prefix[i])) return false;
          node = node->getNode(prefix[i]);
      }
        return true;
       
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
