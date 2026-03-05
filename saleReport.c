/*File for the saleReport program for Lab06*/

#include <stdio.h>

int main() {
    int i;
    float sales[12];
    char months[12][20] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Enter the sales values...");
}

int i;
float sales[12];
char months[12][20] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};



/*Displays (prints) monthly sales report*/
void monthly_report(char mon[][20], float sale_data){
    int i;
    printf("Monthly Sales Report for 2024");
    printf("Month\tSales");
    for (i = 0; i<12; i++){
        printf("%s\t%f", months[i], sales[i]);
    }
}

/*Find minimum of sales*/
void min_sales(char mon[][20], float sale_data) {
    float minVal = sales[0];
    char minMon[20] = mon[0][20];

    int i;

    for (i = 0; i<12; i++) {
        if (sales[i] < minVal){
            minVal = sales[i];
            minMon = months[i];
        }
    }
    printf("Minimum sales:\t%f (%s)", minVal, minMon);
}

/*Find maximum of sales*/
void max_sales(char mon[][20], float sale_data){
    float maxVal = sales[0];
    char maxMon = months[0];

    int i;

    for (i = 0; i<12; i++){
        if (sales[i] > maxVal){
            maxVal = sales[i];
            maxMon = months[i];
        }
    }
    printf("Maximum sales:\t%f (%s)", maxVal, maxMon);
}

/*Find average of sales*/
void avg_sales(char mon[][20], float sale_data){
    float avg = 0.0;
    float sum = 0.0;

    int i;
    
    for (i =0; i<12; i++){
        sum += sales[i];
    }
    avg = (sum)/12;
    printf("Average sales:\t%f", avg);
}

/*Six-month moving average*/
void moving_average(char mon[][20], float sale_data){

}








