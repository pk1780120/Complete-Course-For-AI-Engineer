#include <iostream.h>
#include<conio.h>

int main()
{
    int n, tq;

    cout << "Enter number of processes: ";
    cin >> n;

    int bt[n], rem[n];
    int time = 0, totalWT = 0, totalTAT = 0;

    cout << "Enter Burst Time of processes:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << ": ";
        cin >> bt[i];
        rem[i] = bt[i];
    }

    cout << "Enter Time Quantum: ";
    cin >> tq;

    bool done;

    do
    {
        done = true;

        for (int i = 0; i < n; i++)
        {
            if (rem[i] > 0)
            {
                done = false;

                if (rem[i] > tq)
                {
                    time += tq;
                    rem[i] -= tq;
                }
                else
                {
                    time += rem[i];

                    int tat = time;          // Turnaround Time
                    int wt = tat - bt[i];    // Waiting Time

                    totalTAT += tat;
                    totalWT += wt;

                    cout << "\nP" << i + 1
                         << " -> TAT = " << tat
                         << ", WT = " << wt;

                    rem[i] = 0;
                }
            }
        }

    } while (!done);

    cout << "\n\nAverage Turnaround Time = "
         << (float)totalTAT / n;

    cout << "\nAverage Waiting Time = "
         << (float)totalWT / n;

    return 0;
}
