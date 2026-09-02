#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "NON PREEMPTIVE SJF ALGORITHM" << endl;

    int p[5], t[5], n, d[5] = {0};

    cout << "Enter the number of processes: ";
    cin >> n;

    cout << "Enter the burst time for each process\n";

    for (int i = 1; i <= n; i++)
    {
        cout << "P" << i << " :- ";
        cin >> t[i];
        p[i] = i;
    }

    // Sorting processes according to Burst Time
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (t[i] > t[j])
            {
                int temp;

                temp = t[i];
                t[i] = t[j];
                t[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    int tat = 0, wt[5], awt = 0, s_tat = 0;

    cout << "\n";
    cout << left
         << setw(10) << "Process"
         << setw(10) << "B.T"
         << setw(15) << "Waiting Time"
         << setw(10) << "TAT" << endl;

    for (int i = 1; i <= n; i++)
    {
        tat += t[i];
        d[i] = tat;

        s_tat += tat;

        wt[i] = d[i] - t[i];
        awt += wt[i];

        cout << left
             << setw(10) << ("P" + to_string(p[i]))
             << setw(10) << t[i]
             << setw(15) << wt[i]
             << setw(10) << tat
             << endl;
    }

    cout << "\nAVERAGE TURN AROUND TIME (TAT) = "
         << (float)s_tat / n;

    cout << "\nAVERAGE WAITING TIME = "
         << (float)awt / n;

    return 0;
}