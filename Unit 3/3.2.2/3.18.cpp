#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> array;
    int a,b,s;

    while(cin >> s){
        array.push_back(s);
    }

    /*需要区分奇偶*/
    if(array.size()/2){
    for(vector<int>::size_type i = 0;i < array.size() / 2;i++){
        cout << "two num is" << array[i]<< " " << array[array.size() - i - 1] << endl << "sum is " << array[array.size() - i - 1] + array[i]<<endl;
        a = array[i];
    }
    }else{
    for(vector<int>::size_type i = 0;i < array.size() / 2 + 1;i++){
        cout << "two num is" << array[i]<< " " << array[array.size() - i - 1] << endl << "sum is " << array[array.size() - i - 1] + array[i]<<endl;
        a = array[i];
    }

    }



   return 0;
}