#include <iostream>
#include <iomanip>
using namespace std;

int wt[10], bt[10], at[10], tat[10], n;
float awt = 0, atat = 0;

void input()
{
    cout << "Enter Number of processes: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Burst Time of process " << i + 1 << ": ";
        cin >> bt[i];

        cout << "Enter Arrival Time of process " << i + 1 << ": ";
        cin >> at[i];
    }
}

void calculate()
{
    wt[0] = 0;
    tat[0] = bt[0];
    atat = tat[0];

    int btt = bt[0]; // total burst time

    for (int i = 1; i < n; i++)
    {
        wt[i] = btt - at[i];
        if (wt[i] < 0) wt[i] = 0; // handle idle CPU case

        btt += bt[i];
        awt += wt[i];

        tat[i] = wt[i] + bt[i];
        atat += tat[i];
    }

    awt /= n;
    atat /= n;
}

void display()
{
    cout << "\nSR.\tA.T.\tB.T.\tW.T.\tT.A.T.\n";

    for (int i = 0; i < n; i++)
    {
        cout << setw(3) << i + 1 << "\t"
             << setw(3) << at[i] << "\t"
             << setw(3) << bt[i] << "\t"
             << setw(3) << wt[i] << "\t"
             << setw(4) << tat[i] << endl;
    }

    cout << fixed << setprecision(6);
    cout << "\nAverage Waiting Time: " << awt;
    cout << "\nAverage Turn Around Time: " << atat;
}

int main()
{
    cout << "FCFS CPU Scheduling Algorithm\n";
    input();
    calculate();
    display();
    return 0;
}

