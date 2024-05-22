#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int totalBooks = 10;
    int singleBooks = 7; // Кількість окремих книжок, не враховуючи тритомник
    int volumesInSeries = 3;

    // Перестановки всіх об'єктів (7 книжок + 1 тритомник)
    int arrangements = factorial(singleBooks + 1); // 8!

    // Перестановки всередині тритомника
    int seriesPermutations = factorial(volumesInSeries); // 3!

    // Загальна кількість способів
    int totalWays = arrangements * seriesPermutations;

    cout << "Загальна кількість способів: " << totalWays << endl;

    return 0;
}
