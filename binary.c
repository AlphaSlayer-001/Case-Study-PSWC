#include "headers.h"

std *binary_search(std *arr[], int n, int r) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid]->rno == r)
            return arr[mid];
        if (arr[mid]->rno < r)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return NULL;
}