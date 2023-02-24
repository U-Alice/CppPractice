#include <iostream>
using namespace std;

int binarySearch(int array[], int n, int key, int start, int end)
{
    if (end >= 1)
    {
        int mid = (start + end) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            return binarySearch(array, n, key, 0, mid - 1);
        }
        else
        {
            return binarySearch(array, n, key, mid + 1, end);
        }
    }
    return -1;
}

int main()
{
    int array[6] = {0, 1, 2, 3, 4, 5};
    cout << "Found: " << binarySearch(array, 6, 3, 0, 6);
    return 0;
}