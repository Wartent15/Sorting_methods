#include "selection_sort.h"
void SelectionSort::sort(std::vector<int>& arr) { // Без понятия что тут коментировать. Самый обычный принцип сортировки.
    int minIndex, temp;
    for (int i = 0; i < arr.size() - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}