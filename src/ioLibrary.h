#ifndef IO_LIBRARY_H
#define IO_LIBRARY_H

#include <iostream>
#include <string_view>
#include <string>
#include <vector>
#include <fstream>
#include <cstdio>
#include <map>
#include <filesystem>

namespace io {

template <typename T>
std::vector<T> readVector(std::size_t size, std::ifstream &file)
{
    if (!file.is_open()) {
        std::cerr << "File does not exist" << std::endl;
        exit(1);
    }
    std::vector<T> result(size);
    for (auto &el : result) {
        file >> el;
    }
    return result;
}

template <typename T>
std::vector<T> readVector(std::ifstream &file)
{
    if (!file.is_open()) {
        std::cerr << "File does not exist" << std::endl;
        exit(1);
    }
    std::vector<T> result;
    T tmp;
    while (file >> tmp) {
        result.push_back(tmp);
    }
    return result;
}

template <typename T>
T readVariable(std::ifstream &file)
{
    if (!file.is_open()) {
        std::cerr << "File does not exist" << std::endl;
        exit(1);
    }
    T tmp;
    file >> tmp;
    return tmp;
}

// Concept to check if a type is a map
template <typename T>
concept IsMap = requires(T t) {
    typename T::key_type;
    typename T::mapped_type;
};

// Concept to check if a type is a container (non-map)
template <typename T>
concept IsContainer = requires(T t) {
    std::begin(t);
    std::end(t);
} && !IsMap<T>;

template <IsContainer T>
void printContainer(std::string_view label, const T &container, std::ofstream &file)
{
    if (!file.is_open()) {
        std::cerr << "File does not exist" << std::endl;
        exit(EXIT_FAILURE);
    }
    file << label << "[";
    for (auto it = container.begin(); it != container.end(); ++it) {
        file << *it;
        auto it2 = it;
        ++it2;
        if (it2 != container.end()) {
            file << ", ";
        }
    }
    file << "]\n";
}

template <IsMap T>
void printContainer(std::string_view label, const T &container, std::ofstream &file)
{
    if (!file.is_open()) {
        std::cerr << "File does not exist" << std::endl;
        exit(EXIT_FAILURE);
    }
    file << label << "{\n";
    for (const auto &[key, value] : container) {
        file << '\t' << key << " => " << value << "\n";
    }
    file << "}\n";
}

template <typename T>
void printVariable(T variable, std::string_view label, std::ofstream &file)
{
    file << label << variable << "\n";
}

template <typename T>
void printVariable(T variable, std::string_view label, std::ofstream &file, char separator)
{
    file << label << variable << separator;
}

void printCurrentDirectory();

std::vector<std::string> readWords(std::ifstream &file);

} // namespace io

#endif // IO_LIBRARY_H