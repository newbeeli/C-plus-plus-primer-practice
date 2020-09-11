#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;

    cout << "Please input two string"<<endl;

    cin >> s1 >> s2;

    cout << "max string is :" <<  ((s1 < s2) ? (s2) : (s1)) << endl;

    cout << "string size is equal : " << (s1.size() < s2.size() ? s2 : s1) << endl;

    return 0;
}
