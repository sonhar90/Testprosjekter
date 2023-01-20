#include <iostream>

using namespace std;
int main() {
    int sales = 95000;
    double StateTax = 0.04;
    double CountyTax = 0.01;
    double StateTaxCalc = sales * StateTax;
    double CountyTaxCalc = sales * CountyTax;

    cout << "Total earnings in $" << sales << endl;
    cout << "Total State Tax " << StateTaxCalc << endl;
    cout << "Total County Tax " << CountyTaxCalc << endl;
    cout << "Total earnings is " << sales - StateTaxCalc - CountyTaxCalc;

    return 0;
}
