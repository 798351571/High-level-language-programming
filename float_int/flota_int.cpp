#include <stdio.h>
#include <math.h>

int customFloatToInt(float x) {
    int intPart = 0;
    int sign = 1;

    // �������
    if (x < 0) {
        sign = -1;
        x = -x;
    }

    // ��ȡ��������
    while (x >= 1.0) {
        intPart++;
        x -= 1.0;
    }

    // ����С��������������
    if (x >= 0.5) {
        intPart++;
    }

    return intPart * sign;
}

int main() {
    float floatValue;
    scanf("%f",&floatValue);
    int intValue = customFloatToInt(floatValue);
    printf("Int: %d\n",intValue);
    return 0;
}

