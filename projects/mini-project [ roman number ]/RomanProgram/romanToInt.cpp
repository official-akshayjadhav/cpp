// Program to convert Roman Numerals to Numbers
#include<bits/stdc++.h>
using namespace std;
 
// This function returns value of a Roman symbol
int value(char r)
{
    if (r == 'I' || r == 'i')
        return 1;
    if (r == 'V' || r == 'v')
        return 5;
    if (r == 'X' || r == 'x')
        return 10;
    if (r == 'L' || r == 'l')
        return 50;
    if (r == 'C' || r == 'c')
        return 100;
    if (r == 'D' || r == 'd')
        return 500;
    if (r == 'M' || r == 'm')
        return 1000;
 
    return -1;
}
 
// Returns decimal value of roman numaral
int romanToInt(string &str)
{
    // Initialize result
    int res = 0;
 
    // Traverse given input
    for (int i=0; i<str.length(); i++)
    {
        // Getting value of symbol s[i]
        int s1 = value(str[i]);
 
        if (i+1 < str.length())
        {
            // Getting value of symbol s[i+1]
            int s2 = value(str[i+1]);
 
            // Comparing both values
            if (s1 >= s2)
            {
                // Value of current symbol is greater
                // or equal to the next symbol
                res = res + s1;
            }
            else
            {
                res = res + s2 - s1;
                i++; // Value of current symbol is
                     // less than the next symbol
            }
        }
        else
        {
            res = res + s1;
            i++;
        }
    }
    return res;
}
 
/* Driver Program
int main()
{
    // Considering inputs given are valid
    cout<<"enter roman number : ";
    string str ="";
    cin>>str;
    cout << "Integer form of Roman Numeral is "
         << romanToInt(str) << endl;
 
    return 0;
}*/
