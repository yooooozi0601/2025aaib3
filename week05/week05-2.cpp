///week05-2.cpp
///stringstream
#include <iostream>/// cin cout
#include <string>///string
#include <sstream>///string 變stream的外掛
using namespace std;///不寫std::cin
int main()
{
    string line;
    getline( cin, line);///一次讀入一整行
    cout << line << endl;

    stringstream ss(line);
    string word;
    while(ss >> word){
        cout << "ss讀到1個字: " << word << endl;
    }
}
