#include <iostream>

using namespace std;

int main()
{
    int array[] = {3, 8, 13, 1, 15, 2};
    int n = 6, temp;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << array[i] << ", ";
    }
    cout << array[n - 1] << endl;

    return 0;
}