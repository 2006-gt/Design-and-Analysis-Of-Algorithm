#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
// Stores the maximum deadline that can be associated with a job
#define T 15
 
// Data structure to store job details. Each job has an identifier,
// a deadline, and profit associated with it.
struct Job {
    int taskId, deadline, profit;
};
 
// Function to schedule jobs to maximize profit
void scheduleJobs(vector<Job> jobs)        // no-ref, no-const
{
    // stores the maximum profit that can be earned by scheduling jobs
    int profit = 0;
 
    // array to store used and unused slots info
    vector<int> slot(T, -1);
 
    // arrange the jobs in decreasing order of their profits
    sort(jobs.begin(), jobs.end(),
        [](Job &a, Job &b) {
            return a.profit > b.profit;    // using C++11 lambda comparison
        });
 
    // consider each job in decreasing order of their profits
    for (const Job &job: jobs)
    {
        // search for the next free slot and map the task to that slot
        for (int j = job.deadline - 1; j >= 0; j--)
        {
            if (j < T && slot[j] == -1)
            {
                slot[j] = job.taskId;
                profit += job.profit;
                break;
            }
        }
    }
 
    // print the scheduled jobs
    cout << "The scheduled jobs are ";
    for (int i = 0; i < T; i++)
    {
        if (slot[i] != -1) {
            cout << slot[i] << " ";
        }
    }
 
    // print the total profit that can be earned
    cout << "\nThe total profit earned is " << profit;
}
 
int main()
{
    // vector of given jobs. Each job has an identifier, a deadline, and
    // profit associated with it
    vector<Job> jobs =
    {
        {1, 9, 15}, {2, 2, 2}, {3, 5, 18}, {4, 7, 1}, {5, 4, 25},
        {6, 2, 20}, {7, 5, 8}, {8, 7, 10}, {9, 4, 12}, {10, 3, 5}
    };
 
    // schedule jobs and calculate the maximum profit
    scheduleJobs(jobs);
 
    return 0;
}