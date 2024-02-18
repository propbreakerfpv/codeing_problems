#include <stdio.h>

float* spacing(float length, float percent, int iters) {
}

int main() {
    float *value = spacing(40.0, 17.817, 24);
    for(int i = 0; i < 24; ++i) {
        printf("%i %f\n", i, value[i]);
    }
}
