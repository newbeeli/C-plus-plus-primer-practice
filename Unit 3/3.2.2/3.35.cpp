#include <iostream>

using namespace std;

int main(void)
{
     int array[10] = {0,1,2,3,4,5,6,7,8,9};

     //方法1
     for(auto &a:array){
         a = 0;
         cout << a;
     }

    cout << endl;
     //方法2
     for(auto b = begin(array);b!=end(array);b++){
         *(b) = 1;
         cout << *(b);
     }

    cout << endl;

     //方法3 下标；
     for(int i = 0;i < 10;i++){
         array[i] = 2;
         cout << array[i];
     }

    return 0;
}