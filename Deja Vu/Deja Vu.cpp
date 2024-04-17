// Deja Vu.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
DejaVu:
Intr-un sir de caractere
aleatorii task-ul tau este sa
aflii daca exista un carcater ce este repetat sau sunt doar caractere
unice
Input format: sir de caractere litere(nu vor fi numer e sau
alte caractere speciale)

Ex:
aaaaghlj
Output: Deja Vu

*/

#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int main()
{
    std::string cuvant;
    std::string temp, temp1;
    int cnt = 0, cnt1 = 0;

    std::cout << "Identificare litere identice\n\n\n";
    std::cout << "Adaugati un cuvant : ";
    std::getline(std::cin, cuvant);
    std::cout << "Nr de caractere : ";
    std::cout << cuvant.size();
    std::cout << "" << std::endl;
    std::cout << "Afisam literele mari : ";
    // Afisam doar litere mari si le stocam in temp
    for (int i = 0; i < cuvant.size(); i++) {
        cnt += 1;
        if ((cuvant[i] >= 'A' && cuvant[i] <= 'Z')) {
            std::cout << cuvant[i];
            temp = cuvant[i];
        }
    }

    std::cout << "" << std::endl;
    std::cout << "Afisam literele mici : ";
    // Afisam doar litere mici si le stocam in temp1
    for (int i = 0; i < cuvant.size(); i++) {
        if ((cuvant[i] >= 'a' && cuvant[i] <= 'z')) {
            std::cout << cuvant[i];
            temp1 = cuvant[i];
        }
    }
    std::cout << "" << std::endl;
    // Verificam dublurile literelor Mari
    for (int i = 0; i < temp.size(); i++) {
        
        if (temp[i] == 'A' && 'Z') {
            std::cout << "Deja Vu";
            std::cout << "" << std::endl;
        }   
    }
    // Verificam dublurile literelor mici
    for (int i = 0; i < temp.size(); i++) {

        if (temp[i] == 'a' && 'z') {
            std::cout << "Deja Vu";
            std::cout << "" << std::endl;
        }
    }
}

