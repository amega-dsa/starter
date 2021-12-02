#include <iostream>
#include <string>
#include "trie.hpp"
using namespace std;
//Insert Your namein this array withou any spaces
string trie_names[] = {"paraspatle", "deeppanchani"};

int main()
{
 int size = sizeof(trie_names) / sizeof(trie_names[0]);
 trie_node *root = new trie_node();
 for (int i = 0; i < size; i++)
 {
  root->insert(trie_names[i]);
 }
 string name;
 cout << "Enter Your Name to search it in the trie : ";
 cin >> name;
 if (root->search(name))
 {
  cout << "Your name was found in the trie" << endl;
 }
 else
 {
  cout << "Your name is not in the trie" << endl;
 }
}