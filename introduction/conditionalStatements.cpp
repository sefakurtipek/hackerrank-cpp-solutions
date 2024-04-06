#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    if(n>= 1 && n <= 9)
    {
        if (n == 1)
         cout << "one" << std::endl;
        else if (n == 2)
         cout << "two" << std::endl;
        else if (n == 3)
         cout << "three" << std::endl;
        else if (n == 4)
         cout << "four" << std::endl;
        else if (n == 5)
         cout << "five" << std::endl;
        else if (n == 6)
         cout << "six" << std::endl;
        else if (n == 7)
         cout << "seven" << std::endl;
        else if (n == 8)
         cout << "eight" << std::endl;
        else if (n == 9)
         cout << "nine" << std::endl;       
    }
    else if(n > 9)
    {
        cout << "Greater than 9" << std::endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
