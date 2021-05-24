// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 24, 2021
// Determines all RGB values

#include <iostream>

const int BYTE = 255;
main() {
    int loop_counter1, loop_counter2, loop_counter3;

    for (loop_counter1 = 0; loop_counter1 < BYTE; loop_counter1++) {
        for (loop_counter2 = 0; loop_counter2 < BYTE; loop_counter2++) {
            for (loop_counter3 = 0; loop_counter3 < BYTE; loop_counter3++) {
                std::cout << "\nRGB(" << loop_counter1 << "," << loop_counter2
                << "," << loop_counter3 << ")";
            }
        }
    }
}
