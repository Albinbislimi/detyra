#include <iostream>
#include <string>
#include <ctime>  // Për të marrë vitin aktual

int main() {
    // Variablat për hyrje
    std::string emri, mbiemri;
    int vitiLindjes, gjatesia;  // Gjatesia në cm
    float pesha;  // Pesha në kg

    // Hyrja e të dhënave nga përdoruesi
    std::cout << "Shkruani emrin tuaj: ";
    std::cin >> emri;

    std::cout << "Shkruani mbiemrin tuaj: ";
    std::cin >> mbiemri;

    std::cout << "Shkruani vitin e lindjes: ";
    std::cin >> vitiLindjes;

    std::cout << "Shkruani gjatesine tuaj ne cm: ";
    std::cin >> gjatesia;

    std::cout << "Shkruani peshen tuaj ne kg: ";
    std::cin >> pesha;

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
    std::cout << "Miresevini " << mbiemri << " " << emri
              << ", ju jeni " << mosha << " vite, "
              << "i gjate " << gjatesia << " cm, "
              << "peshoni " << pesha << " kg dhe "
              << "indexi BMI eshte: " << BMI << std::endl;

    return 0;
}
