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
//parte d
void v_d() {
    double pi = 3.14159265358979323846;
    double ax[2];
    double ay[2];
    double az[2];
    cout << "Ingrese la componente x del vector 1:\n";
    cin >> ax[0];
    cout << "Ingrese la componente y del vector 1:\n";
    cin >> ay[0];
    cout << "Ingrese la componente z del vector 1:\n";
    cin >> az[0];
    cout << "Ingrese la componente x del vector 2:\n";
    cin >> ax[1];
    cout << "Ingrese la componente y del vector 2:\n";
    cin >> ay[1];
    cout << "Ingrese la componente z del vector 2:\n";
    cin >> az[1];
    double p_punto = (ax[0]*ax[1]) + (ay[0] * ay[1]) + (az[0] * az[1]);
    double moduloa = sqrt(pow(ax[0],2)+ pow(ay[0], 2)+ pow(az[0], 2));
    double modulob = sqrt(pow(ax[1], 2) + pow(ay[1], 2) + pow(az[1], 2));
    double angulo = acos(p_punto / (moduloa * modulob))*180/pi;
    cout << "El angulo es: " << angulo;
}
//parte e
void v_e() {
    double pi = 3.14159265358979323846;
    double ax[2];
    double ay[2];
    double az[2];
    cout << "Ingrese la componente x del vector 1:\n";
    cin >> ax[0];
    cout << "Ingrese la componente y del vector 1:\n";
    cin >> ay[0];
    cout << "Ingrese la componente z del vector 1:\n";
    cin >> az[0];
    cout << "Ingrese la componente x del vector 2:\n";
    cin >> ax[1];
    cout << "Ingrese la componente y del vector 2:\n";
    cin >> ay[1];
    cout << "Ingrese la componente z del vector 2:\n";
    cin >> az[1];
    double p_i = (ay[0]*az[1]-(az[0]*ay[1]));
    double p_j = (az[0]*ax[1]-(ax[0]*az[1]));
    double p_k = (ax[0]*ay[1]-(ay[0]*ax[1]));
    double p_cruz = sqrt(pow(p_i, 2) + pow(p_j, 2) + pow(p_k, 2));
    cout << "El area del paralelogramo de los vectores es: " << p_cruz;
}
int main()
{
    //vector_a asd;
    //asd.coord();
    //v_b();
    //v_c();
    //v_d();
    v_e();
}

