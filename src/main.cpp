#include <iostream>
#include <vector>

#include "game.h"

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    vector<string> dictionary = ReadDictionary("../sgb-words.txt");

    // This is just a sanity check to make sure that we can
    // read the dictionary file.
    for (const string& word : dictionary) {
        cout << word << endl;
    }


    return 0;
}