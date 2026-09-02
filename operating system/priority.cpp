#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int bt[10], p[10];
    int i, j, temp;
    int tot = 0, sum1 = 0, sum2 = 0, wt = 0;
    int n = 4;

    cout << "Priority Based Scheduling" << endl;

    cout << "Enter the Burst Time for Processes:\n";
    for (i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << ": ";
        cin >> bt[i];
    }

    cout << "\nEnter the Priority for Processes:\n";
    for (i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << ": ";
        cin >> p[i];
    }

    // Sorting according to Priority
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[i] > p[j]) // Smaller number = Higher Priority
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }

    cout << "\nProcess\tBurst Time\tPriority\n";

    for (i = 0; i < n; i++)
    {
        cout << "P" << i + 1
             << "\t" << bt[i]
             << "\t\t" << p[i]
             << endl;
    }

    cout << "\nProcess\tBT\tTAT\tWT\n";

    for (i = 0; i < n; i++)
    {
        sum1 += bt[i];
        tot += sum1;

        wt = sum1 - bt[i];
        sum2 += wt;

        cout << "P" << i + 1
             << "\t" << bt[i]
             << "\t" << sum1
             << "\t" << wt
             << endl;
    }

    cout << "\nAverage TAT = "
         << (float)tot / n;

    cout << "\nAverage WT = "
         << (float)sum2 / n;

    return 0;
}