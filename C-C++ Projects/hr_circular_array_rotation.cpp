#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;

void rotate(long rot_num,long array[],long array_size ){
    for (int j = 0; j < rot_num; j++) {
        long temp = array[array_size-1];
        for(int k=1; k < array_size ; k++){
            array[array_size-k]=array[array_size-k-1];
        }
        array[0]=temp;
    }
}


int main() {

    long n,k,q;
    //n = array size ;;; k = rotate number ;;; q = querrie number
    long arr_standart[n];
    long arr_querie[q];

    cin >>n>>k>>q;

    for (int i = 0; i < n; i++) {
        cin >> arr_standart[i];
    }

    rotate(k,arr_standart,n);

    for (int t = 0; t < q; t++) {
        cin >> arr_querie[t];
    }

    for (int p = 0; p < q; p++) {
        cout << arr_standart[arr_querie[p]];
        cout << endl;
    }

    return 0;
}
