#include <iostream>
#include <vector>
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "counting_sort.h"
#include "radix_sort.h"
#include "source.h"



int main() {
    setlocale(LC_ALL, "RUS");
    std::vector<int> arr = { 5, 2, 7, 3, 9, 1 }; // просто изначальный вектор для примера.

    int choice;
    bool flag = true;

    while (flag) {
        Source::printShowMenu();
        std::cin >> choice;
        switch (choice) {
        case 1:
            BubbleSort::sort(arr);
            Source::printSortedArray(arr);
            break;
        case 2:
            SelectionSort::sort(arr);
            Source::printSortedArray(arr);
            break;
        case 3:
            InsertionSort::sort(arr);
            Source::printSortedArray(arr);
            break;
        case 4:
            CountingSort::sort(arr);
            Source::printSortedArray(arr);
            break;
        case 5:
            RadixSort::sort(arr);
            Source::printSortedArray(arr);
            break;
        case 6:
            for (int i = 0; i < arr.size(); i++) {
                std::cout << arr[i] << " ";
            }
            break;
        case 7:
            for (int i = 0; i < arr.size(); i++) {
                std::cin >> arr[i];
            }
            break;

        case 8:
            flag = false;
            break;

        default: // не обязательно но все же что бы было легче заметьть ошибку 
            std::cout << "Ошибка: некорректный выбор метода сортировки" << std::endl;
            return 1;
        }
    } 
}