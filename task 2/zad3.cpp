#include <iostream>

using namespace std;

int main() {
    int limit = 100000; 
    int count = 0;      

    cout << "Ищу простые числа до " << limit << "..." << endl;

    for (int i = 2; i <= limit; i++) {
        bool isPrime = true;

       
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
              
            }
        }

        if (isPrime == true) {
            count = count + 1;
        }
        
        // Показываем прогресс каждые 5000 чисел
        if (i % 5000 == 0) {
            cout << "Обработано: " << i << endl;
        }
    }

    cout << "Всего найдено простых чисел: " << count << endl;

    return 0;
}