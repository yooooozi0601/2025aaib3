///week03-1.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout<< "請輸入4個數字: ";
    vector<int> a; ///伸縮自如的陣列
    int now;
    for(int i=0;i<4;i++){
        cin >> now;
        a.push_back(now);

    }
    for(int i=0;i<a.size();i++){
        cout << a[i] <<' ';
    }
    cout << "現在程式碼裡,又推入了 99 88兩個數字,結果呢?\n";

    a.push_back(99);
    a.push_back(88);


    for(int i=0; i<a.size(); i++){
        cout << a[i] << ' ';///數字後面,有空格
    }
}
