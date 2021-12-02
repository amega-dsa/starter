#include <iostream>
#include <string>
using namespace std;
#define CHAR_SIZE 26
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
  if (temp->next[(int)name[i] - (int)'a'] == NULL)
  {
   temp->next[(int)name[i] - (int)'a'] = new trie_node();
  }
  //traverse to the next node
  temp = temp->next[(int)name[i] - (int)'a'];
 }
 // incrementing is_word to indicate that a word ends here
 temp->is_word++;
}

bool trie_node::search(string name)
{
 int level;
 int len = name.length();
 int ind;

 trie_node *temp = this;

 for (level = 0; level < len; level++)
 {
  ind = (int)name[level] - (int)'a';
  if (!temp->next[ind])
  {
   return false;
  }
  temp = temp->next[ind];
 }

 return (temp->is_word);
}
