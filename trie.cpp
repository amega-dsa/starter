#include <iostream>
#include <string>
#include "trie.hpp"
#include "contributors.hpp"
using namespace std;
string trie_names[100] = {};

int main()
{
    int size = 0;
    //---------- Contributors Make function calls here and increment size before calling it---------------------------
    size++;
    paraspatle(trie_names, size);
    size++;
    satyamshukla(trie_names, size);
    size++;
    prathameshpatil(trie_names, size);
    size++;
    shubhagarwal(trie_names, size);
    //-------------------------------------------------------------------------------

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
        cout << "Yaay! Your name was found in the trie ! Welcome to Amega, We hope you have a fun learning experience" << endl;
    }
    else
    {
        cout << "Your name is not in the trie" << endl;
    }
}