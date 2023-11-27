#include <stdio.h>

int x = 78, y = 0, z = 156;

int first_function(int p, int q)
{
    int x = ++p; //91 //11922
    return x + z; //91+156=247 //11922+156=12078
}
void second_function(int w, int y)
{
    y *= x; // 78*156=12168
    y -= w; // 12168-247=11921
    printf("%d %d %d\n", x, y, z); // 78 11921 156
    x = first_function(y, z); // 12078
    printf("%d %d %d\n", x, y, z); //12078 11921 156
}
void main()
{
    int x = 90;

    y = first_function(x, z);

    printf("%d %d %d\n", x, y, z); // 90 247 156

    second_function(y, z); //247 156

    printf("%d %d %d\n", x, y, z);
}


// 90 247 156
// 78 11921 156
//12078 11921 156
//90 247 156