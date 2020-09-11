#include<string>

class window_mgr;

class Screen{
    friend class window_mgr;//friend class
public:
    typedef std::string::size_type pos;
    Screen():height(0), width(0),cursor(0),contents("hello world"){};
    Screen(const pos a, const pos b, int c):height(a), width(b),contents(std::string(c,' ')){};
    Screen(const pos a, const pos b, char c):height(a), width(b),contents(std::string(50, c)){};
    inline Screen & move(pos a, pos b){pos row = a * width;cursor = row + b;return *this;};
    inline Screen & set(char a){contents[cursor] = a;return *this;};
    inline Screen & set(pos a,pos b, char c){contents[a * width + b] = c;return *this;};
    inline const Screen & display(std::ostream &os) const{os << contents;return *this;};
    pos show_height() const{return height;};//const 放在最后
    pos show_width() const{return width;};
    pos show_cursor() const{return cursor;};
    pos size() const;
    std::string show_contents() const{return contents;};
private:
    pos height;
    pos width;
    pos cursor;
    std::string contents;
};

Screen::pos Screen::size() const
{
    return this->height * this->width;
}

class window_mgr{
private:
    /* data */
public:
    void clear(Screen &a, std::ostream &os) const{os << a.contents;};
};
