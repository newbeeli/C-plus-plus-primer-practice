#include<string>
#include<iostream>

using namespace std;

class Person{
public:
    string name;
    string address;
    int value;
    Person() = default;
    Person(const string &a, const string &b):name(a), address(b), value(0){};
    Person(istream &is){is >> this->name >> this->address;};
    string get_name() const{return name;};
    string get_address() const{return address;};
};

istream &read(istream &is, Person &ppp)
{
    is >> ppp.name >> ppp.address;
    return is;
}

ostream &print(ostream &os, const Person &ppp)//左值的返回值必须是引用
{
    os << ppp.name << ppp.address << endl;
    return os;
}
