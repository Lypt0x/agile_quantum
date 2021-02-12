//
// Created by lypt0 on 2/12/2021.
//

#include <iostream>
#include <qpp.h>

int main() {

    qpp::ket psi = qpp::st.z0;
    qpp::cmat u = qpp::gt.X;
    qpp::ket result = u * psi;

    std::cout << "|0> bit-flip gate X \n" << qpp::disp(result);
}