#include <iostream>
#include <cmath>

/*
NAMA  : TIRTO
NIM     : A11.2021.13355
MATKUL  : KOMPUTER GRAFIK
*/

int round(float n) {
    return static_cast<int>(n + 0.5);
}

void DDALine(int x0, int y0, int x1, int y1) {
    int dx = x1 - x0;
    int dy = y1 - y0;
    int step;

    if (abs(dx) > abs(dy))
        step = abs(dx);
    else
        step = abs(dy);

    float x_incr = static_cast<float>(dx) / step;
    float y_incr = static_cast<float>(dy) / step;

    float x = x0;
    float y = y0;

    for (int i = 0; i < step; i++) {
        std::cout << round(x) << " " << round(y) << "\n";
        x += x_incr;
        y += y_incr;
    }
}

int main() {
    int x0 = 10, y0 = 1, x1 = 2, y1 = 10;

    DDALine(x0, y0, x1, y1);

    return 0;
}
