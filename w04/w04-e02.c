/*
 * w04-e02
 *
 * $ gcc w04-e02.c -o w04-e02
 * $ ./w04-e02
 */
#include <stdio.h>

typedef struct meibo
{
    char name[11];
    int english;
    int japanese;
    int math;
} mb;

int main()
{
    mb t[5] = {
        {"Suzuki", 60, 50, 90},
        {"Sato", 50, 60, 80},
        {"Tanaka", 70, 70, 60},
        {"Yamamoto", 40, 50, 90},
        {"Watanabe", 90, 80, 60}
    };

    float english = 0;
    float japanese = 0;
    float math = 0;
    for ( int i = 0; i < 5; i++ )
    {
        english += t[i].english;
        japanese += t[i].japanese;
        math += t[i].math;
    }
    
    english /= 5;
    japanese /= 5;
    math /= 5;

    printf("Average\n");
    printf("English: %f, Japanese: %f, Math: %f\n", english, japanese, math);

    return 0;
}


