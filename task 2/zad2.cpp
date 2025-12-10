#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

void accessInvalidMemory(){
    vector<int> arr(10);
    cout << arr.at(20) << endl;
}

int Factorial(int n){
    if (n<=1)
    return 1;
    return n * Factorial(n-1);
}
int main(){
    try{
        accessInvalidMemory();
    } catch (const out_of_range& e) {
        cout << e.what() << endl;
    }
    Factorial(1);
    cout << endl;
    return 0;
}