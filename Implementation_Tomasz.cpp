#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include "Header.h"
//Gets a random word from the wordlist.txt file
vector<char> getRandomword() {
    ifstream file("wordlist.txt");
    vector<string> words;
    string word;

    if (!file.is_open()) {
        cerr << "Could not open wordlist.txt" << endl;
        exit(1);
    }

    while (file >> word) {
        words.push_back(word);
    }

    if (words.empty()) {
        cerr << "No words found in the file!" << endl;
        exit(1);
    }

    srand(time(0));
    string randomWord = words[rand() % words.size()];

    return vector<char>(randomWord.begin(), randomWord.end());
}

bool guessChar(char c, vector<char>& tried, vector<char> word) {
    bool found = false;

    for (size_t i = 0; i < word.size(); ++i) {
        if (word[i] == c && tried[i] == '_') {
            tried[i] = c;
            found = true;
            tried.at(i) = c;
        }
    }
    return found;
}