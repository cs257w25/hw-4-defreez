#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>

// This is a function call ReadDictionary that takes a
// constant reference to a string and returns a vector of strings.
// A constant reference is a reference that cannot be modified.
// A vector of strings is a list of strings.
std::vector<std::string> ReadDictionary(const std::string& file_path);

// Choose a random word from the dictionary.
std::string PickWord(const std::vector<std::string>& dictionary);

int add(int x, int y);

#endif