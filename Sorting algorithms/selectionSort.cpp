#include <iostream>

using namespace std;

int main()
{
    int array[] = {3, 8, 13, 1, 15, 2};
    int n = 6, aux, i = 0, pos;

    while (i < n)
    {
        aux = array[i];

        for (int j = i + 1; j < n; j++)
        {
            if(aux > array[j])
            {
                pos = j;
                aux = array[j];
            }
        }

        array[pos] = array[i];
        array[i] = aux;
        i++;
        
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << array[i] << ", ";
    }
    cout << array[n - 1] << endl;

    return 0;
}