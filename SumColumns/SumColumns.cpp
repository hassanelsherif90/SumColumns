#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>

using namespace std;

void FillArray();

int RandNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void FillArrayMAtrix(int Arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Arr[i][j] = RandNumber(1, 100);
        }
    }
}

void PrintArrayMAtrix(int Arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(4) << Arr[i][j] << "    ";
        }
        cout << "\n";
    }
}
int SumCols(int Arr[3][3], short ColNumber, short Row)
{
    int Sum = 0;
    for (short i = 0; i < Row; i++)
    {
        Sum += Arr[i][ColNumber];
    }
    return Sum;
}

void PrintEachRow(int Arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Cols; i++)
    {
        cout << "Cols " << i + 1 << " Sum = " << SumCols(Arr, i, Rows) << endl;
    }
}



int main()
{
    srand((unsigned)time(NULL));
    int Arr[3][3], Arr2[3];

    FillArrayMAtrix(Arr, 3, 3);
    PrintArrayMAtrix(Arr, 3, 3);
    PrintEachRow(Arr, 3, 3);
    system("pause>0");
    cout << "\n\n\n\n";
    return 0;
}