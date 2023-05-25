#include <iostream>
using namespace std;
int main()
{
    int m, n, a[100][100], b[100][100], sum[100][100], i, j;
    cout << "Enter number of rows (between 1 and 100): ";
    cin >> m;
    cout << "Enter number of columns (between 1 and 100): ";
    cin >> n;
    cout << endl << "Enter elements of 1st matrix: " << endl;
    for(i = 0; i < m; ++i)
       for(j = 0; j < n; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < m; ++i)
       for(j = 0; j < n; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }
    for(i = 0; i < m; ++i)
        for(j = 0; j < n; ++j)
            sum[i][j] = a[i][j] + b[i][j];
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < m; ++i)
        for(j = 0; j < n; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == n - 1)
                cout << endl;
        }

    return 0;
}