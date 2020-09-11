#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main(void)
{
    std::string xxx;
    std::vector<std::string> name;
    std::ifstream file("/Users/newbee-li/text");

    if(file){
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