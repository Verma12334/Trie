#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode*children[26];
    bool isTerminal;

    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie{
    public:
    TrieNode*root;
    void insertUtil(TrieNode*root,string word){
        //base case
        if(word.length()==0){
            root->isTerminal=true;
        }
        //assumption,word will be in CAPS
        int index=word[0]-'A';
        TrieNode*child;

        //present 
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            //absent
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }

        //RECURSION
       // insertUtil(child,world.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    }

};

int main(){
    Trie t;
    t.insertWord("abcd");
    return 0;
}