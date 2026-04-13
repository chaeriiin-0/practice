#include <iostream>
#include <cstdlib>
//1. 난수생성기로 생성된 점수와 이에 따른 학점을 출력하는 함수를 정의합니다. 함수이름은 식별자의 규칙에 따라 만듭니다. 
//1-1. 리턴은 없고 매개변수도 없음: void 함수,()빈괄호
//1-2. 점수를 나타내는 int형 변수와 학점을 나타내는 char형 변수를 선언합니다. 
//1-3. 점수는 rand()함수를 사용하여 50에서 100사이 값으로 할당합니다.
//1-4. 점수(90이상,80이상,70이상,60이상,그외)에 따라 학점('A','B','C','D','F')을 할당합니다. 
//lab3에서 점수에 따라 학점을 할당하는 부분을 if-else구문/switch 구문을 둘 다 구현해 보았는데 둘 중 원하는 구문을 사용하세요. 
//1-5. score: (점수), grade

void PrintRandomScore2Grade() //(매개변수):소괄호
{
    int score{};//{}로 value initailization
    char grade{};// 위와 같음

    //rand(): 0 ~ RAND_MAX --> 50 ~ 100 : (0 ~ 50) + 50
    //                                  rand() % 51 + 50
    score = rand() % 51 +50;//rand() % n + m : 0 ~ n-1 + m --> m ~ n-1 + m
    switch(score/10){
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'c';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }
    std::cout << "score: " << score << ", grade: " << grade << std::endl;//"\n"
}

int main() 
{
    //2. 본인 분반, 본인 이름 그리고 학번을 순서대로 출력합니다. 
    //분반이 00분반, 이름이 Kim Programming, 학번이 3741200이라면, 00 Kim Programming 3741200 
    std::cout << "01 Park Chaerin 2693128\n"; // \n 대신 std::endl 사용해도됨, 문자상수는 백.엔 사용을 더 권장

    //3. int형 month와 day를 선언하여 다음과 같이 터미널로 입력받습니다. 
    //Enter today's month as a number: (month)
    //Enter today's day: (day)
    //srand 함수의 인자를 month*day를 넣어 호출합니다.
    int month{}, day{};//선언할 때 쉼표를 사용하여 한번에 선언할 수 있음
    std::cout << "Enter today's month as a number: ";//터미널로 이 문구를 출력
    std::cin >> month;//터미널에 내가 입력(무슨달인지 입력함)
    std::cout << "Enter today's day: ";
    std::cin >> day;
    srand(month*day);
    std::cout << rand() % 51 + 50 << std::endl;


   


    //4. 반복순서를 나타내는 변수 count를 선언하고 0으로 초기화합니다. 
    //총 반복횟수를 나타내는 기호상수를 선언하고 2로 세팅합니다. 
    int count{ 0 };
    const int totalCount{ 2 };

    //5. do-while문에서 총 반복횟수만큼 (1번 함수)를 호출합니다. 
    do
    {
        PrintRandomScore2Grade();
        count++;
    }while(count < totalCount);
    
    //6. while문에서 총 반복횟수만큼 (1번 함수)를 호출합니다. 
    count = 0;
    while(count < totalCount)
    {
        PrintRandomScore2Grade();
        count++;
    }
    //7. for문을 이용하여 총 반복횟수만큼 (1번 함수)를 호출합니다. 
    for (count = 0; count < totalCount; ++count)
        PrintRandomScore2Grade();

    return 0;
}