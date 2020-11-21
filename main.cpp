#include <iostream>

using namespace std;

int main() {
    int a;

    cin >> a;

    // burda teze deyishen(variable) yaradiram, ilk reqemi yaddashda saxlamag ucun
    int ilkReqem = a / 10;
    // buda ikicni reqemi yaddashda saxlayiram
    int ikinciReqem = a % 10;


    cout << ilkReqem << " " << ikinciReqem;

    return 0;
}
