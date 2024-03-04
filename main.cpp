/*
* Ho Chi Minh City University of Technology
* Faculty of Computer Science and Engineering
* Initial code for Assignment 1
* Programming Fundamentals Spring 2023
* Author: Vu Van Tien
* Date: 02.02.2023
*/

//The library here is concretely set, students are not allowed to include any other libraries.

#include "study_in_pink1.h"

using namespace std;

void sa_tc_01();    // sample testcase 
void sa_tc_02();    // testcase for firstMeet
void sa_tc_03();    // testcase for firstMeet
void sa_tc_04();    // testcase for traceLuggage
void sa_tc_05();    // testcase for chaseTaxi
void sa_tc_06();    // testcase for chaseTaxi
void sa_tc_07();    // testcase for checkPassword
void sa_tc_08();    // testcase for checkPassword
void sa_tc_09();    // testcase for findCorrectPassword
void sa_tc_10();    // testcase for findCorrectPassword
void tc_1215();     // testcase for traceLuggage 

int main(int argc, const char * argv[]) {
    // sa_tc_01();              // sample testcase
    // sa_tc_02();              // testcase for firstMeet
    // sa_tc_03();              // testcase for firstMeet
    // sa_tc_04();              // testcase for traceLuggage
    // sa_tc_05();              // testcase for chaseTaxi
    // sa_tc_06();              // testcase for chaseTaxi
    // sa_tc_07();              // testcase for checkPassword
    // sa_tc_08();              // testcase for checkPassword
    // sa_tc_09();                 // testcase for findCorrectPassword
    // sa_tc_10();                 // testcase for findCorrectPassword
    tc_1215();                 // testcase for traceLuggage
    return 0;
}

void sa_tc_01() {
    cout << "----- Sample Testcase 01 -----" << endl;
    string input_file("sa_tc_01_input");
    int HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3;
    if (!readFile(input_file, HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3)) {
        return;
    }

    cout << "EXP1: " << EXP1 << ", EXP2: " << EXP2 << ", E1: " << E1 << endl;
    int result = firstMeet(EXP1, EXP2, E1);
    cout << "EXP1: " << EXP1 << ", EXP2: " << EXP2 << ", result: " << result << endl;
}
void sa_tc_02()
{
    cout << "----- Sample Testcase 02 -----" << endl;
    int exp1 = 500, exp2 = 450;
    int e1 = 40;
    cout << "exp1: " << exp1 << ", exp2: " << exp2 << ", e1: " << e1 << endl;
    int result = firstMeet(exp1, exp2, e1);
    cout << "exp1: " << exp1 << ", exp2: " << exp2 << ", result: " << result << endl;
}
void sa_tc_03()
{
    cout << "----- Sample Testcase 03 -----" << endl;
    int exp1 = 500, exp2 = 450;
    int e1 = 81;
    cout << "exp1: " << exp1 << ", exp2: " << exp2 << ", e1: " << e1 << endl;
    int result = firstMeet(exp1, exp2, e1);
    cout << "exp1: " << exp1 << ", exp2: " << exp2 << ", result: " << result << endl;
}
void sa_tc_04() 
{
    cout << "----- Sample Testcase 04 -----" << endl;
    int E2 = 39, HP1 = 333, EXP1 = 430, M1 = 890;
    cout << "E2: " << E2 << ", HP1: " << HP1 << ", EXP1: " << EXP1 << ", M1: " << M1 << endl;
    int result = traceLuggage(HP1, EXP1, M1, E2);
    cout << "E2: " << E2 << ", HP1: " << HP1 << ", EXP1: " << EXP1 << ", M1: " << M1 << ", result: " << result << endl;
}
void sa_tc_05()
{
    cout << "----- Sample Testcase 05 -----" << endl;
    int hp1 = 400, hp2 = 350;
    int exp1 = 600, exp2 = 500;
    int e3 = 59;
    cout << "hp1: " << hp1 << ", hp2: " << hp2 << ", exp1: " << exp1 << ", exp2: " << exp2 << ", e3: " << e3 << endl;
    int result = chaseTaxi(hp1, exp1, hp2, exp2, e3);
    cout << "hp1: " << hp1 << ", hp2: " << hp2 << ", exp1: " << exp1 << ", exp2: " << exp2 << ", e3: " << e3 << ", result: " << result << endl;
}

void sa_tc_06()
{
    cout << "----- Sample Testcase 06 -----" << endl;
    int hp1 = 400, hp2 = 350;
    int exp1 = 600, exp2 = 500;
    int e3 = 99;
    cout << "hp1: " << hp1 << ", hp2: " << hp2 << ", exp1: " << exp1 << ", exp2: " << exp2 << ", e3: " << e3 << endl;
    int result = chaseTaxi(hp1, exp1, hp2, exp2, e3);
    cout << "hp1: " << hp1 << ", hp2: " << hp2 << ", exp1: " << exp1 << ", exp2: " << exp2 << ", e3: " << e3 << ", result: " << result << endl;
}

void sa_tc_07()
{
    cout << "----- Sample Testcase 07 -----" << endl;
    const char *email = "pink@gmail.com";
    const char *s = "123xyz";
    cout << "email: " << email << ", password: " << s << endl;
    int result = checkPassword(s, email);
    cout << result << endl;
}

void sa_tc_08()
{
    cout << "----- Sample Testcase 08 -----" << endl;
    const char *email = "pink@gmail.com";
    const char *s = "012345pink#pink";
    cout << "email: " << email << ", password: " << s << endl;
    int result = checkPassword(s, email);
    cout << result << endl;
}

void sa_tc_09()
{
    cout << "----- Sample Testcase 09 -----" << endl;
    const char *arr_pwds[] = {"1234#xyz", "pink#pink", "pink@123", "123!pink", "pink#pink", "pink@123", "pink@123"};
    int result = findCorrectPassword(arr_pwds, 7);
    cout << result << endl;
}

void sa_tc_10()
{
    cout << "----- Sample Testcase 10 -----" << endl;
    const char *arr_pwds[] = {"pink@123", "123!pink", "1234#xyz", "pink#pink", "pink#pink", "pink@123"};
    int result = findCorrectPassword(arr_pwds, 6);
    cout << result << endl;
}

void tc_1215()
{
    std::cout << "----- Testcase 1215 -----" << std::endl;
    int E2 = 80, HP1 = 466, EXP1 = 272, M1 = 326;
    std::cout << "E2: " << E2 << ", HP1: " << HP1 << ", EXP1: " << EXP1 << ", M1: " << M1 << std::endl;
    int result = traceLuggage(HP1, EXP1, M1, E2);
    std::cout << "E2: " << E2 << ", HP1: " << HP1 << ", EXP1: " << EXP1 << ", M1: " << M1 << ", result: " << result << std::endl;
}