#include <iostream>
#include <cstring> //strlen, ... 사용하기 위해
#include <limits>
// C-style 문자열은 문자열의 마지막을 널문자로 나타냅니다. 
// 이를 이용하여 문자열의 길이를 구할 수 있습니다. 문자열의 길이를 구하는 함수를 만들어서 C-style 문자열 라이브러리에 있는 strlen함수와 동일한 결과를 나타내는지 확인해봅니다. 
// 그리고 문자열 2개를 공백을 하나 넣어서 콘솔창에 출력하는 함수를 
// cstring 라이브러리에 있는 함수를 이용하여 만들고 호출해봅니다. 

// 1. 함수 정의
// 1-1. myStrlen: 리턴은 int형, 매개변수는 const 문자열매개변수 1개
//     문자열 매개변수의 길이를 리턴합니다. 
int myStrlen(const char str[])
{
    int len{0};
    while (str[len] != '\0') len++;
    return len;
}
// 1-2. pasteOneSpace: 리턴은 없고, const 문자배열매개변수 2개
// 문자열을 하나 선언하고 
// 매개변수 문자열 2개 사이는 한 칸을 띄워서 붙여준 값을 
// 선언한 문자열에 넣어준 후 콘솔창으로 출력합니다 (strcpy, strcat함수 이용). 
void pasteOneSpace(const char s1[], const char s2[])
{
    char s[100];
    strcpy(s,s1);
    strcat(s," ");
    strcat(s, s2);
    std::cout << s << std::endl;

}

int main() 
{
    // 2-0. 본인 분반, 본인 이름 그리고 학번을 순서대로 출력합니다. 
    // 분반이 00분반, 이름이 Kim Programming, 학번이 3741200이라면, 00 Kim Programming 3741200
    std::cout << "01 Park Chaerin 2693128\n";
    // 2-1. C-style 문자열 1개를 선언하고 원하는 문자열로 초기화합니다.
    // 크기 선언은 생략합니다. 
    // 선언한 문자열을 콘솔창으로 출력합니다. 
    // 인자로 선언한 문자열을 넣은 myStrlen함수의 리턴값을 콘솔창으로 출력합니다. 
    // 인자로 선언한 문자열을 넣은 strlen함수의 리턴값을 콘솔창으로 출력합니다. 
    // 그리고 이 둘의 값이 같으면 Good job!을 콘솔창으로 출력합니다. 
    char str[]{"Hi"};
    std::cout << myStrlen(str) << std::endl;
    std::cout << strlen(str) << std::endl;
    if (myStrlen(str) == strlen(str)) std::cout << "Good job!\n";
    // 2-2. 문자열 2개를 선언하고 
    // std::cin.getline을 이용해 콘솔창으로 한줄씩 원하는 문자열을 넣어줍니다. 
    // strcmp함수를 이용해 문자열 2개가 같으면 "same"을, 같지 않으면 "not same"을 콘솔창으로 출력합니다.
    // 인자로 문자열 2개를 넣어서 pasteOneSpace 함수를 호출합니다. 
    char s1[30], s2[30];
    std::cout << "Enter a line: ";
    std::cin.getline(s1, 30);
    std::cout << "Enter another line: ";
    std::cin.getline(s2, 30);
    if(!strcmp(s1, s2)) std::cout << "same\n";
    else std::cout << "not same\n";

    //if (s1 == s2)//&s1[0] == &s2[0]
    // std::cout << s1 << std::endl;
    // if (!std::cin)
    // {
    //     std::cin.clear();
    //     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // } 
    //std::cout << s2 << std::endl;
    // 인자로 문자열 2개를 넣어서 pasteOneSpace 함수를 호출합니다. 
    pasteOneSpace(s1, s2);
    return 0;
}