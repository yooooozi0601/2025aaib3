///week05-3c.cpp
///cpe
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line;///part 1:input
    while ( getline(cin ,line )){
    ///Ū�J�@�� �@��Ū,Ū��ctrl-z�~����
        stringstream ss(line);
        string word;
        ss >> word;
        reverse(word.begin(), word.end() );
        cout << word;
        while(ss >> word){
            reverse(word.begin(), word.end() );
            cout << " " << word;
        }
        ///part 2:output
        cout << endl;
    }
}

