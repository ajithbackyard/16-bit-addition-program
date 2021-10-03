//program to implement FCFS Cpu scheduling in C 


#include<stdio.h>


int main(){
int max = 30;
int i,j,at[max],bt[max],ct[max],tat[max],wt[max],n;
int sum=0;
float totTAT, totWT,avgtat,avgwt;



printf("Enter the number of processes\n");
scanf("%d",&n);
for(int i=0;i<n;i++){

printf("Enter the arrival time of process %d",i);
scanf("%d",&at[i]);
printf("Enter the burst time of process %d",i);
scanf("%d",&bt[i]);

}

// calculating the completion time

for(int i=0;i<n;i++){
sum+=bt[i];
ct[i]=sum;

}

//calculating the turn around time

for(int i=0;i<n;i++){
tat[i]=ct[i]-at[i];
totTAT +=tat[i];

}

//calculating the waiting time

for(int i=0;i<n;i++){
wt[i]=tat[i]-bt[i];
totWT+=wt[i];
}


printf("TABLE\n");
printf("-------------\n");

printf("P.no \t at \t bt \t wt \t tat \t ct \t\n");
for(int i=0;i<n;i++){

	printf("P%d \t %d \t %d \t %d \t %d \t %d \t\n",i,at[i],bt[i],wt[i],tat[i],ct[i]);


}

avgtat=totTAT/n;
avgwt=totWT/n;
printf("The average waiting and turnaround time is %f and %f respectively",avgwt,avgtat);

}
