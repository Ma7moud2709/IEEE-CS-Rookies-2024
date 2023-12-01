#include <iostream>
using namespace std;

int main()
{
    int testCases,sizeOfArr, numOfElements;

    cin >> testCases;

    while(testCases--)
    {
        int smallest, result;

        cin >> sizeOfArr;
        int arr[sizeOfArr];

        for(int i = 0; i <sizeOfArr; i++)
        {
            cin >> arr[i];
        }


        for(int i = 1; i <= sizeOfArr; i++)
        {
            for(int j = i+1; j <= sizeOfArr; j++ )
            {
                result = arr[i-1] + arr[j-1] + j - i;

                if(i == 1 && j == 2)
                {
                    smallest = result;
                    continue;
                }

                smallest = min(smallest, result);

            }

        }
        cout << smallest << endl;


    }
    return 0;

}
