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

int main(int argc, const char * argv[]) {
    // sa_tc_01();
    // sa_tc_02();
    // sa_tc_03();
    sa_tc_04();
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