#include "radix_sort.h"
void RadixSort::sort(std::vector<int>& arr) { //Сначала сравниваются значения одного крайнего разряда, и элементы группируются по результатам этого сравнения.
    //Затем сравниваются значения следующего разряда, соседнего, и элементы либо упорядочиваются по результатам сравнения значений этого разряда внутри образованных
    // на предыдущем проходе групп, либо переупорядочиваются в целом, но сохраняя относительный порядок, достигнутый при предыдущей сортировке.
    // Затем аналогично делается для следующего разряда, и так до конца.

    if (arr.empty()) return;

    int max_num = *max_element(arr.begin(), arr.end());
    int exp = 1;

    std::vector<int> count(10), output(arr.size());

    while (max_num / exp > 0) {
        count.assign(10, 0);
        for (int i = 0; i < arr.size(); i++) {
            count[(arr[i] / exp) % 10]++;
        }
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }
        for (int i = arr.size() - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = output[i];
        }
        exp *= 10;
    }
}