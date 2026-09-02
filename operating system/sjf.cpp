#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, p[10], bt[10], at[10], sum = 0;

    cout << "PREEMPTIVE SHORTEST JOB FIRST (SJF)\n";
    cout << "Enter the number of processes: ";
    cin >> n;

    cout << "\nEnter Burst Time and Arrival Time of Processes:\n";

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Burst Time for P" << i << ": ";
        cin >> bt[i];

        cout << "Enter Arrival Time: ";
        cin >> at[i];

        p[i] = i;
        sum += bt[i];
    }

    cout << "\nProcess\tArrival Time\tBurst Time\n";

    for (int i = 1; i <= n; i++)
    {
        cout << "P" << p[i] << "\t"
             << at[i] << "\t\t"
             << bt[i] << endl;
    }

    // Sorting according to Arrival Time
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (at[i] > at[j])
            {
                swap(at[i], at[j]);
                swap(bt[i], bt[j]);
                swap(p[i], p[j]);
            }
        }
    }

    cout << "\nAfter Sorting by Arrival Time:\n";
    cout << "Process\tArrival Time\tBurst Time\n";

    for (int i = 1; i <= n; i++)
    {
        cout << "P" << p[i] << "\t"
             << at[i] << "\t\t"
             << bt[i] << endl;
    }

    cout << "\nExecution Sequence (Approximation):\n";

    int allot[100];
    int index = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < bt[i]; j++)
        {
            allot[index++] = p[i];
        }
    }

    for (int i = 0; i < index; i++)
    {
        cout << "P" << allot[i] << " ";
    }

    cout << endl;

    return 0;
}