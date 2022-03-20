#include <stdio.h>
int main()
{
    int i; //int형 변수 i선언
    int *ptr;//int형 포인터 변수 선언
    int **dptr;//int형 포인터 변수 선언
    i = 1234;
    printf("[----- [박준용] [2019038010] -----]\n");
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);//변수 i의 값을 출력한다
    printf("address of i == %p\n", &i);//변수 i의 주소를 출력한다
    printf("value of ptr == %p\n", ptr);//포인터 변수의 값을 출력한다, ptr의 값을 초기화하지 않았으므로 쓰레기 값이 출력된다
    printf("address of ptr == %p\n", &ptr);//포인터 변수 ptr의 주소를 출력한다
    ptr = &i; // 포인터 변수에 i의 주소값을 넣는다
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);//변수 i의 값을 출력한다
    printf("address of i == %p\n", &i);//변수 i의 주소를 출력한다
    printf("value of ptr == %p\n", ptr);//포인터 변수 ptr의 값을 출력한다, 포인터 변수ptr에 i의 주소값을 넣어서 i의 주소가 출력된다
    printf("address of ptr == %p\n", &ptr);//포인터 변수 ptr의 주소를 출력한다
    printf("value of *ptr == %d\n", *ptr);//포인터 변수 ptr이 가리키는 주소의 실제값을 출력한다 즉 i의 주소의 할당된 값인 1234가 출력된다
    dptr = &ptr; //포인터 변수 dptr에 포인터 변수 ptr의 주소를 할당
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);//변수 i의 값을 출력한다
    printf("address of i == %p\n", &i);//변수 i의 주소를 출력한다
    printf("value of ptr == %p\n", ptr);//포인터 변수 ptr의 값을 출력한다, 포인터 변수ptr에 i의 주소값을 넣어서 i의 주소가 출력된다
    printf("address of ptr == %p\n", &ptr);//포인터 변수 ptr의 주소를 출력한다
    printf("value of *ptr == %d\n", *ptr);//포인터 변수 ptr이 가리키는 주소의 실제값을 출력한다 즉 i의 주소의 할당된 값인 1234가 출력된다
    printf("value of dptr == %p\n", dptr);//포인터 변수 dptr의 값을 출력한다,dptr에 &ptr의 값을 할당했기 때문에 포인터 변수 ptr의 주소가 출력
    printf("address of dptr == %p\n", &dptr);//포인터 변수 dprt의 주소를 출력한다
    printf("value of *dptr == %p\n", *dptr);/*포인터 변수 dprt이 가리키는 주소의 값을 출력한다,dprt에 ptr의 주소가 할당되서 ptr의 값인
    i의 주소 출력 */
    printf("value of **dptr == %d\n", **dptr);//*dptr을 역참조했기 때문에 할당된 i의 주소에서 i의 할당된 1234를 출력한다
    *ptr = 7777; /* changing the value of *ptr */
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);//*ptr은 i의 값을 가리키기 때문에  *ptr을 7777로 할당했기 때문에 i의 값이 7777로 변경
    printf("value of *ptr == %d\n", *ptr);//*ptr을 7777로 할당했기 때문에 7777출력
    printf("value of **dptr == %d\n", **dptr);//**dptr은 i의 값을 가리키기 때문에  7777출력
    **dptr = 8888; /* changing the value of **dptr */
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);//**dptr은 i의 값을 가리키기 때문에 i의 값이 8888로 변경
    printf("value of *ptr == %d\n", *ptr);//*ptr 역시 i의 값을 가리키기 때문에 i의 값이 8888로 변경되어 *ptr도 8888출력
    printf("value of **dptr == %d\n", **dptr);//**dptr을 8888로 할당했기 때문에 8888출력
    return 0;
}