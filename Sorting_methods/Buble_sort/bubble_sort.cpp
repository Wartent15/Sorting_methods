#include "bubble_sort.h"
void BubbleSort::sort(std::vector<int>& arr) { // Без понятия что тут коментировать. Самый обычный принцип сортировки.
    int temp;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size() - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}