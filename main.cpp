#include <iostream>

int k;

int f(int n, int i) {
if (n == 0) {
        return 1;
    }
    if (n < 0 || i < 1) {
        return 0;
    }
    return f(n-i, k) + f(n, i-1); }

int main() {
    int sd;
    std::cout << "Enter the number of steps: \n";
    std::cin >> sd;
    std::cout << "Enter the number of possible options: \n";
    std::cin >> k;
    std::cout << f(sd, k);
}