#include <iostream>
#include <vector>

int main() {
    /*int a, b, c;
    std::cin >> a >> b >> c;
    std::vector<int> weap;
    weap.push_back(a);
    weap.push_back(b);
    weap.push_back(c);*/


    int n; // number of soldiers
    std::cin >> n;
    std::vector<int> weap;
    for (int i = 0; i < n; ++i) {
        int temp;
        std::cin >> temp;
//        std::cout << "temp is: " << temp << '\n';
        weap.push_back(temp);
    }
/*

    std::cout << weap.size() << '\n';
    for (int i = 0; i < weap.size(); ++i) {
        std::cout << "weap[" << i << "] - " << weap[i] << '\n';
    }
*/

    int ready{0};
    for (int i = 0; i < n; ++i) {
        if(weap[i] % 2 == 0)
            ready += 1;
    }
    if (ready > n / 2)
        std::cout << "READY FOR BATTLE" << '\n';
    else
        std::cout << "NOT READY" << '\n';

    return 0;
}
