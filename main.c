#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float train[][2] = {
    {0, 0},
    {1, 2},
    {2, 4},
    {3, 6},
    {4, 8},
};

float rand_float(void) {
    return (float) random() / (float) RAND_MAX;
}

int main() {
    srandom(time(0));

    float w = rand_float() * 10.0f;
    float b = rand_float() * 5.0f;

    float learning_rate = 0.01f;
    int epochs = 2000;
    int n = 5;

    for (int i = 0; i < epochs; i++) {
        float total_gradient_w = 0.0f;
        float total_gradient_b = 0.0f;
        float total_cost = 0.0f;

        for (int j = 0; j < n; j++) {
            float x = train[j][0];
            float y = train[j][1];

            float prediction = (x * w) + b;

            float error = prediction - y;
            total_cost += error * error;

            total_gradient_w += 2 * error * x;
            total_gradient_b += 2 * error;
        }

        w = w - (learning_rate * (total_gradient_w / n));
        b = b - (learning_rate * (total_gradient_b / n));

        if (i % 10 == 0) {
            printf("Epoch %d: Cost: %f, Weight: %f, Bias: %f\n", i, total_cost/n, w, b);
        }
    }

    printf("Final Weight: %f, Final Bias: %f\n", w, b);
    printf("---------------------------\n");

    float input_val;
    printf("Enter a number");

    if (scanf("%f", &input_val) == 1) {
        float prediction = (input_val * w) + b;
        printf("Predicts (%f * %f) + %f = %f\n", input_val, w, b, prediction);
    }

    return 0;
}
