//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ------------------- Function Prototypes --------------------

int64_t check_input(int64_t a1, int64_t a2, int64_t a3);
int64_t check_result(int64_t * a1, int64_t a2, int32_t * a3, int32_t a4);
int64_t pick_numbers(int64_t * a1, int64_t * a2);
int64_t print_numbers(int64_t * a1, int64_t a2);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

void __stack_chk_fail(void);

// ------------------------ Functions -------------------------

// Address range: 0x400736 - 0x40080a
int64_t check_input(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a3; // 0x4007e1
    if (v1 <= 0) {
      lab_0x400803:
        // 0x400808
        return 1;
    }
    int32_t v2 = 0; // 0x4007e4
    int32_t v3 = *(int32_t *)(4 * (int64_t)v2 + a1); // 0x400764
    while (v3 < 76) {
        int32_t v4 = v2 + 1;
        while (v4 < v1) {
            // 0x400797
            if (v3 == *(int32_t *)(4 * (int64_t)v4 + a1)) {
                return 0;
            }
            v4++;
        }
        // 0x4007da
        v2++;
        if (v2 >= v1) {
            if (v1 != 5) {
                return 1;
            } else {
                // 0x4007f0
                if ((int32_t)a2 < 16) {
                    return 1;
                } else {
                    return 0;
                }
            }
        }
        v3 = *(int32_t *)(4 * (int64_t)v2 + a1);
    }
  lab_0x400808:
    // 0x400808
    return 0;
}

// Address range: 0x40080a - 0x4009c9
int64_t pick_numbers(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a1;
    srand(time(NULL));
    int32_t v2 = rand(); // 0x40082c
    *(int32_t *)a2 = v2 + 1 + -15 * ((v2 + (int32_t)(-0x77777777 * (int64_t)v2 / 0x100000000) >> 3) - (v2 >> 31));
    *(int32_t *)a1 = rand() % 75 + 1;
    *(int32_t *)(v1 + 4) = rand() % 75 + 1;
    int64_t v3; // 0x40080a
    while ((int32_t)check_input(v1, (int64_t)*(int32_t *)&v3, 2) == 0) {
        // 0x40088d
        *(int32_t *)(v1 + 4) = rand() % 75 + 1;
    }
    *(int32_t *)(v1 + 8) = rand() % 75 + 1;
    // 0x4008da
    while ((int32_t)check_input(v1, (int64_t)*(int32_t *)&v3, 3) == 0) {
        // 0x4008da
        *(int32_t *)(v1 + 8) = rand() % 75 + 1;
    }
    *(int32_t *)(v1 + 12) = rand() % 75 + 1;
    // 0x400927
    while ((int32_t)check_input(v1, (int64_t)*(int32_t *)&v3, 4) == 0) {
        // 0x400927
        *(int32_t *)(v1 + 12) = rand() % 75 + 1;
    }
    *(int32_t *)(v1 + 16) = rand() % 75 + 1;
    int64_t result = check_input(v1, (int64_t)*(int32_t *)&v3, 5); // 0x4009b8
    // 0x400974
    while ((int32_t)result == 0) {
        // 0x400974
        *(int32_t *)(v1 + 16) = rand() % 75 + 1;
        result = check_input(v1, (int64_t)*(int32_t *)&v3, 5);
    }
    // 0x4009c1
    return result;
}

// Address range: 0x4009c9 - 0x400a29
int64_t print_numbers(int64_t * a1, int64_t a2) {
    for (int64_t i = 0; i < 5; i++) {
        // 0x4009e1
        printf("%d ", (int64_t)*(int32_t *)(4 * i + (int64_t)a1));
    }
    // 0x400a12
    return printf("- %d\n", a2 & 0xffffffff);
}

// Address range: 0x400a29 - 0x400ba9
int64_t check_result(int64_t * a1, int64_t a2, int32_t * a3, int32_t a4) {
    int64_t v1 = 0;
    int32_t v2 = 0;
    while (true) {
        int32_t v3 = v2;
        int64_t v4 = 0;
        int32_t v5 = *(int32_t *)(4 * v4 + (int64_t)a3); // 0x400a89
        int32_t v6; // 0x400a29
        while (*(int32_t *)(4 * v1 + (int64_t)a1) != v5) {
            int64_t v7 = v4 + 1;
            v6 = v3;
            if (v7 >= 5) {
                goto lab_0x400a9f;
            }
            v4 = v7;
            v5 = *(int32_t *)(4 * v4 + (int64_t)a3);
        }
        // 0x400a8f
        v6 = v3 + 1;
      lab_0x400a9f:
        // 0x400a9f
        v2 = v6;
        v1++;
        if (v1 == 5) {
            // break -> 0x400aa9
            break;
        }
    }
    if ((int32_t)a2 == a4 == v2 == 0) {
        // 0x400ba6
        return puts("Congratulations, you win 1 point");
    }
    if ((int32_t)a2 == a4 == v2 == 1) {
        // 0x400ba6
        return puts("Congratulations, you win 2 points");
    }
    if ((int32_t)a2 == a4 == v2 == 2) {
        // 0x400ba6
        return puts("Congratulations, you win 5 points");
    }
    if ((int32_t)a2 != a4 == v2 == 3) {
        // 0x400ba6
        return puts("Congratulations, you win 5 points");
    }
    if ((int32_t)a2 == a4 == v2 == 3) {
        // 0x400ba6
        return puts("Congratulations, you win 50 points");
    }
    if ((int32_t)a2 != a4 == v2 == 4) {
        // 0x400ba6
        return puts("Congratulations, you win 500 points");
    }
    if ((int32_t)a2 == a4 == v2 == 4) {
        // 0x400ba6
        return puts("Congratulations, you win 5,000 points");
    }
    if ((int32_t)a2 != a4 == v2 == 5) {
        // 0x400ba6
        return puts("Congratulations, you win 1,000,000 points");
    }
    int32_t puts_rc; // 0x400a29
    if ((int32_t)a2 == a4 == v2 == 5) {
        // 0x400b90
        puts_rc = puts("Congratulations, you win the Jackpot!");
    } else {
        // 0x400b9c
        puts_rc = puts("Sorry, try again!");
    }
    // 0x400ba6
    return puts_rc;
}

// Address range: 0x400ba9 - 0x400cf9
int main(int argc, char ** argv) {
    int64_t v1 = __readfsqword(40); // 0x400bb8
    int64_t v2; // 0x400ba9
    if ((int32_t)argc == 7) {
        int64_t v3 = (int64_t)argv; // 0x400beb
        int32_t str_as_i = atoi((char *)*(int64_t *)(v3 + 8)); // bp-72, 0x400bfe
        atoi((char *)*(int64_t *)(v3 + 16));
        atoi((char *)*(int64_t *)(v3 + 24));
        atoi((char *)*(int64_t *)(v3 + 32));
        atoi((char *)*(int64_t *)(v3 + 40));
        uint32_t str_as_i2 = atoi((char *)*(int64_t *)(v3 + 48)); // 0x400c67
        int64_t v4 = check_input((int64_t)&str_as_i, (int64_t)str_as_i2, 5); // 0x400c80
        if ((int32_t)v4 != 0) {
            // 0x400ca4
            int64_t v5; // bp-40, 0x400ba9
            int32_t v6; // bp-80, 0x400ba9
            pick_numbers(&v5, (int64_t *)&v6);
            print_numbers(&v5, (int64_t)v6);
            check_result(&v5, (int64_t)v6, &str_as_i, str_as_i2);
            v2 = 0;
        } else {
            // 0x400c89
            dprintf(2, "Usage: gm n1 n2 n3 n4 n5 bonus\n - (first pool) five different numbers from 1 to 75, followed by \n - (second pool) one number from 1 to 15\n");
            v2 = 1;
        }
    } else {
        // 0x400bcd
        dprintf(2, "Usage: gm n1 n2 n3 n4 n5 bonus\n - (first pool) five different numbers from 1 to 75, followed by \n - (second pool) one number from 1 to 15\n");
        v2 = 1;
    }
    int64_t result = v2; // 0x400cf0
    if (v1 != __readfsqword(40)) {
        // 0x400cf2
        __stack_chk_fail();
        result = &g1;
    }
    // 0x400cf7
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (5.4.0)
// Detected functions: 5
