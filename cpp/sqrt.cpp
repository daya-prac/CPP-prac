#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    double area;
    cout << "Please input the area:" << endl;
    cin >> area;
    double side;
    side = sqrt(area);

    cout << "The side is :" << side << endl;

    return 0;
}

