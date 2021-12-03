## Making your first contribution at Amega - Tutorial 🤖

Before going through this tutorial please make sure that you have gone through the [Contributing](https://github.com/amega-dsa/starter/blob/main/CONTRIBUTING.md) markdown file.

## Now that you have switched to your branch, follow the below steps -

1. Inside the contributors.hpp file make a function of your name if your name is Naruto Uzumaki the function name should be "narutouzumaki". Paste the below code in contributors.hpp and replace narutouzumaki with your name.

```
void narutouzumaki(string arr[], int size)
{
 string name = "narutouzumaki";
 arr[size - 1] = name;
}
```

2. Make the function call of the function you made above in the main function and increment the size. Copy and paste the code below in main function of file tries.cpp.

```
size++;
narutouzumaki(trie_names,size);
```
