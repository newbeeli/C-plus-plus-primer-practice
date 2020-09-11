#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a("abcdefg");
    string::size_type len = a.size();

    while(len){
        a[len - 1] = 'X';
        len--;
        cout << len;
    }

    cout << "The result is :" << a << endl;

    return 0;
}