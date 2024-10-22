#include <iostream>
using namespace std;

// ���������� ������� ��� �������� �������� ������
void InputArray(int mas[], int size, int i = 0) {
    if (i == size) return; // ������� �������

    cout << "E " << i + 1 << ": ";
    cin >> mas[i]; // �������� �������� ������
    InputArray(mas, size, i + 1); // ����������� ������ ��� ���������� ��������
}

// ���������� ������� ��� ��������� �������� ������
void OutputArray(int mas[], int size, int i = 0) {
    if (i == size) return; // ������� �������

    cout << mas[i] << " "; // ��������� �������� ������
    OutputArray(mas, size, i + 1); // ����������� ������ ��� ���������� ��������
}

int main() {
    const int SIZE = 5;
    int a[SIZE];

    // ������ ���������� ������� ��� �������� ������
    InputArray(a, SIZE);

    cout << "mas: ";
    // ������ ���������� ������� ��� ��������� ������
    OutputArray(a, SIZE);
    cout << endl;

    return 0;
}
