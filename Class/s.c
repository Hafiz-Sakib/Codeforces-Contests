#include <stdio.h>
struct student
{
    int id;
    float cgpa;
};

int main()
{
    struct student sakib;
    sakib.id = 10;
    sakib.cgpa = 2.50;
    return 0;
}