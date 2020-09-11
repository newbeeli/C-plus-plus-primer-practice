#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
    std::string xxx;
    std::vector<std::string> name;
    std::fstream file("/Users/newbee-li/text", std::fstream::in);

    if(file){//流均是有状态的，只要出现错误，流的状态就会被置上，所以直接判断流的状态即可
        while(std::getline(file, xxx)){
            name.push_back(xxx);
        }

        for(auto aaa:name){
            std::cout << aaa << std::endl;
        }
    }

    file.close();

    return 0;
}