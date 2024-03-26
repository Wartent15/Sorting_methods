#include "source.h"

void Source::printSortedArray(const std::vector<int>& arr) { // ������ ���������� ������������ ��� ���������� ������.
    std::cout << "��������������� ������:\n";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void Source::printShowMenu() {
    std::cout << "�������� ����� ����������:" << std::endl;
    std::cout << "1. ����������� ����������" << std::endl;
    std::cout << "2. ���������� �������" << std::endl;
    std::cout << "3. ���������� ���������" << std::endl;
    std::cout << "4. ���������� ���������" << std::endl;
    std::cout << "5. �������� ����������" << std::endl;
    std::cout << "6. ����������� ������" << std::endl;
    std::cout << "7. ����� ������" << std::endl;
    std::cout << "8. �����" << std::endl;
}