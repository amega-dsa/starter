#include <iostream>
#include <string>
#define CHAR_SIZE 128
// node structure
class trie_node
{
 trie_node *next[CHAR_SIZE];
 int is_word;

public:
 trie_node()
 {
  this->is_word = 0;
  for (int i = 0; i < CHAR_SIZE; i++)
  {
   this->next[i] = NULL;
  }
 }

 void insert(string name);
 bool search(string name);
};

void trie_node::insert(string name)
{
}
bool trie_node::search(string name)
{
}