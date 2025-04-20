#include <iostream>
#include <cmath>
using namespace std;
//parte a
class vector_a {
public:
    double magnitud;
    double direccion;
    double pi = 3.14159265358979323846;
    void coord() {
        double s;
        double as;
        cout << "Ingrese la magnitud del vector:\n";
        cin >> s ;
        cout << "Ingrese la direccion del vector:\n";
        cin >> as;
        magnitud = s;
        direccion = as *pi/ 180;

        double vx = magnitud * cos(direccion);
        double vy = magnitud * sin(direccion);
        cout << "Las coordenadas cartesianas son\n en x: " << vx << "\n en y: " << vy;
    }
};
//parte b
void v_b() {
    double pi = 3.14159265358979323846;
    double vxs;
    double vys;
    cout << "Ingrese la componente cartesiana en x:\n";
    cin >> vxs;
    cout << "Ingrese la componente cartesiana en y:\n";
    cin >> vys;
    double mag = sqrt(pow(vxs,2) + pow(vys,2));
    double direccion = (atan(vys/vxs))*180/pi;
    if (vxs < 0) {
        direccion = ((atan(vys / vxs)) * 180 / pi) + 180;
    }
    cout << "La magnitud es: " << mag << "\nLa direccion es: " << direccion;
}
//parte c
void v_c(){
    double pi = 3.14159265358979323846;
    double s[3];
    double as[3];
    cout << "Ingrese la magnitud del vector 1:\n";
    cin >> s[0];
    cout << "Ingrese la direccion del vector 1:\n";
    cin >> as[0];
    cout << "Ingrese la magnitud del vector 2:\n";
    cin >> s[1];
    cout << "Ingrese la direccion del vector 2:\n";
    cin >> as[1];
    cout << "Ingrese la magnitud del vector 3:\n";
    cin >> s[2];
    cout << "Ingrese la direccion del vector 3:\n";
    cin >> as[2];
    double cx=0;
    double cy=0;

    for (int i = 0; i < 3; i++) {
        cx = cx + (s[i] * cos((as[i])*pi/180));
        cy = cy + (s[i] * sin((as[i]) * pi / 180));
    }
    double magni = sqrt(pow(cx,2)+pow(cy,2));
    double dire = atan(cy/cx) * 180 / pi;

    if (cx > 90 && cx < 270) {
        dire= dire + 180;
    }
    cout << "La magnitud es: " << magni << "\nLa direccion es: " << dire;
}
void v_d() {}
void v_e() {}
int main()
{
    //vector_a asd;
    //asd.coord();
    //v_b();
    //v_c();
}
