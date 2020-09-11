#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a("abcdefg");
    /*
    for(decltype(a.size()) i = 0;i < a.size();i++){
        a[i] = 'X';
    }
    */

   for(auto &c : a){
       c = 'X';
   }

    cout << "The result is :" << a << endl;

    return 0;
}