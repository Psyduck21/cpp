#include <iostream>

using namespace std;
// patterns are referred from tuf (take u forward) website
/*
pattern 1
*****
*****
*****
*****
*****
*/
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
    pattern 2

*
**
***
****
*****

*/
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
    pattern 3
1
12
123
1234
12345

*/
void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
/*
    pattern 4
    1
    22
    333
    4444
    55555

*/
void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}
/*
    pattern 5
    *****
    ****
    ***
    **
    *
*/
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
    Pattern 6
    12345
    1234
    123
    12
    1

*/
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
/*
    Pattern 7

    *
   ***
  *****
 *******
*********
*/

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
/*
    Pattern 8

*********
 *******
  *****
   ***
    *

*/
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
    pattern 9
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

/*
    Pattern 10

*
**
***
****
*****
****
***
**
*

*/

void pattern10(int n)
{
    for (int i = 0; i <= 2 * n - 1; i++)
    {
        int cond = (i > n) ? 2 * n - i : i;
        for (int j = 0; j < cond; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
    pattern 11
1
01
101
0101
10101

*/

void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        int start = (i % 2 == 0) ? 1 : 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
/*
    pattern 12
1        1
12      21
123    321
1234  4321
1234554321

*/
void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int space = 0; space < 2 * (n - i) - 2; space++)
        {
            cout << " ";
        }
        for (int k = i; k >= 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
    pattern 13
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

void pattern13(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }
}
/*
    pattern 14
A
AB
ABC
ABCD
ABCDE

*/
void pattern14(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
}

/*
    pattern 15
ABCDE
ABCD
ABC
AB
A

*/
void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
}

/*
    pattern 16
A
BB
CCC
DDDD
EEEEE

*/

void pattern16(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + i);
        }
        cout << endl;
    }
}
/*
    Pattern 17
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/
void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';

        for (int space = 0; space < n - i - 1; space++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            int breakpoint = (2 * i + 1) / 2;
            cout << ch;
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
/*
    Pattern 18
E
DE
CDE
BCDE
ABCDE
*/
void pattern18(int n)
{
    int t = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j <= n; j++)
        {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
}
/*
    pattern 19
1234554321
1234  4321
123    321
12      21
1        1

*/
void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << "*";
        }
        for (int space = 0; space < 2 * (i); space++)
        {
            cout << " ";
        }
        for (int k = n - i; k > 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
    pattern 20
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

void pattern20(int n)
{
    pattern19(n);
    pattern12(n);
}
/*
    pattern 21
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
void pattern21(int n)

{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;

        if (i > n)
            stars = 2 * n - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}
/*
    pattern 22
*****
*   *
*   *
*   *
*****
*/

void pattern22(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
/*
    pattern23
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/

void pattern23(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int bottom = (2 * n - 2) - i;
            int left = j;
            int right = (2 * n - 2) - j;
            cout << n - min(min(top, bottom), min(left, right)) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    pattern23(n);
    return 0;
}