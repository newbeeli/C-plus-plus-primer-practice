#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> array = {0,1,2,3,4,5,6,7,8,9};

    for (auto i = array.begin();i != array.end();i++){
        (*i) = (*i) * 2;
        cout << (*i) << endl;
    }

    auto c = array.begin() + (array.end() - array.begin())/2;
    cout << (*c) << endl;
    cout << array.end() - array.begin() << endl;

    return 0;
}