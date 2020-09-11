#include "7.4.h"

int main()
{
    Person a(cin);
    cout << a.get_address() << endl;
    cout << a.get_name() << endl;

    read(cin, a);
    print(cout, a);

    return 0;
}