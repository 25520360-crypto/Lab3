#include "cArray.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
using namespace std;

cArray::cArray() : n(0) {}
cArray::cArray(int n) : n(n), arr(n) {}
cArray::~cArray() {}

void cArray::taoMangNgauNhien(int sz, int minVal, int maxVal) {
    srand((unsigned)time(0));
    n = sz; arr.resize(n);
    for (int i = 0; i < n; i++)
        arr[i] = minVal + rand() % (maxVal - minVal + 1);
}

void cArray::xuat() {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int cArray::demSoLanXuatHien(int x) {
    int count = 0;
    for (int v : arr) if (v == x) count++;
    return count;
}

bool cArray::kiemTraTangDan() {
    for (int i = 0; i < n-1; i++)
        if (arr[i] > arr[i+1]) return false;
    return true;
}

int cArray::timPhanLeLonNhat() {
    int result = INT_MIN;
    for (int v : arr)
        if (v % 2 != 0 && v > result) result = v;
    return (result == INT_MIN) ? -1 : result;
}

bool isSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int cArray::timSoNguyenToLonNhat() {
    int result = -1;
    for (int v : arr)
        if (isSoNguyenTo(v) && v > result) result = v;
    return result;
}

void cArray::sapXepTangDan() {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
}

void cArray::sapXepGiamDan() {
    for (int i = 0; i < n-1; i++) {
        int maxIdx = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] > arr[maxIdx]) maxIdx = j;
        swap(arr[i], arr[maxIdx]);
    }
}
