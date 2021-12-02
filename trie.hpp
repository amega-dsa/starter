#include <iostream>
#include <string>
using namespace std;
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
 trie_node *temp = this; //storing root node
 for (int i = 0; i < name.length(); i++)
 {
  //if character of string is nt found then name one
  if (temp->next[name[i]] == NULL)
  {
   temp->next[name[i]] = new trie_node();
  }
  //traverse to the next node
  temp = temp->next[name[i]];
 }
 // incrementing is_word to indicate that a word ends here
 temp->is_word++;
}
bool trie_node::search(string name)
{
}