#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float r; //!< @brief Raio da lata em metros.
    float h; //!< @brief Altura da lata em metros.
    float area_base; //!< @brief Area da base da lata;
    float area_lado; //!< @brief Area do lado da lata;
    float area_lata; //!< @brief Area da lata;
    float m_pi = 3.14; //!< @brief Pi;

	//Configura o cout para fixar em 2 casas decimais quando for float

	cout.setf(std::ios::fixed);
	cout.precision(2);
	cout << "Entre com o raio: ";
	cin >> r;
	cout << "Entre com a altura: ";
	cin >> h;
	area_base = m_pi * pow(r, 2) * 2;
	area_lado = 2 * m_pi * r * h;
	area_lata = area_base + area_lado;
	cout << "Custo de R$ " << area_lata * 100 << endl;
	return 0;
}