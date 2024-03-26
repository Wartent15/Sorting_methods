#include "insertion_sort.h"
void InsertionSort::sort(std::vector<int>& arr) { // я пон€л примерно так. ѕеребираютс€ элементы в неотсортированной части массива.  аждый элемент вставл€етс€ в отсортированную часть массива на то место, где он должен находитьс€.
    int key, j;
    for (int i = 1; i < arr.size(); i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}