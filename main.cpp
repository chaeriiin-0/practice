#include <iostream>
int inputInteger()
{
std::cout << "Enter an integer: ";
int a{};
std::cin >> a;
return a;
}
int addIntegers(int b, int c)//a는 매개변수(parameter)
{
return b + c;
}
int main() 
{
    int n{ inputInteger() };//return a; 가 터미널에 입력된 숫자(a)를 돌려줌
    int m{ inputInteger() };//즉, inputInteger()의 결과?값(반환된 값)이  n과 m에 저장되는 것임
    //n,m은 인자(argument)
    std::cout << n << " + " << m << " = " << addIntegers(n,m)<< '\n';
    return 0;
}
