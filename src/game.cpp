#include <string>
#include <vector>

#include <fstream>

using namespace std;

vector<string> ReadDictionary(const string& file_path) {
    // This is what I will ultimately return
    vector<string> dictionary;

    ifstream file(file_path);

    string line;
    while (getline(file, line)) {
        dictionary.push_back(line);
    }
    file.close();

    return dictionary;
}

string PickWord(const vector<string>& dictionary) {

    // This is a random number between 0 and the size of the dictionary
    int random_index = rand() % dictionary.size();

    return dictionary[random_index];
}
