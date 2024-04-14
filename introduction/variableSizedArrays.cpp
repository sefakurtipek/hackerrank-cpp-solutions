#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {   
    int n,q;
    std::cin >> n >> q;
    vector<int> a[n];
    for (int i = 0; i < n; i++)
    {
        int s;
        std::cin >> s;
        for (int j = 0; j < s; j++)
        {
            int subNum;
            std::cin >> subNum;
            a[i].push_back(subNum);
        }
    }
    for(int k = 0; k < q; k++)
    {
        int m, n;
        cin >> m >> n;
        cout << a[m].at(n) << endl;
    } 
    return 0;
}
