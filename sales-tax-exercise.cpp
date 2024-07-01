#include <iostream> 
using namespace std;

int main() { 
    double sales = 95000;
    double stateTaxRate = 0.04;
    double countyTaxRate = 0.02;

    double stateTax = sales * stateTaxRate;
    double countyTax = sales * countyTaxRate;
    double totalTax = countyTax + stateTax;

    double netSales = sales - totalTax;

    cout << netSales ;

    return 0; 
}