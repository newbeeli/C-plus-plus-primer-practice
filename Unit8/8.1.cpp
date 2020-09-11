#include <iostream>
#include <string>

std::istream & input(std::istream &aaa)
{
    std::string a;

    while(aaa >> a){
        std::cout << a;
    }

    aaa.clear();
    auto xxx = aaa.good();//获取相对应的good状态，如果badbit failbit eofbit任意置一位就选显示0

    return aaa;
}

int main(void)
{
    std::cout << "input data"<<std::endl;

    input(std::cin);

    return 0;
}