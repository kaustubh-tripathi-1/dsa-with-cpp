#include <iostream>
#include <memory>

long long sumOfAllSubarrays(const std::unique_ptr<long long[]>& arr, int n) {
    long long totalSum = 0;
    for (int i = 0; i < n; i++) {
        // Each element arr[i] appears in (i + 1) * (n - i) subarrays:
        // - (i + 1) possible starting positions (from 0 to i)
        // - (n - i) possible ending positions (from i to n-1)
        long long frequency = (i + 1LL) * (n - i);
        totalSum += arr[i] * frequency;
    }
    return totalSum;
}

int main() {
    int n;
    std::cin >> n;
    std::unique_ptr<long long[]> arr = std::make_unique<long long[]>(n);

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    long long result = sumOfAllSubarrays(arr, n);
    std::cout << result;
    return 0;
}

/* #include <iostream>
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
} */