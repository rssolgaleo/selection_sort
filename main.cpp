#include <iostream>
using namespace std;

int swap(int& a, int& b) {
    int key = a;
    a = b;
    b = key;
}

int findSmallest(int arr[], int start, int size) {
    int smallest_index = start;
    for (int i = start + 1; i < size; ++i) {
        if (arr [i] < arr[smallest_index]) {
            smallest_index = i;
        }
    }
    return smallest_index;
}

int* selectionSort(int arr[], int size) {
    int* newArr = new int[size];
    for (int i = 0; i < size; ++i) {
        int smallestIndex = findSmallest(arr, i, size);
        swap(arr[i], arr[smallestIndex]);
        newArr[i] = arr[i];
    }
    return newArr;
}

int main() {
    int mas[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(mas)/sizeof(mas[0]);

    int* sorted_mas = selectionSort(mas, size);
    cout << "sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << sorted_mas[i] << ' ';
    }
    return 0;
}
