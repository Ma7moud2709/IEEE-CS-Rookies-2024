#include <iostream>
using namespace std;


string checkCode(int num1, int num2, string S)
{
    //checkSize
    if(S.size() != num1+num2+1)
    {

        return "No";
    }

    //Check containing "-"

    if(S[num1] != '-')
    {

        return "No";
    }

    //Check Numbers Using ASCII
    int digits = 0;
    for(int i = 0; i<S.size(); i++)
    {
        if(S[i] >= 48 && S[i] <=57 && i != num1 /* position of '-' */ )
        {
            digits++;
        }
    }
    if(digits == num1+num2)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}


int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    string S;
    cin >> S;
    cout << checkCode(num1, num2, S);

    return 0;
}
