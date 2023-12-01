#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int minElement= arr[0], maxElement = arr[0],
        minIndex, maxIndex;


    //checking
    for(int i = 1; i < size; i++)
    {
        if(minElement > arr[i])
        {
            minElement = arr[i];
            minIndex = i;
        }

        if(maxElement < arr[i])
        {
            maxElement = arr[i];
            maxIndex = i;
        }
    }


    arr[minIndex] = maxElement;
    arr[maxIndex] = minElement;

    //printing new array
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";

    }

    return 0;
}
