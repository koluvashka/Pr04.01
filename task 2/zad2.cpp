#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

void accessIvalidMemory(){
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
        accessIvalidMemory();
    } catch (const out_of_range& 0) {
        cout << 0.what() << endl;
    }
    Factorial(1);
    cout << endl;
    return 0;
}