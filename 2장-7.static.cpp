// 2장-7 static.cpp
#include <stdio.h>
#include <stdlib.h>
static int total = 0;   // static definition, internal linkage, static storage duration
void fcn(void);

void main() {
    fcn();
	fcn();
	fcn();
	printf("main():: total = %d\n", total);
	system("pause");
}

void fcn() {
    static int counter = 0;//static 변수
    counter++;
	printf("fcn::counter = %d\n\n", counter);
	total += counter;
}

// 1. internal linkage : 파일 내에 function에서 다 사용된다. (구글링하기)
// 2. static storage duration : 계속 존재는 남아있다. (구글링하기)
// 3. void fcn() 안의 static int counter = 0
//		1) counter = 0으로 시작되는 것은 오직 한번
//		2) 초기화를 한번만 진행하고 앞에서 호출된 counter값이 남아있어서 counter++ 된 변수로 진행.