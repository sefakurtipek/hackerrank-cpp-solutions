#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    std::vector<int> v;
    for(int i = 0; i < N; i++)
    {
        int num;
        std::cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    for(int num: v)
    {
        std::cout << num << " ";
    }
    return 0;
}
