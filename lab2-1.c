#include <stdio.h>
int main()
{
char charType;//캐릭터형 변수 선언
int integerType;//정수형 변수 선언
float floatType;//실수형 변수 선언
double doubleType;//실수형 변수 선언
printf("[----- [박준용] [2019038010] -----\n]");
printf("Size of char: %ld byte\n",sizeof(charType));//선언된 변수의 자료형이 char형이기 때문에 1바이트로 할당된다
printf("Size of int: %ld bytes\n",sizeof(integerType));//선언된 변수의 자료형이 int(정수형)이기 때문에 4바이트로 할당된다
printf("Size of float: %ld bytes\n",sizeof(floatType));//선언된 변수의 자료형이 float(실수형)이기 때문에 4바이트로 할당된다
printf("Size of double: %ld bytes\n",sizeof(doubleType));//선언된 변수의 자료형이 double(실수형)이기 때문에 8바이트로 할당된다
printf("-----------------------------------------\n");
printf("Size of char: %ld byte\n",sizeof(char)); //char형의 할당된 자료형 크기는 1바이트이다
printf("Size of int: %ld bytes\n",sizeof(int));//int형의 할당된 자료형 크기는 4바이트이다
printf("Size of float: %ld bytes\n",sizeof(float));//float형의 할당된 자료형 크기는 4바이트이다
printf("Size of double: %ld bytes\n",sizeof(double));//double형의 할당된 자료형 크기는 8바이트이다
printf("-----------------------------------------\n");
printf("Size of char*: %ld byte\n",sizeof(char*));/*포인터 변수는 주소값을 저장하기 위한 자료형이기 때문에 OS Bit의 따른 메모리
주소 값들을 모두 포인터 변수로 넣을 수 있는 경우의 수에 맞는 크기의 자료형이어야 한다*/
printf("Size of int*: %ld bytes\n",sizeof(int*));
printf("Size of float*: %ld bytes\n",sizeof(float*));
printf("Size of double*: %ld bytes\n",sizeof(double*));
/*즉 포인터 변수가 모두 같은 크기의 바이트 수를 가지는 이유는 포인터 변수의 자료형 크기가
해당 os bit 수가 되기 때문이다*/
return 0;
}