#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <utility>
#include <cctype>

std::string lower(const std::string& s){
    std::string lowered;
    std::transform(s.begin(), s.end(), std::back_inserter(lowered), [](char ch){
        return std::tolower(ch);
    });
    return lowered;
}

int main() {
    std::string str1 = "apple";
    std::string str2 = "bear";
    std::cout << lower("Hello World") << std::endl;
    std::cout << str1.compare(str2) << '\n';
}