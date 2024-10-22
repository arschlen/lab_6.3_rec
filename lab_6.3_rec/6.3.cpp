#include <iostream>
using namespace std;

// Рекурсивна функція для введення елементів масиву
void InputArray(int mas[], int size, int i = 0) {
    if (i == size) return; // Базовий випадок

    cout << "E " << i + 1 << ": ";
    cin >> mas[i]; // Введення елемента масиву
    InputArray(mas, size, i + 1); // Рекурсивний виклик для наступного елемента
}

// Рекурсивна функція для виведення елементів масиву
void OutputArray(int mas[], int size, int i = 0) {
    if (i == size) return; // Базовий випадок

    cout << mas[i] << " "; // Виведення елемента масиву
    OutputArray(mas, size, i + 1); // Рекурсивний виклик для наступного елемента
}

int main() {
    const int SIZE = 5;
    int a[SIZE];

    // Виклик рекурсивної функції для введення масиву
    InputArray(a, SIZE);

    cout << "mas: ";
    // Виклик рекурсивної функції для виведення масиву
    OutputArray(a, SIZE);
    cout << endl;

    return 0;
}
