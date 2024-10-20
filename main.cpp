#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    // Variablat për hyrje
    string emri, mbiemri;
    int vitiLindjes, gjatesia;  // Gjatesia në cm
    float pesha;  // Pesha në kg
    
    // Hyrja e të dhënave nga përdoruesi
    cout << "Shkruani emrin tuaj: ";
    cin >> emri;

    cout << "Shkruani mbiemrin tuaj: ";
    cin >> mbiemri;

    cout << "Shkruani vitin e lindjes: ";
    cin >> vitiLindjes;

    cout << "Shkruani gjatesine tuaj ne cm: ";
    cin >> gjatesia;

    cout << "Shkruani peshen tuaj ne kg: ";
    cin >> pesha;

    // Llogaritja e vitit aktual
    time_t t = time(0);
    tm* now = localtime(&t);
    int vitiAktual = now->tm_year + 1900;

    // Llogaritja e moshes
    int mosha = vitiAktual - vitiLindjes;

    // Konvertimi i gjatësisë nga cm në metra
    float gjatesiaNeMetra = gjatesia / 100.0;

    // Llogaritja e BMI
    float BMI = pesha / (gjatesiaNeMetra * gjatesiaNeMetra);

    // Shfaqja e rezultatit
    cout << "Miresevini " << mbiemri << " " << emri
         << ", ju jeni " << mosha << " vite, "
         << "i gjate " << gjatesia << " cm, "
         << "peshoni " << pesha << " kg dhe "
         << "indexi BMI eshte: " << BMI << endl;

    return 0;
}
