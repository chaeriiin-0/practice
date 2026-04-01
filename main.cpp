#include <iostream>
int main()
{
       //int형 학번변수를 선언하고 0으로 초기화합니다. 변수의 이름은 식별자의 규칙에 따라 의미가 전달되도록 정합니다.
    //입력을 위한 다음 문장을 출력하고 학번변수를 입력받습니다.
    //Enter your student id: (본인 학번)
    int id{0};
    std::cout << "Enter your student id: ";
    std::cin >> id;
    
    //1. 본인 분반, 본인 이름 그리고 입력받은 학번변수를 순서대로 출력합니다. 
    //(분반이 00분반, 이름이 Kim Programming, 입력한 학번이 3741200이라면, 분반과 이름은 문자상수로, 본인 학번은 학번변수 출력) 
    //00 Kim Programming 3741200 
    std::cout << "01 Park Chaerin 2693128" << std::endl;

    //2. int형 학번변수의 크기 (bytes)를 출력합니다. //sizeof 이용 -> sizeof()
    //size of int: 4
    std::cout << "size of int: " << sizeof(id) << std::endl;// <<를 이용하여 나열 가능. 엔드엘 안써서 바로 옆에 써짐

    //3. 올해를 기호상수로 선언 후 출력합니다. //const 이용
    //(올해의 기호상수의 값이 2026이라면, 2026을 문자상수로 출력하는 것이 아니라 기호상수로 출력)
    //2026
    const int year = 2026;
    std::cout << year << std::endl;//선언한 문자열은 큰따옴표 안붙여도됨

    //4. 학번변수를 기호상수로 나누는 산술연산을 int형 연산을 하고 연산 결과를 출력합니다.  
    //i: (int형 연산 결과) //i는 문자상수로 출력하는 것이 아니고 typeid 이용
    int resulti(id/year);
    std::cout << typeid(int).name()[0] << ": " << id/year << std::endl;//resulti 대신 괄호 안의 id/year로 써도 됨
    //5. 학번변수를 기호상수로 나누는 산술연산을 double형 연산을 하고 연산 결과를 출력합니다. 형변환 이용
    //d: (double형 연산 결과) //d도 문자상수로 출력하는 것이 아니고 typeid 이용
    double resultd{};
    resultd = static_cast<double>(id)/year;//id나 year에만 소괄호. 나누기 전에 미리 실수로 바꾸는 것임(둘 중 하나만 실수여도 실수연산이 됨), 형변환툴:static_cast<타입>
    std::cout << typeid(double).name()[0] << ": " << resultd << std::endl;
    //6. 학번변수+1을 학번변수에 할당 후, 학번변수를 출력합니다. 
    id = id + 1;
    std::cout << id << std::endl;
    //7. 학번변수+1을 학번변수에 할당하는데 += 복합할당연산자를 이용합니다. 이후 학번변수를 출력합니다. 
    id += 1;
    std::cout << id << std::endl;
    
    //8. 학번변수에 전위증가연산자를 적용하여 바로 출력합니다. 바로!!에 집중 씨아웃 한줄로 끝내기
    std::cout << ++id << std::endl;

    //9. 학번변수에 후위증가연산자를 적용하여 바로 출력합니다. 
    std::cout << id++ << std::endl;

    //10. 학번변수를 출력합니다.
    std::cout << id;
    return 0;
}
