
class Y;//类类型的提前声明

class X
{
private:
    Y *ptr;
public:
    X();;
    ~X();
};
class Y
{
private:
    X aaa;
public:
};


