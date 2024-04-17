#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> vec;
    stringstream ss(str);
    char ch;
    int num;
    while(ss >> num)
    {
        vec.push_back(num);
        ss >> ch;
    }
    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
