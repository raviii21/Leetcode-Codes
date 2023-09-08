// Link: https://leetcode.com/problems/design-add-and-search-words-data-structure

/** Submission Info:
 *
 *  AUTHOR: Ravi Savsani
 *  TITLE: design-add-and-search-words-data-structure
 *  RUNTIME: 1358 ms
 *  MEMORY: 566.1 MB
 *  DATE: 3-19-2023, 11:14:58 PM
 *
 */

// Solution:

class TrieNode{
public:
    bool isCompleteWord;
    TrieNode* child[26];

    TrieNode() {
        isCompleteWord = false; 
        memset(child, 0, sizeof(child)); 
    }
};

class WordDictionary {
public:
    TrieNode* root;
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* node = root;
        for (char ch : word){
            int idx = ch - 'a';
            if(node->child[idx]==NULL) node->child[idx] = new TrieNode();
            node = node->child[idx];
        }
        node->isCompleteWord = true;
    }
    
    bool search(string word) {
        return Search(word, root);
    }

    bool Search(string word, TrieNode* node){
        for(int i=0;i<word.length();i++){
            char ch = word[i];
            if(ch == '.'){
                for(auto c: node->child)
                    if(c && Search(word.substr(i+1), c)) return true;
                return false;
            }
            int idx = ch - 'a';
            if(node->child[idx]==NULL) return false;
            node = node->child[idx];
        }
        return node->isCompleteWord;
    }
};
