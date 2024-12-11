#include "ioLibrary.h"

namespace io {

bool isLetter(char c)
{
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

std::vector<std::string> readWords(std::ifstream &file)
{
    std::vector<std::string> words;
    std::string currentWord;
    char currentChar;
    while (file.get(currentChar)) {
        if (isLetter(currentChar)) {
            currentWord.push_back(currentChar);
        } else if (!currentWord.empty()) {
            words.push_back(currentWord);
            currentWord.clear();
        }
    }
    return words;
}

void printCurrentDirectory()
{
    std::cerr << "Current path: " << std::filesystem::current_path() << '\n';
}

} // namespace io