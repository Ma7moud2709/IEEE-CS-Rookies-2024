#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while(testCases--)
    {
        int size;
        cin >> size;
        int arr[size];

        for (int i = 0 ; i < size; i++)
        {
            cin >> arr[i];
        }


        //any element form array is max subarray for itself..
        for(int i = 0; i<size; i++)
        {
            cout << arr[i] << " ";
        }

        //Print The max element from other subarray..

        for(int i = 0; i < size; i++)
        {
                int result = arr[i];
            for(int j = i+1; j < size; j++ )
            {
                result = max(arr[j],result);
                cout << result << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
