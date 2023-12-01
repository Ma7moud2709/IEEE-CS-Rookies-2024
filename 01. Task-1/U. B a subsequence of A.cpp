#include <iostream>

using namespace std;

int main()
{
    long long size,subSize; //Size of two arrays   10^9
    cin >> size >> subSize;
    long long arr[size]; //10^9
    for (int i = 0; i< size; i++)
    {
        cin >> arr[i];
    }
    long long subArr[subSize]; //may be equal to arr
    for(int i = 0; i < subSize; i++){
        cin >> subArr[i];
    }

    int counter = 0, subCounter = 0;

    for (int i = 0; i < size; i++){
        if (subArr[subCounter] == arr[i]){
            counter++;
            subCounter++;
        }
    }
    if(counter == subSize){ //Counter == N --> Founded N times --> N times is the size of the subArray :)
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
