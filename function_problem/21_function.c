/*Implement the following functions and calculate standard deviation of an array whose values come from the terminal-
TakeInput()
CalcMean(array, num_of_elem)
Calc_Std_deviation(array, num_of_elem)

Formula:

Sample input 	Sample output
4   5   5   4   4   2   2   6	1.32
600    470    170    430    300	147.32
*/
#include <stdio.h>
#include <math.h>


void TakeInput(int arr[], int n) {
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}


double CalcMean(int arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

double CalcStdDeviation(int arr[], int n) {
    double mean = CalcMean(arr, n);
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (arr[i] - mean) * (arr[i] - mean);
    }
    return sqrt(sum / n);
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];


    TakeInput(arr, n);


    double stdDev = CalcStdDeviation(arr, n);
    printf("%.2lf\n", stdDev);

    return 0;
}
