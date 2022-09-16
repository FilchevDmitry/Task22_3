#include <iostream>
#include<string>
#include<map>
bool anogram(std::string str1,std::string str2)
{
    int temp = 1;
    std::map<char, int> word1,word2;
    for (auto word_to_str : str1)
    {
        word1.insert(std::pair<char, int>(word_to_str, temp));
    }
    for (auto word_to_str : str2)
    {
        word2.insert(std::pair<char, int>(word_to_str, temp));
    }
    return (word1 == word2);
}

int main()
{
    std::string word1;
    std::string word2;
    std::cout << "input word 1\n";
    std::cin >> word1;
    std::cout << "input word 2\n";
    std::cin >> word2;
    if (anogram(word1, word2))
    {
        std::cout << "Anogram\n";
    }
    else
        std::cout << "NOT anogram\n";
}

