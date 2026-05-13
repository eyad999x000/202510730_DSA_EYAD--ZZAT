#include <iostream>
#include <string>
using namespace std;

int binarySearch(string names[], int ages[], int size, string key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (names[mid] == key)
        {
            return mid;
        }
        else if (names[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    const int size = 5;

    // Names must be sorted for Binary Search
    string names[size] = {"Ahmed", "Ali", "Lina", "Mona", "Yousef"};
    int ages[size] = {25, 30, 18, 40, 20};

    string key;

    cout << "Enter name to search: ";
    cin >> key;

    int result = binarySearch(names, ages, size, key);

    if (result != -1)
    {
        cout << names[result] << " was found and is aged "
             << ages[result] << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }

    return 0;
}
