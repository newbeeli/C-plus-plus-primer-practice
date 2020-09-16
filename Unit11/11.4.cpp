#include <map>
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main(void)
{
    std::string word;
    std::map<std::string, size_t> word_count;

    while(std::cin >> word){
        for(auto &a : word)a = tolower(a);
        word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());

        ++word_count[word];
    }

    for(const auto &xxx : word_count){
        std::cout << "key is " << xxx.first << "value is" << xxx.second << std::endl;
    }

    return 0;
}