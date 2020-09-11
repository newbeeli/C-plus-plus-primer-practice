#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> array;
    string input;

    while(cin >> input){
        array.push_back(input);
        if(array.size() > 6){
            break;
        }
    }

    for(auto c: array){
        cout << c << endl;
    }

   return 0;
}