#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct ponto1{
    float X1, Y1;
};

struct ponto4{
    float X4, Y4;
};

struct retangulo{
    struct ponto1 p1;
    struct ponto4 p4;
    float comp, peri, area;
    float X2, Y2, X3, Y3;
};

int main(){

    struct retangulo ret;

    ret.p1.X1 = 2;
    ret.p1.Y1 = 4;
    ret.p4.X4 = 4;
    ret.p4.Y4 = 2;
    ret.X2 = 4;
    ret.Y2 = 4;
    ret.X3 = 2;
    ret.Y3 = 2;
    ret.comp = sqrt(pow(ret.p4.X4-ret.p1.X1, 2)+pow(ret.p4.Y4-ret.p1.Y1, 2));
    ret.peri = 2*sqrt(pow(ret.X2-ret.p1.X1, 2)+pow(ret.Y2-ret.p1.Y1, 2)) + 2*sqrt(pow(ret.p1.X1-ret.X3, 2)+pow(ret.p1.Y1-ret.Y3, 2));
    ret.area = sqrt(pow(ret.X2-ret.p1.X1, 2)+pow(ret.Y2-ret.p1.Y1, 2))*sqrt(pow(ret.p1.X1-ret.X3, 2)+pow(ret.p1.Y1-ret.Y3, 2));
    printf("Area: %.0f\nDiagonal: %.0f\nPerimetro: %.0f", ret.area, ret.comp, ret.peri);

return 0;
}