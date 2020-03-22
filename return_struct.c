#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[20];
    int age;
    char address[100];
} Person;

Person getPerson()
{
    Person p;

    strcpy(p.name, "홍길동");
    p.age = 30;
    strcpy(p.address, "서울시 용산구 한남동");

    return p;
}

Person *allocPerson()
{
    Person *p = malloc(sizeof(Person));

    strcpy(p->name, "swkang");
    p->age = 30;
    strcpy(p->address, "경기도 수원시 장안구");

    return p;
}

void *allocMemory()
{
    return malloc(100);
}

int main()
{
    Person p1;
    Person *p2 = allocPerson();
    p1 = getPerson();
    char *s1 = allocMemory();
    strcpy(s1, "Hello, World!\n");

    printf("이름: %s\n", p1.name);       
    printf("나이: %d\n", p1.age);       
    printf("주소: %s\n", p1.address);    

    printf("이름: %s\n", p2 -> name);       
    printf("나이: %d\n", p2 -> age);       
    printf("주소: %s\n", p2 -> address);    
    printf("%s", s1);

    free(s1);
    free(p2);

    return 0;
}