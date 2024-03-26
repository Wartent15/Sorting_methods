#pragma once // отдельный для создания функция печатанья и меню, чтобы не захломлять main.
#include <iostream>
#include <vector>

class Source {
public:
    static void printSortedArray(const std::vector<int>& arr);

    static  void printShowMenu();
};