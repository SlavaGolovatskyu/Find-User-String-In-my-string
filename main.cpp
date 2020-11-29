#include <iostream>
#include <string>

using namespace std;

string result(string MyStr, string UserStr)
{
    string outPut = "";
    if (MyStr.find(UserStr) == string::npos)
    {
        outPut = "Not Found";
    }
    else{
        outPut = UserStr;
    }
    return outPut;
}


int main()
{
    string MyStr = "abbccsdg", UserStr;
    cin >> UserStr;
    cout << result(MyStr, UserStr);
    return 0;
}
