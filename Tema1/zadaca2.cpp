#include <iostream>

using namespace std;

// задача 1
//Напиши програма каде што преку тастатура ќе може да се внесат два цели броеви.
//Пронајди го збирот на броевите и провери дали збирот е парен број.
//Резултатот отпечати го на екран.
int main()
{

    int number1, number2;

    cin>>number1>>number2;

    int result = number1 + number2;

    // 1, if the number is even
    // 0, if the number is odd
    bool isEven = result % 2 == 0;

    cout<<"Result is: "<<isEven<<endl;

    return 0;
}
