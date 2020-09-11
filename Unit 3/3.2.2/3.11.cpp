#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    const string s("abc,adsd!!adddc...");

    for(auto c : s){
        c = 'X';
        cout << c;
    }

    cout << endl;

   return 0;
}