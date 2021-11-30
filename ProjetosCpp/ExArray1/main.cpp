#include <iostream>

using namespace std;

int main()
{
    int arr_size, n, n1;
    cin >> arr_size;

    int arr[arr_size];

    for(int n = 0; n < arr_size; n++){
        cin >> arr[n];
    }

    for(int n1 = arr_size - 1; n1 >= 0; n1--) {
        cout << arr[n1] << ' ';
    }


    return 0;
}
