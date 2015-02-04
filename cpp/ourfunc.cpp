#include <iostream>
#include <cmath>

double myfunc(double);

int main()
{
    using namespace std;
    
    double a, b;
    cout << "将要调用开方函数" << endl
        << "请输入要开方的数：";
    cin >> a;
    b = myfunc(a);

    cout << "开方后的结果为：" << b << endl;

    return 0;
}

double myfunc(double n)
{
    using namespace std;
    double a, b;
    a = n;
    b = sqrt(a);
    cout << "函数调用成功，即将输出结果：" << endl;
    
    return b;
}

