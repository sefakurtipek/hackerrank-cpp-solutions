#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string a, b, aHat, bHat;
    cin >> a;
    cin >> b;
    cout << a.length() << " " << b.length() << std::endl;
    std::cout << a+b << std::endl;
    aHat = a;
    bHat = b;
    aHat[0] = b[0];
    bHat[0] = a[0];
    std::cout << aHat << " " << bHat << std::endl;
    return 0;
}
