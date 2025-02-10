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