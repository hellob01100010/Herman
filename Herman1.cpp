#include <iostream>
#include <iomanip> 
#define PI 3.141592653589793238462643383279502884197169399375105820974944
using namespace std;
int main(){
    double x;
    cin >> x ;
    cout << setprecision(6) << fixed << double(PI*x*x) << "\n" << double(2*x*x);
    return 0;

}