/* Linked Lists

This program is a simple integer set problem. You need to read in two sets of integers, and display the union, intersection, and difference of the two sets. You are going to store the sets in linked lists. The definition of a set for this problem is : ordered with no duplicate values.
The List type for this problem must be templated. I have provided the main program for you. Note that I having you define some operators on the List type.

The main program
here is a sample run from mine

Here are the honors requirements.

This program is worth 100 points.
It is due on November 29th/30th.

The Goals

write a linked list
write templated code
solve a simple math problem
*/
#include<iostream>
using namespace std;
#include"list.h"

int main()
{
    List<int> a;
    List<int> b;
    char ch;
    int num;

    // the first line is set a
    while ( cin.get(ch) && ch != '\n' )
    {
        if ( isdigit ( ch ) )
        {
            cin.putback(ch);
            cin >> num;
            a += num;
        }
    }
    cout << "set a = " << a << endl;
    // the second line is set b
    while ( cin.get(ch) && ch != '\n' )
    {
        if ( isdigit ( ch ) )
        {
            cin.putback(ch);
            cin >> num;
            b += num;
        }
    }
    cout << "set b = " << b << endl;

    // get the union
    List<int> result = ( a | b );
    cout << "a | b = " << result << endl;

    // get the intersection
    result = ( a & b );
    cout << "a & b = " << result << endl;

    // get the difference
    result = ( a - b );
    cout << "a - b = " << result << endl;
    result = ( b - a );
    cout << "b - a = " << result << endl;

    return 0;
}

