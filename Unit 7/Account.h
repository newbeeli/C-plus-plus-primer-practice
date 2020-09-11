#include <string>
#include <vector>

class Account
{
private:
    int a;
    static constexpr double aaa = 7.0;//唯一一中可以类内部初始化的变量。
    static std::vector<int> bbb;//staic 的对象不能在类中初始化，除非是constexpr整型变量才可以
public:
    Account() = default;
    Account(double a = aaa){};
};

std::vector<int> Account:: bbb(1);//static成员的初始化