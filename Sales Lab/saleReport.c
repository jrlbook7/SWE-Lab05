/*File for the saleReport program for Lab06*/

#include <stdio.h>
#include <string.h>

int i;
float sales[12];
char months[12][20] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};



/*Displays (prints) monthly sales report*/
void monthly_report(char mon[][20], float sale_data[]){
    int i;
    printf("Monthly Sales Report for 2024\n\n");
    printf("Month\t\tSales\n");
    for (i = 0; i<12; i++){
        printf("%s\t\t%.2f\n", months[i], sale_data[i]);
    }
}

/*Find minimum of sales*/
void min_sales(char mon[][20], float sale_data[]) {
    float minVal = sale_data[0];
    char minMon[20];
    strcpy(minMon, mon[0]);

    int i;

    for (i = 0; i<12; i++) {
        if (sale_data[i] < minVal){
            minVal = sale_data[i];
            strcpy(minMon,months[i]);
        }
    }
    printf("Minimum sales:\t\t%.2f (%s)\n", minVal, minMon);
}

/*Find maximum of sales*/
void max_sales(char mon[][20], float sale_data[]){
    float maxVal = sale_data[0];
    char maxMon[20];
    strcpy(maxMon,mon[0]);

    int i;

    for (i = 0; i<12; i++){
        if (sale_data[i] > maxVal){
            maxVal = sale_data[i];
            strcpy(maxMon, months[i]);
        }
    }
    printf("Maximum sales:\t\t%.2f (%s)\n", maxVal, maxMon);
}

/*Find average of sales*/
void avg_sales(char mon[][20], float sale_data[]){
    float avg = 0.0;
    float sum = 0.0;

    int i;
    
    for (i =0; i<12; i++){
        sum += sale_data[i];
    }
    avg = (sum)/12;
    printf("Average sales:\t\t%.2f\n", avg);
}

/*Six-month moving average*/
void moving_average(float sale_data[]){
    printf("Six month moving-average report:\n\n");
    float window1 = .0;
    float window2 = .0;
    float window3 = .0;
    float window4 = .0;
    float window5 = .0;
    float window6 = .0;
    float window7 = .0;

    int i;

    for (i=0; i<6; i++){
        window1 += sale_data[i];
    }
    window1 = window1 / 6.0;

    for (i=1; i<7; i++){
        window2 += sale_data[i];
    }
    window2 = window2 / 6.0;

    for (i=2; i<8; i++){
        window3 += sale_data[i];
    }
    window3 = window3 / 6.0;

    for (i=3; i<9; i++){
        window4 += sale_data[i];
    }
    window4 = window4 / 6.0;

    for (i=4; i<10; i++){
        window5 += sale_data[i];
    }
    window5 = window5 / 6.0;

    for (i=5; i<11; i++){
        window6 += sale_data[i];
    }
    window6 = window6 / 6.0;

    for (i=6; i<12; i++){
        window7 += sale_data[i];
    }
    window7 = window7 / 6.0;

    printf("January-June\t\t%.2f\n", window1);
    printf("February-July\t\t%.2f\n",window2);
    printf("March-August\t\t%.2f\n",window3);
    printf("April-September\t\t%.2f\n", window4);
    printf("May-October\t\t%.2f\n", window5);
    printf("June-November\t\t%.2f\n", window6);
    printf("July-December\t\t%.2f\n", window7);
}

/*Highest to lowest sales values*/
void high_to_low(char mon[][20], float sale_data[]) {
    printf("Sales report (highest to lowest):\n\n");
    printf("Month\t\tSales\n");

    float newSales[12];
    char newMonths[12][20];
    int i, j;
    int max = 0;

    for (i = 0;i<12;i++){
        newSales[i] = sale_data[i];
        strcpy(newMonths[i],mon[i]);
    }

    for (i=0;i<12;i++){
        max = 0;
        for (j = 0; j<12;j++){
            if (newSales[j] > newSales[max]) {
                max = j;
            }
        }
        printf("%s\t\t$%.2f\n",newMonths[max], newSales[max]);

        newSales[max] = -1;
    }
}









int main() {
    printf("Input sales values:\n");
    
    int i;
    for (i=0;i<12;i++) scanf("%2f", &sales[i]);
    printf("\n");

    /*Monthly report*/
    monthly_report(months,sales);

    /*Sales Summary*/
    printf("Sales Summary Report:\n\n");
    min_sales(months, sales);
    max_sales(months, sales);
    avg_sales(months, sales);

    /*Six month moving averages*/
    moving_average(sales);

    /*Highest to lowest assortment*/
    high_to_low(months, sales);

}