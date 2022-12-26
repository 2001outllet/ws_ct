#include <iostream>
using namespace std;

int main(void) {
    int num;
    cin >> num;
    int* arr = new int[num];

    for (int i = 0; i < num; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << endl;

    }

    
} 