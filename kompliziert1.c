#include<stdio.h>

int arr[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

int fun1()
{
    printf("%s\n", __FUNCTION__);
    return 1;
}


void funk1(int a, int b)
{
    printf("func1 = %d, %d\n", a, b);
}
void funk2(int p, int q)
{
    printf("func2 = %d, %d\n", p, q);
}
void funk3(int x, int y)
{
    printf("func3 = %d, %d\n", x, y);
}

int main()
{
    /*erst*/ 
    int (*fp)(); 
    
    fp = fun1;
    (*fp)();


    /*zweite*/ 
    int (*)tagestab[13]; 
    
    tagestab =  &arr;
    printf("%d\n", arr[2]);


    /*dritte*/
    void (*f[10])(int, int);

    f[0] = funk1;
    f[1] = funk2;
    f[2] = funk3;
    (*f[0])(1, 2);
    (*f[1])(3, 4);
    (*f[2])(5, 6);

    return 0;
}
