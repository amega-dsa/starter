
// node structureclass trie_node
class trie_node
{
 trie_node *next[26];
 int is_word;

public:
 trie_node()
 {
  this->is_word = 0;
  for (int i = 0; i < 26; i++)
  {
   this->next[i] = NULL;
  }
 }

 void insert(trie_node root, string name);
 bool search(trie_node root, string name);
};