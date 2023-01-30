#include <iostream>
#include <ctime>

using namespace std;

void ar(int** arr, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 90 + 10;
        }
    }

    cout << endl;

}

void matrix(int** arr, int n) {
    cout << "matritsa: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
}

void sum(int** arr, int n) {
    int sum = 0;
    int i = (n - 1);
    for (int j = 0; j < n; j++)
    {
        sum += arr[i][j];
        i--;
    }
    std::cout << "Summa elementov pobochnoy diagolali: " << sum;

    cout << endl;
}


int main()
{
    int n;

    std::cout << "Vvedite kolichestvo strok i stolbtsov: ";
    std::cin >> n;

    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    ar(arr, n);

    matrix(arr, n);

    sum(arr, n);

    delete[]arr;
    return 0;
}