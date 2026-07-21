#include <iostream>
#include <cstdlib>
#include <ctime>

// 1. 열거형 studentName 정의: kim, lee, park, numOfStudents
//    printStudentName 함수 정의: 리턴은 없고, 매개변수는 studentName형 1개
//    매개변수에 따라
//    kim은 KIM, 을 출력
//    lee는 LEE, 를 출력
//    park은 PARK, 를 출력
//    kim, lee, park이 아니면 NO NAME, 을 출력

enum studentName
{
    kim,
    lee,
    park,
    numOfStudents
};

void printStudentName(studentName name)
{
    switch (name)
    {
    case kim:
        std::cout << "KIM";
        break;
    case lee:
        std::cout << "LEE";
        break;
    case park:
        std::cout << "PARK";
        break;
    default:
        std::cout << "NO NAME";
        break;
    }
}

// 2. 구조체 student 정의
// 2-1. student 구조체는 studentName형 name, int형 id, int형 score, char형 grade를 멤버로 갖습니다.
// 2-2. name은 kim, id는 3741200, score는 0, grade는 'F'로 디폴트값을 지정합니다.
struct student
{
    studentName name{kim};
    int id{3741200};
    int score{0};
    char grade{'F'};
};

// 3-1. score2grade: 리턴 없음, 매개변수는 const int형 참조, char형 참조 (총 2개),
//      int형 매개변수 값 (90이상,80이상,70이상,60이상,그외)에 따라 char형에 ('A','B','C','D','F')값을 할당
void score2grade(const int& score, char& grade)
{
    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 80)
    {
        grade = 'B';
    }
    else if (score >= 70)
    {
        grade = 'C';
    }
    else if (score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
}

// 3-2. inputStudent: 리턴은 없고, 매개변수는 student형 참조,
//      student의 name은 rand()함수로 값을 넣고, student의 id, score를 입력받고,
//      student의 grade는 3-1함수를 사용
void inputStudent(student& s)
{
    s.name = static_cast<studentName>(rand() % numOfStudents);
    std::cout << "id: ";
    std::cin >> s.id;
    std::cout << "score: ";
    std::cin >> s.score;
    score2grade(s.score, s.grade);
}

// 3-3. printStudent: 리턴은 없고, 매개변수는 const student형 참조,
//      name, id: score(grade) 형식으로 출력, name은 printStudentName 함수 이용
void printStudent(const student& s)
{
    printStudentName(s.name);
    std::cout << ", " << s.id << ":" << s.score << "(" << s.grade << ")" << std::endl;
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    student s1;
    inputStudent(s1);
    printStudent(s1);

    student s2;
    printStudent(s2);

    student s3 = {park, 2693128, 100, 'A'};
    printStudent(s3);

    return 0;
}
