#include <bits/stdc++.h>
using namespace std;
class FOURxFOUR
{
public:
    vector<vector<int>> vtr{
        {1, 2, 3, 0},
        {0, 4, 0, 0},
        {0, 1, 4, 0},
        {4, 3, 0, 0}};
};

class NINExNINE
{
public:
    vector<vector<int>> vtr{
        {1, 0, 0, 4, 0, 6, 0, 8, 0},
        {7, 0, 9, 1, 2, 3, 4, 5, 6},
        {4, 0, 0, 0, 0, 9, 1, 0, 3},
        {0, 0, 0, 8, 0, 5, 0, 6, 0},
        {0, 9, 0, 3, 0, 2, 8, 0, 5},
        {8, 4, 5, 0, 9, 0, 3, 1, 2},
        {0, 3, 1, 5, 7, 4, 6, 9, 8},
        {9, 0, 8, 0, 3, 0, 5, 0, 4},
        {0, 7, 0, 9, 0, 8, 0, 3, 0}};
};

class SIXTEENxSIXTEEN
{
public:
    vector<vector<int>> vtr{
        {0, 0, 2, 0, 4, 6, 0, 8, 9, 0, 11, 0, 13, 0, 0, 0},
        {0, 0, 0, 12, 0, 1, 2, 0, 13, 0, 15, 0, 0, 0, 0, 0},
        {0, 6, 0, 8, 13, 0, 15, 0, 5, 0, 2, 0, 9, 0, 11, 12},
        {13, 14, 0, 16, 0, 0, 11, 0, 4, 0, 0, 0, 0, 1, 2, 3},
        {2, 0, 3, 0, 0, 4, 0, 6, 0, 9, 0, 10, 15, 0, 16, 13},
        {11, 9, 14, 10, 2, 5, 3, 0, 0, 0, 0, 0, 0, 4, 8, 6},
        {7, 4, 0, 6, 0, 0, 16, 0, 2, 5, 3, 1, 11, 9, 14, 10},
        {0, 12, 0, 13, 0, 9, 0, 0, 7, 4, 8, 0, 2, 0, 3, 1},
        {1, 3, 0, 2, 0, 8, 0, 7, 0, 0, 9, 0, 0, 0, 13, 14},
        {10, 0, 9, 0, 1, 3, 0, 2, 0, 16, 0, 0, 6, 0, 4, 7},
        {0, 0, 0, 7, 12, 0, 13, 14, 1, 0, 5, 2, 0, 15, 9, 11},
        {0, 0, 0, 14, 10, 0, 9, 11, 0, 8, 0, 7, 0, 0, 0, 2},
        {3, 2, 0, 0, 0, 0, 6, 4, 0, 11, 10, 0, 0, 0, 12, 15},
        {14, 0, 0, 0, 3, 2, 1, 0, 16, 0, 12, 0, 8, 0, 6, 4},
        {0, 0, 0, 4, 0, 13, 0, 15, 0, 2, 0, 5, 0, 11, 10, 9},
        {0, 0, 0, 0, 0, 11, 0, 9, 0, 7,0, 4, 0, 0, 1, 0}
    };
};

class TWENTYFIVExTWENTYFIVE
{
public:
    vector<vector<int>> vtr{
        {0 ,1, 2, 3, 4, 0, 6, 7, 0, 24, 0, 10, 11, 12, 0, 14, 10, 0, 17, 0, 10, 0, 0, 22, 23},
        {0, 24, 10, 11, 12, 0, 0, 0, 10, 23, 10, 17, 0, 0, 22, 0, 6, 7, 0, 0, 1, 2, 3, 4, 14},
        {17, 0, 0, 22, 10, 1, 2, 3, 4, 0, 0, 14, 0, 0, 24, 10, 11, 12, 0, 23, 0, 6, 7, 0, 10},
        {0, 6, 7, 0, 0, 14, 10, 17, 0, 0, 1, 2, 3, 4, 23, 0, 10, 22, 0, 24, 0, 10, 11, 12, 0},
        {14, 10, 0, 23, 0, 10, 11, 12, 0, 22, 0, 6, 7, 0, 10, 1, 2, 3, 4, 0, 0, 0, 17, 0, 24},
        {4, 0, 10, 12, 0, 0, 0, 2, 0, 1, 0, 10, 22, 0, 10, 3, 14, 11, 23, 6, 24, 7, 0, 17, 0},
        {24, 3, 1, 0, 11, 0, 14, 0, 23, 10, 7, 0, 10, 6, 0, 0, 0, 17, 10, 12, 4, 0, 22, 2, 0},
        {2, 0, 17, 10, 10, 0, 22, 0, 24, 0, 23, 0, 12, 14, 1, 4, 7, 0, 0, 0, 3, 11, 0, 10, 6},
        {7, 14, 0, 6, 0, 3, 4, 10, 10, 17, 24, 11, 0, 2, 0, 0, 0, 10, 22, 1, 0, 12, 23, 0, 0},
        {0, 0, 22, 0, 23, 7, 12, 11, 6, 0, 3, 4, 17, 0, 0, 24, 0, 10, 2, 0, 10, 0, 14, 10, 1},
        {0, 0, 0, 1, 3, 10, 0, 23, 0, 2, 14, 0, 0, 11, 7, 17, 0, 10, 10, 4, 22, 24, 6, 0, 12},
        {23, 12, 24, 2, 6, 0, 10, 0, 7, 0, 22, 0, 10, 10, 17, 0, 1, 14, 3, 0, 0, 0, 0, 11, 4},
        {10, 0, 14, 4, 7, 24, 17, 6, 0, 11, 0, 10, 0, 23, 2, 22, 12, 0, 0, 0, 0, 1, 0, 3, 10},
        {0, 10, 11, 17, 0, 4, 1, 22, 3, 0, 0, 24, 0, 0, 12, 23, 0, 0, 6, 2, 14, 10, 0, 7, 10},
        {22, 0, 0, 10, 0, 0, 0, 10, 12, 14, 4, 1, 0, 3, 6, 10, 24, 0, 7, 11, 17, 0, 0, 23, 2},
        {3, 7, 4, 0, 1, 6, 23, 0, 11, 12, 10, 0, 10, 10, 0, 0, 22, 0, 0, 14, 2, 17, 24, 0, 0},
        {0, 17, 0, 24, 2, 0, 0, 10, 0, 10, 0, 7, 23, 22, 3, 6, 4, 1, 0, 10, 0, 0, 12, 14, 11},
        {10, 0, 0, 0, 10, 22, 24, 0, 17, 3, 6, 12, 14, 0, 0, 2, 23, 0, 11, 10, 7, 4, 1, 0, 0},
        {12, 0, 23, 14, 22, 2, 7, 1, 0, 4, 17, 0, 24, 0, 11, 0, 10, 0, 0, 3, 6, 10, 10, 0, 0},
        {6, 11, 10, 0, 0, 0, 0, 0, 14, 10, 2, 0, 1, 0, 4, 7, 0, 24, 12, 17, 23, 22, 10, 0, 3},
        {1, 2, 3, 0, 0, 11, 10, 4, 0, 0, 0, 22, 6, 17, 10, 0, 0, 23, 0, 0, 12, 14, 10, 24, 7},
        {0, 4, 12, 7, 24, 17, 3, 14, 22, 0, 0, 23, 0, 10, 0, 11, 0, 2, 1, 10, 10, 0, 0, 6, 0},
        {11, 10, 0, 0, 14, 12, 0, 24, 2, 6, 10, 3, 4, 7, 0, 0, 0, 0, 10, 22, 0, 23, 0, 1, 17},
        {0, 23, 6, 10, 17, 10, 0, 0, 1, 7, 11, 0, 0, 24, 0, 12, 3, 4, 14, 0, 0, 0, 2, 10, 22},
        {10, 22, 0, 0, 0, 23, 0, 0, 10, 0, 12, 0, 2, 1, 14, 10, 17, 6, 24, 7, 11, 3, 4, 0, 0}

    };
};

bool isSafe(int row, int col, vector<vector<int>> &sudoku, int val, int size)
{
    size = sqrt(size);
    for (int i = 0; i < sudoku[0].size(); i++)
    {
        if (sudoku[row][i] == val)
            return false;
        if (sudoku[i][col] == val)
            return false;
        if (sudoku[size * (row / size) + i / size][size * (col / size) + i % size] == val)
        {
            return false;
        }
    }
    return true;
}

bool solveSudoku(vector<vector<int>> &sudoku, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (sudoku[i][j] == 0)
            {
                for (int val = 1; val <= size; val++)
                {
                    if (isSafe(i, j, sudoku, val, size))
                    {
                        sudoku[i][j] = val;
                        bool next = solveSudoku(sudoku, size);
                        if (next)
                        {
                            return true;
                        }
                        else
                        {
                            sudoku[i][j] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int size;
    vector<vector<int>> sudoku;
    cout << "========================================================================="
         << endl;

    cout << "------------------------------|| MINI PROJECT ||-------------------------"
         << endl;

    cout << "========================================================================="
         << endl
         << endl;

    cout << "                                                            ADARSH (CS_1)"
         << endl;

    cout << "                                                       ARYAN GUPTA (CS_1)"
         << endl;

    cout << "                                                    RISHABH SANGAL (CS_2)"
         << endl
         << endl;
    ;
    cout << "================================|| SUDOKU ||============================="
         << endl;
    char check;
    cout << "DO YOU WANT TO SOLVE SUDOKU" << endl;

    cout << "press Y (TO YES...)" << endl;

    cout << "press N (TO NO...)" << endl;

    cin >> check;

    if (check == 'y')
    {
        int input;
        cout << "PRESS 1 FOR CUSTOM INPUT"
             << endl;
        cout << "PRESS 2 FOR USER INPUT"
             << endl;
        cin >> input;

        if (input == 1)
        {
            cout << "TELL ME SIZE OF CUSTOM SUDOKU"
                 << endl;
            cout << "\tSUCH AS  4 -> 4 X 4 SUDOKU"
                 << endl;
            cout << "\tSUCH AS  9 -> 9 X 9 SUDOKU"
                 << endl;
            cout << "\tSUCH AS  16 -> 16 X 16 SUDOKU"
                 << endl;
            cout << "\tSUCH AS  25 -> 25 X 25 SUDOKU"
                 << endl;
            cin >> size;
            if (size == 4)
            {
                cout << "========================================================================="
                     << endl;
                cout << "CUSTOM INPUT OF 4X4 SUDOKU"
                     << endl;
                cout << "========================================================================="
                     << endl;
                FOURxFOUR var;
                for (int i = 0; i < var.vtr.size(); i++)
                {
                    for (int j = 0; j < var.vtr[i].size(); j++)
                    {
                        cout << var.vtr[i][j] << " ";
                    }
                    cout << endl;
                }

                sudoku = var.vtr;
                if (solveSudoku(sudoku, size))
                {
                cout << "========================================================================="
                     << endl;
                    cout << endl
                         << "SOLUTION OF SUDOKU"
                         << endl;
                cout << "========================================================================="
                     << endl;
                    for (int i = 0; i < sudoku.size(); i++)
                    {
                        for (int j = 0; j < sudoku[i].size(); j++)
                        {
                            cout << sudoku[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "NO SOLUTION!!!" << endl;
                }
            }
            else if (size == 9)
            {
                NINExNINE var;
                cout << "========================================================================="
                     << endl;
                cout << "CUSTOM INPUT OF 9X9 SUDOKU"
                     << endl;
                cout << "========================================================================="
                     << endl;
                for (int i = 0; i < var.vtr.size(); i++)
                {
                    for (int j = 0; j < var.vtr[i].size(); j++)
                    {
                        cout << var.vtr[i][j] <<" ";
                    }
                    cout << endl;
                }
                sudoku = var.vtr;
                if (solveSudoku(sudoku, size))
                {
                cout << "========================================================================="
                     << endl;
                    cout << endl
                         << "SOLUTION OF SUDOKU"
                         << endl;
                cout << "========================================================================="
                     << endl;
                    for (int i = 0; i < sudoku.size(); i++)
                    {
                        for (int j = 0; j < sudoku[i].size(); j++)
                        {
                            cout << sudoku[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "NO SOLUTION!!!" << endl;
                }
            }
            else if (size == 16)
            {
                cout << "========================================================================="
                     << endl;
                cout << "CUSTOM INPUT OF 16X16 SUDOKU"
                     << endl;
                cout << "========================================================================="
                     << endl;
                SIXTEENxSIXTEEN var;
                for (int i = 0; i < var.vtr.size(); i++)
                {
                    for (int j = 0; j < var.vtr[i].size(); j++)
                    {
                        cout << var.vtr[i][j] << " ";
                    }
                    cout << endl;
                }
                sudoku = var.vtr;
                if (solveSudoku(sudoku, size))
                {
                cout << "========================================================================="
                     << endl;
                    cout << endl
                         << "SOLUTION OF SUDOKU"
                         << endl;
                cout << "========================================================================="
                     << endl;
                    for (int i = 0; i < sudoku.size(); i++)
                    {
                        for (int j = 0; j < sudoku[i].size(); j++)
                        {
                            cout << sudoku[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "NO SOLUTION!!!" << endl;
                }
            }
            else if (size == 25)
            {
                TWENTYFIVExTWENTYFIVE var;
                cout << "========================================================================="
                     << endl;
                cout << "CUSTOM INPUT OF 25X25 SUDOKU"
                     << endl;
                cout << "========================================================================="
                     << endl;
                for (int i = 0; i < var.vtr.size(); i++)
                {
                    for (int j = 0; j < var.vtr[i].size(); j++)
                    {
                        cout << var.vtr[i][j] << " ";
                    }
                    cout << endl;
                }

                sudoku = var.vtr;
                if (solveSudoku(sudoku, size))
                {
                cout << "========================================================================="
                     << endl;
                    cout << endl
                         << "SOLUTION OF SUDOKU"
                         << endl;
                cout << "========================================================================="
                     << endl;
                    for (int i = 0; i < sudoku.size(); i++)
                    {
                        for (int j = 0; j < sudoku[i].size(); j++)
                        {
                            cout << sudoku[i][j] << " ";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    cout << "NO SOLUTION!!!" << endl;
                }
            }
            else
            {
                cout << "INVALID INPUT!!!!";
            }
        }
        else if (input == 2)
        {
            cout << "SIZE OF SUDOKU";
            cin >> size;
            cout << "INPUT SUDOKU VALUES"
                 << endl;
            for (int i = 0; i < size * size; i++)
            {
                vector<int> vtr;
                for (int i = 0; i < size * size; i++)
                {
                    int val;
                    cin >> val;
                    vtr.push_back(val);
                }
                sudoku.push_back(vtr);
            }
            if (solveSudoku(sudoku, size))
            {
                cout << "========================================================================="
                     << endl;
                cout << endl
                     << "SOLUTION OF SUDOKU"
                     << endl;
                cout << "========================================================================="
                     << endl;
                for (int i = 0; i < sudoku.size(); i++)
                {
                    for (int j = 0; j < sudoku[i].size(); j++)
                    {
                        cout << sudoku[i][j] << " ";
                    }
                    cout << endl;
                }
            }
            else
            {
                cout << "NO SOLUTION!!!" << endl;
            }
        }
    }
    else if (check == 'n')
    {
        cout << "\n\n\nTHANKYOU......HAVE A NICE DAY :) " << endl;
        return 0;
    }
    return 0;
}