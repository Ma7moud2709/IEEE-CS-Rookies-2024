#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while(testCases--)
    {
        int size, counter = 0;
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }


        for(int i = 0; i < size; i++)
        {
            counter++;
            for(int j = i+1; j < size; j++)
            {

                //checking non-decreasing.

                if(arr[j] >= arr[j-1])
                {
                    counter++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}
