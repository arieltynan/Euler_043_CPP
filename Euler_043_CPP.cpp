// Euler_043_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Find the sum of all 0 to 9 pandigital numbers with this property.
//

#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    long long int total = 0;
    string str("0123456789"); //48 is ASCII offset
    do
    {
        // series of and statements accounting for each condition
        if (str[0] != '0' && (str[3] - 48) % 2 == 0 &&\
            ((str[2] - 48) + (str[3] - 48) + (str[4] - 48)) % 3 == 0 &&\
            (str[5] - 48) % 5 == 0 &&\
            ((100 * (str[4] - 48) + 10 * (str[5] - 48) + (str[6] - 48)) % 7 == 0) &&\
            ((str[5] - 48) - (str[6] - 48) + (str[7] - 48)) % 11 == 0 &&\
            (100 * (str[6] - 48) + 10 * (str[7] - 48) + (str[8] - 48)) % 13 == 0 &&\
            (100 * (str[7] - 48) + 10 * (str[8] - 48) + (str[9] - 48)) % 17 == 0)

        {
            stringstream stream(str);
            long long int x = 0;
            stream >> x;
            total = total + x;
        }
            
    } while (next_permutation(str.begin(), str.end()));

    cout << endl << total;
}

// indexes are d values - 1
// 1:  d1 != 0
// 2:  d4 % 2 == 0 // d4 == 0 or 2 or 4 or 6 or 8
// 3:  (d3 + d4 + d5) % 3 = 0
// 5:  d6 % 5  == 0 (or d6 == 0 or 5)
// 7: (100(d5 - 48) + 10(d6 - 48) + (d7 - 48)) % 7 == 0
// 11: ((d6 - 48) - (d7 - 48) + (d8 - 48)) % 11 == 0
// 13 (100(d7 - 48) + 10(d8 - 48) + (d9 - 48)) % 13 == 0
// 17 (100(d8 - 48) + 10(d9 - 48) + (d10 - 48)) % 17 == 0
