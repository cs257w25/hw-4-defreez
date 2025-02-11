#define CATCH_CONFIG_RUNNER

#include "game.h"

#include <string>
#include <vector>
#include <catch2/catch_all.hpp>

using namespace std;

// Test PickWord
TEST_CASE("PickWord") {
    vector<string> dictionary = {"apple", "banana", "cherry", "date", "elderberry"};

    // Seed the random number generator so that we get the same result every time.

    string picked_word = PickWord(dictionary);

    // REQUIRE that picked_word is in dictionary
    REQUIRE(find(dictionary.begin(), dictionary.end(), picked_word) != dictionary.end());
}

int main(int argc, char* argv[]) {
    return Catch::Session().run(argc, argv);
}