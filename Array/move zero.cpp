#include <vector>

std::vector<int> moveZeros(int n, std::vector<int>& a) {
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (a[j] != 0) {
            std::swap(a[j], a[i]);
            i++;
        }
    }
    return a;
}

logic https://www.youtube.com/watch?v=MPvr-LmaZmA
