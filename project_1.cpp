#include <iostream>
#include <cmath>

int main();
int main(){ 

    // final exam
    double maxF, urF;

    std::cout << "Enter the maximum grade on the final examination: ";
    std::cin >> maxF;
    while (maxF != std::round(maxF) || maxF <= 0){
        std::cout << "Enter the maximum grade on the final examination: ";
        std::cin >> maxF;
    }
    
    std::cout << "Enter your grade on the final examination: ";
    std::cin >> urF;
    while (urF > maxF || urF < 0){
        std::cout << "Enter your grade on the final examination: ";
        std::cin >> urF;
    }

    // midterm exam
    double maxM, urM;

    std::cout << "Enter the maximum grade on the mid-term examination: ";
    std::cin >> maxM;
    while (maxM != std::round(maxM) || maxM <= 0){
        std::cout << "Enter the maximum grade on the mid-term examination: ";
        std::cin >> maxM;
    }

    std::cout << "Enter your grade on the mid-term examination: ";
    std::cin >> urM;
    while (urM > maxM || urM < 0){
        std::cout << "Enter your grade on the mid-term examination: ";
        std::cin >> urM;
    }

    // projects
    double maxP1, maxP2, maxP3, maxP4, maxP5, urP1, urP2, urP3, urP4, urP5;
    
    /* double maxP[5] = {maxP1, maxP2, maxP3, maxP4, maxP5};
    double urP[5] = {urP1, urP2, urP3, urP4, urP5}; 
    for (int i = 0; i < 5; i++){
        std::cout << "Enter the maximum grade on project" << i + 1 << ": ";
        std::cin >> maxP[i];
        while (maxP[i] != std::round(maxP[i]) || maxP[i] <= 0){
            std::cout << "Enter the maximum grade on project" << i + 1 << ": ";
            std::cin >> maxP[i];
        }
    
        std::cout << "Enter your grade on project" << i + 1 << ": ";
        std::cin >> urP[i];
        while (urP[i] > maxP[i] || urP[i] < 0){
            std::cout << "Enter your grade on project" << i + 1 << ": ";
            std::cin >> urP[i];
        }
    } */

    //P1
    std::cout << "Enter the maximum grade on projec1: ";
    std::cin >> maxP1;
    while (maxP1 != std::round(maxP1) || maxP1 <= 0){
        std::cout << "Enter the maximum grade on project1: ";
        std::cin >> maxP1;
    }
    
    std::cout << "Enter your grade on project1: ";
    std::cin >> urP1;
    while (urP1 > maxP1 || urP1 < 0){
        std::cout << "Enter your grade on project1: ";
        std::cin >> urP1;
    }
    //P2
    std::cout << "Enter the maximum grade on projec2: ";
    std::cin >> maxP2;
    while (maxP2 != std::round(maxP2) || maxP2 <= 0){
        std::cout << "Enter the maximum grade on project2: ";
        std::cin >> maxP2;
    }
    
    std::cout << "Enter your grade on project2: ";
    std::cin >> urP2;
    while (urP2 > maxP2 || urP2 < 0){
        std::cout << "Enter your grade on project2: ";
        std::cin >> urP2;
    }

    //P3
    std::cout << "Enter the maximum grade on projec3: ";
    std::cin >> maxP3;
    while (maxP3 != std::round(maxP3) || maxP3 <= 0){
        std::cout << "Enter the maximum grade on project3: ";
        std::cin >> maxP3;
    }
    
    std::cout << "Enter your grade on project3: ";
    std::cin >> urP3;
    while (urP3 > maxP3 || urP3 < 0){
        std::cout << "Enter your grade on project3: ";
        std::cin >> urP3;
    }

    //P4
    std::cout << "Enter the maximum grade on projec4: ";
    std::cin >> maxP4;
    while (maxP4 != std::round(maxP4) || maxP4 <= 0){
        std::cout << "Enter the maximum grade on project4: ";
        std::cin >> maxP4;
    }
    
    std::cout << "Enter your grade on project4: ";
    std::cin >> urP4;
    while (urP4 > maxP4 || urP4 < 0){
        std::cout << "Enter your grade on project4: ";
        std::cin >> urP4;
    }

    //P5
    std::cout << "Enter the maximum grade on projec5: ";
    std::cin >> maxP5;
    while (maxP5 != std::round(maxP5) || maxP5 <= 0){
        std::cout << "Enter the maximum grade on project5: ";
        std::cin >> maxP5;
    }
    
    std::cout << "Enter your grade on project5: ";
    std::cin >> urP5;
    while (urP5 > maxP5 || urP5 < 0){
        std::cout << "Enter your grade on project5: ";
        std::cin >> urP5;
    }

    double F, M, P1, P2, P3, P4, P5, P100, E100, Final;
    P1 = 100.0 * urP1 / maxP1;
    P2 = 100.0 * urP2 / maxP2;
    P3 = 100.0 * urP3 / maxP3;
    P4 = 100.0 * urP4 / maxP4;
    P5 = 100.0 * urP5 / maxP5;
    F = 100.0 * urF / maxF;
    M = 100.0 * urM / maxM;
    
    if (M < F){
        M = F;
    }
    if (P1 < F){
        P1 = F;
    }
    if (P2 < F){
        P2 = F;
    }
    if (P3 < F){
        P3 = F;
    }
    if (P4 < F){
        P4 = F;
    }
    if (P5 < F){
        P5 = F;
    }

    E100 = (3.0 * F / 4.0) + (M / 4.0);
    P100 = (P1 + P2 + P3 + P4 + P5) / 5.0;

    if (E100 >= 60){
        Final = std::round((2.0 * E100 / 3.0) + (P100 / 3.0));
    } else if (E100 < 60 && E100 > 40){
        Final = std::round((-1.0 / 60.0 * E100 * E100) + (5.0 / 3.0 * E100) + (1.0 / 60.0 * P100 * E100) - (2.0 / 3.0 * P100));
        //Final = std::round((P100 * (E100 - 40.0) / 60.0) + (E100 * (1 - (E100 - 40.0) / 60.0)));
    } else {
        Final = std::round(E100);
    } 

    std::cout << "Final grade: " << Final << std::endl; 
    return 0; 

}






