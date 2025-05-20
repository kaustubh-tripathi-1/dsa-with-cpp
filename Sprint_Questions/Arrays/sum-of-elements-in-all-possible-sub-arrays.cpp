#include <iostream>
#include <memory>

int main() {
    int n;
    std::cin >> n;
    std::unique_ptr<long long[]> arr = std::make_unique<long long[]>(n);

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i] * (i + 1LL) * (n - i);
    }

    std::cout << totalSum;
    return 0;
}