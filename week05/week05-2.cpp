///week05-2.cpp
///stringstream
#include <iostream>/// cin cout
#include <string>///string
#include <sstream>///string ��stream���~��
using namespace std;///���gstd::cin
int main()
{
    string line;
    getline( cin, line);///�@��Ū�J�@���
    cout << line << endl;

    stringstream ss(line);
    string word;
    while(ss >> word){
        cout << "ssŪ��1�Ӧr: " << word << endl;
    }
}
