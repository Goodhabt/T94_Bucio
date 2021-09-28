#include <stdio.h>
#include <math.h>
int main()
{
   int RPM = 3000, degree_per_second;

    degree_per_second = (RPM / 60) * 360;

    printf("%d RPM = %d°/s",RPM, degree_per_second);
    return 0;

}
