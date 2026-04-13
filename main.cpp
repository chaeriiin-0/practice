#include <iostream>

int main() 
{
    //1. 본인 분반, 본인 이름 그리고 학번을 순서대로 출력합니다. 
    //분반이 00분반, 이름이 Kim Programming, 학번이 3741200이라면, 00 Kim Programming 3741200 
    std::cout << "01 Park Chaerin 2693128\n";

    //2. 점수를 나타내는 int형 변수와 학점을 나타내는 char형 변수를 선언합니다. 
    //터미널로 입력을 위한 다음 문장을 출력하고 점수를 입력받습니다.
    //Enter your score: (점수) 
    int score{ };
    char gradescore{ };
    std::cout << "Enter your score: ";
    std::cin >> score;

    //3. 2에서 입력받은 점수가 0보다 작거나 100보다 크면 
    //다음 문장을 출력하고 
    //You entered the wrong score.
    //return문을 사용하여 1로 프로그램을 종료합니다. 
    if (score < 0 || score > 100)
    {
        std::cout << "You entered the wrong score." << std::endl;
        return 1;
    }
    
    //4. 2에서 입력받은 점수로 다음 조건의 다중 if-else문을 구성하여 학점을 구합니다. 
    //점수가 90보다 크거나 같으면 학점에 'A'를 할당,
    //점수가 80보다 크거나 같으면 학점에 'B'를 할당,
    //점수가 70보다 크거나 같으면 학점에 'C'를 할당,
    //점수가 60보다 크거나 같으면 학점에 'D'를 할당,
    //그 외는 학점에 'F'를 할당합니다. 
    if (score >= 90) gradescore = 'A';
    else if (score >= 80) gradescore = 'B';
    else if (score >= 70) gradescore = 'C';
    else if (score >= 60) gradescore = 'D';
    else gradescore = 'F';

    //5. 4에서 구현한 다중 if-else문을 switch문으로 변경해 봅니다. 
    //switch문의 제어식은 (점수)/10으로 하고 
    //10, 9일 경우는 학점에 'A'를 할당,
    //8일 경우는 학점에 'B'를 할당,
    //7일 경우는 학점에 'C'를 할당,
    //6일 경우는 학점에 'D'를 할당,
    //default일 경우는 학점에 'F'를 할당합니다.
    switch (score / 10)
    {
        case 10:
        case 9:
            gradescore = 'A';
            break;
        case 8:
            gradescore = 'B';
            break;
        case 7:
            gradescore = 'C';
            break;
        case 6:
            gradescore = 'D';
            break;
        default:
            gradescore = 'F';

    }

    //6. 터미널에 Your grade is (학점)을 출력합니다. 
    std::cout << "Your grade is " << gradescore << std::endl;

    //7. 반복순서를 나타내는 변수를 선언하고 0으로 초기화합니다. 
    //총 반복횟수를 나타내는 기호상수를 선언하고 2로 세팅합니다. 
    int count{ };
    const int totalCount{ 2 };

    //8. 2~6(점수를 입력받고 점수가 0~100사이인지 확인 후 점수에 따라 학점을 할당후 출력)를 
    //do-while문을 이용하여 총 반복횟수만큼 반복해 봅니다.
    //(반복순서)가 1이면 break를 이용하여 do-while문을 빠져나오게 합니다. 
    do
    {
        if (count == 1) break;
        std::cout << "Enter your score: ";
    std::cin >> score;

    if (score < 0 || score > 100)
    {
        std::cout << "You entered the wrong score." << std::endl;
        return 1;
    }
    
    if (score >= 90) gradescore = 'A';
    else if (score >= 80) gradescore = 'B';
    else if (score >= 70) gradescore = 'C';
    else if (score >= 60) gradescore = 'D';
    else gradescore = 'F';

    switch (score / 10)
    {
        case 10:
        case 9:
            gradescore = 'A';
            break;
        case 8:
            gradescore = 'B';
            break;
        case 7:
            gradescore = 'C';
            break;
        case 6:
            gradescore = 'D';
            break;
        default:
            gradescore = 'F';

    }

    std::cout << "Your grade is " << gradescore << std::endl;
    count++;
    }while (count < totalCount);

    //9. 2~6(점수를 입력받고 점수가 0~100사이인지 확인 후 점수에 따라 학점을 할당후 출력)를 
    //while문을 이용하여 총 반복횟수만큼 반복해 봅니다.
    //(반복순서)가 0이면 (반복순서)를 +1하고 continue문을 넣어서 while문 시작으로 가게합니다.
    count = 0;
    while (count < totalCount)
    //10. 2~6(점수를 입력받고 점수가 0~100사이인지 확인 후 점수에 따라 학점을 할당후 출력)를 
    //for문을 이용하여 총 반복횟수만큼 반복해 봅니다.
    //(반복순서)가 0이면 return 2하여 프로그램을 종료하게 합니다. 
    
    return 0;
}
