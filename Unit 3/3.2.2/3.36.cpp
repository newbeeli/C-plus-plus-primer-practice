#include <iostream>

using namespace std;

int main(void)
{
    char str[] = {'h','e','l','l','o'};
    char *p = str;

    cout << p << endl << p + 1;
    return 0;
}