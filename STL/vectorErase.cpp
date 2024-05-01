#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    std::cin >> N;
    std::vector<int> vec;
    for(int i=0; i<N;i++)
    {
        int num;
        std::cin >> num;
        vec.push_back(num);
    }
    int query1, query2_1, query2_2;
    std::cin >> query1;
    vec.erase(vec.begin()+query1-1);
    std::cin >> query2_1;
    std::cin >> query2_2;
    vec.erase(vec.begin()+query2_1-1,vec.begin()+query2_2-1);
    std::cout << vec.size() << "\n";
    for(int n:vec)
        std::cout << n << " "; 
    return 0;
}
