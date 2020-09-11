#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, max;

    while (cin >> input){
        if(input == string("end")){ //创建临时的string类，因为重载的==符号两边必须string类型。
            break;
        }
        max  = max + input + " ";//字面值必须有一个string的左值或者右值
    }

    cout << "The result is:" << max << endl;

    return 0;
}
