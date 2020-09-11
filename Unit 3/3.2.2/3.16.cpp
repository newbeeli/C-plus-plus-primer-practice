#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> array{10, "null"};//虽然回使用序列化来初始化，但是10不能初始化元素，只能用别的方式初始化，也就是10个“null”

    cout << "The vector size is " << array.size() << endl;

   return 0;
}