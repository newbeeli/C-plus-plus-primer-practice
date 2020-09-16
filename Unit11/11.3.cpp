#include <map>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string word;
    map<string, size_t> word_count;

    while(cin >> word){
        ++word_count[word];
    }

    for(auto xxx : word_count){
        cout << "key is " << xxx.first << "value is" << xxx.second << endl;
    }

    return 0;
}