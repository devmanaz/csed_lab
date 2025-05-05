#include<stdio.h>
void main(){
    int numProcesses, timeQuantum, currentTime, remainingProcesses, totalTurnaroundTime = 0, totalWaitingTime = 0, i;
    int waitingTime[10] = {0}, arrivalTime[10], remainingTime[10], burstTime[10], turnaroundTime[10] = {0};
    
    printf("Enter the number of processes: ");
    scanf("%d", &numProcesses);
    
    printf("Enter the burst times and arrival times:\n");
    remainingProcesses = numProcesses;
    for (int i = 0; i < numProcesses; i++) {
        scanf("%d%d", &arrivalTime[i], &burstTime[i]);
        remainingTime[i] = burstTime[i];
    }
    
    printf("Enter the time quantum: ");
    scanf("%d", &timeQuantum);
    
    printf("The Gantt Chart is:\n");
    for (currentTime = 0, i = 0; remainingProcesses != 0;) {
        if (remainingTime[i] > 0 && arrivalTime[i] <= currentTime) {
            if (remainingTime[i] <= timeQuantum) {
                currentTime += remainingTime[i];
                printf("|P%d %d", i, currentTime);
                remainingProcesses--;
                remainingTime[i] = 0;
                
                turnaroundTime[i] = currentTime - arrivalTime[i];
                waitingTime[i] = turnaroundTime[i] - burstTime[i];
                
                totalTurnaroundTime += turnaroundTime[i];
                totalWaitingTime += waitingTime[i];
            } else {
                remainingTime[i] -= timeQuantum;
                currentTime += timeQuantum;
                printf("|P%d %d", i, currentTime);
            }
        }
        i = (i + 1) % numProcesses;
    }
    
    printf("\nProcess\t Arrival Time\t Burst Time\t Waiting Time\t Turnaround Time\n");
    for (i = 0; i < numProcesses; i++) {
        printf("P%d\t %d\t\t %d\t\t %d\t\t %d\n", i + 1, arrivalTime[i], burstTime[i], waitingTime[i], turnaroundTime[i]);
    }

    printf("\nAverage Waiting Time = %.2f", (float)totalWaitingTime / numProcesses);
    printf("\nAverage Turnaround Time = %.2f\n", (float)totalTurnaroundTime / numProcesses);
}
