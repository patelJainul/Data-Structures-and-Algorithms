#include <iostream>
using namespace std;

void square(char symbol)
{
    int numberOfRows;
    cout << "Enter a number of rows: ";
    cin >> numberOfRows;

    for (int row = 0; row < numberOfRows; row++)
    {
        for (int col = 0; col < numberOfRows; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void triangle(char symbol)
{
    int numberOfRows;
    cout << "Enter a number of rows: ";
    cin >> numberOfRows;

    for (int row = 0; row < numberOfRows; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << symbol << " ";
        }
        cout << endl;
    }
}

void printRowNumber()
{
    int numberOfRows;
    cout << "Enter a number of rows: ";
    cin >> numberOfRows;

    for (int row = 1; row < numberOfRows; row++)
    {
        for (int col = 1; col <= numberOfRows; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
}

void printColNumber()
{
    int numberOfRows;
    cout << "Enter a number of rows: ";
    cin >> numberOfRows;

    for (int row = 1; row < numberOfRows; row++)
    {
        for (int col = 1; col <= numberOfRows; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

void printRowNumberReverse()
{
    int numberOfRows;
    cout << "Enter a number of rows: ";
    cin >> numberOfRows;

    for (int row = numberOfRows; row > 0; row--)
    {
        for (int col = 1; col < numberOfRows; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }
}

void printColNumberReverse()
{
    int numberOfRows;
    cout << "Enter a number of rows: ";
    cin >> numberOfRows;

    for (int row = numberOfRows; row > 0; row--)
    {
        for (int col = numberOfRows; col > 0; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

void printAlphabets()
{
    int numberOfRows;
    cout << "Enter a number of rows: ";
    cin >> numberOfRows;

    for (int row = 0; row < numberOfRows; row++)
    {
        for (int col = 0; col < numberOfRows; col++)
        {
            // row wise characters
            cout << (char)(row + 'a') << " ";

            // col wise characters
            // cout << (char)(col + 'a') << " ";
        }
        cout << endl;
    }
}

void printNaturalNumbers()
{
    int numberOfRows;
    cout << "Enter a number of rows: ";
    cin >> numberOfRows;

    // int number = 0;
    for (int row = 0; row < numberOfRows; row++)
    {
        for (int col = 1; col <= numberOfRows; col++)
        {
            // number++;
            cout << row * numberOfRows + col << " ";
        }
        cout << endl;
    }
}

void snackPattern()
{
    int numberOfCols;
    cout << "Enter a number of columns: ";
    cin >> numberOfCols;

    for (int row = 1; row <= 3; row++)
    {
        for (int col = 1; col <= numberOfCols; col++)
        {
            if ((row + col) % 4 == 0)
            {
                cout << "* ";
            }
            else if (row == 2 && col % 4 == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void o1Pattern()
{
    int numberOfRows;
    cout << "Enter a number of columns: ";
    cin >> numberOfRows;

    for (int row = 1; row <= numberOfRows; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if ((row + col) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    // triangle("*");
    // printColNumber();
    // printAlphabets();
    // printNaturalNumbers();
    // snackPattern();
    // o1Pattern();
    square('*');
    return 0;
}