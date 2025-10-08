///week05-3a.cpp
///cpe
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string line;///part 1:input
    while ( getline(cin ,line )){
    ///讀入一行 一直讀,讀到ctrl-z才結束

        ///part 2:output
        cout << line << endl;
    }
}
