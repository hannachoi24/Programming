# 사칙연산 계산기

## 개요

- 사용자가 입력한 정수와 연산자로 사칙연산을 수행하는 계산기를 구현하세요.

- 계산기는 2개의 수와 1개의 연산자를 입력받는 "일반 연산" 기능과, 3개의 수와 2개의 연산자를 입력받는 "확장 연산" 기능을 가지게 하세요.

- 계산기가 처음 실행 될 때, 일반 연산 또는 확장 연산을 선택 후 계산 기능을 수행하세요.

## Requirements

- 공통

  - 프로그램이 시작되면, 사용할 기능 (1 - 일반 연산, 2 - 확장 연산) 을 입력받음.

  - 입출력 양식을 올바르게 지키지 않는 경우 감점 (아래 입출력 예 참고).

  - 계산을 1회 수행 후, 프로그램은 종료됨.

- 일반 연산 (2점)

  - 사용자는 쉼표로 구분된 2개의 정수 a, b (0 <= a, b <= 1000) 를 입력함.

  - 사용자는 1개의 사칙연산자 O1 (+, -, \*, /, %) 를 입력함.

  - 컴퓨터는 a O1 b 연산을 수행 후 결과를 출력함.

  - 이 때, 0으로 나누는 경우 오류처리 할 것.

  - Note: % 는 나눗셈의 나머지를 구하는 연산자임. (예: 7 % 2 = 1)

- 확장 연산 (2점)

  - 사용자는 쉼표로 구분된 3개의 정수 a, b, c (0 <= a,b,c <= 1000) 를 입력함.

  - 사용자는 쉼표로 구분된 2개의 사칙 연산자 O1, O2 (+,-,\*,/,%) 를 입력함.

  - 컴퓨터는 a O1 b O2 c 연산을 수행 후 결과를 출력함.

  - 이 때, 연산자 우선순위에 맞추어 (\*,/,% 을 +,- 보다 먼저 계산) 계산할 것.

  - 이 때, 0으로 나누는 경우 오류처리 할 것.

## 입출력예:

Enter the calculator mode (1:Normal, 2:Extended): 1  
Put two integers: 10, 20  
Put the operator: +  
The result is 30

Enter the calculator mode (1:Normal, 2:Extended): 2  
Put three integers: 10, 20, 30  
Put two operators: +, \*  
The result is 610

Enter the calculator mode (1:Normal, 2:Extended): 2  
Put three integers: 10, 3, 2  
Put two operators: +, %  
The result is 11
