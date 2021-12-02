
// node structure
class trie_node
{
 trie_node *next[26];
 int is_word;

public:
 trie_node()
 {
  is_word = 0;
  next = new trie_node[26];
 }
};