#include <iostream>
#include <clocale>
using namespace std;
int Factorial(int n){
    if (n<=1)
    return 1;
    return n * Factorial(n-1);
}
int main(){
    setlocale(LC_ALL, "Russian");
    int sum = 0;
    for(int i = 1; i <=10; i++){
        sum += i;
        cout << "Текущая сумма" << sum << endl;
    }
    int fastResult = Factorial(5);
    cout << "Факториал 5 равен: " << fastResult << endl;
    return 0;
}