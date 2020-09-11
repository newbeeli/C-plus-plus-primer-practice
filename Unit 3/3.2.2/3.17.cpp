#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    vector<string> array;
    string s;

    while(cin >> s){
        array.push_back(s);
        if(array.size() > 5){
            break;
        }
    }

    cout << "input over" << endl;

    for(auto &c : array){
        for(auto &d : c){
            d = toupper(d);
        }
        cout << c << endl;
    }

   return 0;
}