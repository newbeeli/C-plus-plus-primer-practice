#include <map>
#include <iostream>
#include <vector>
#include <string>


void addfamily(std::map<std::string, std::vector<std::string>>&map, std::string fst_name, std::vector<std::string> child_name)
{
    map.emplace(fst_name, child_name);//--->关联容器可以通过关键字读取。

    return;
}

void addchildname()
{



}


int main(void)
{
    std::map<std::string, std::vector<std::string>> family;


}