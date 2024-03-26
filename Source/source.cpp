#include "source.h"

void Source::printSortedArray(const std::vector<int>& arr) { // просто уведомляем пользователя что сортировка прошла.
    std::cout << "Отсортированный массив:\n";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void Source::printShowMenu() {
    std::cout << "Выберите метод сортировки:" << std::endl;
    std::cout << "1. Пузырьковая сортировка" << std::endl;
    std::cout << "2. Сортировка выбором" << std::endl;
    std::cout << "3. Сортировка вставками" << std::endl;
    std::cout << "4. Сортировка подсчётом" << std::endl;
    std::cout << "5. Цифровая сортировка" << std::endl;
    std::cout << "6. Изначальный массив" << std::endl;
    std::cout << "7. Новый массив" << std::endl;
    std::cout << "8. Выход" << std::endl;
}