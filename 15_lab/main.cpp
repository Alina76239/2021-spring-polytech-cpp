// ������� ������������� ������ ����������� ����� N � ������� ��������� � ���������� M.  M � N �������� ������������� � ����������.
// ��� ������� ���������� ������ 14 
#include <iostream>

int main() {
    int l = 0, s[80], n, m;
    std::cout << "N>0: ";
    std::cin >> n;
    std::cout << "M in [2,9]:";
    std::cin >> m;
    
    do {
        s[l++] = n % m;
        n /= m;
    } while (n != 0);

    for (int i = l - 1; i > -1; i--)
    {
        std::cout << s[i] << std::endl;
    }
    return 0;
} 
    
