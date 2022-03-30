/**
 * @file endian.c
 * @author xuy (y_xu@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * To check the host is big-endian or little-endian.Yes return 1, no return 0.
 * 
 */
#include <stdio.h>

unsigned int is_big_endian()
{
    //大端：LSB 在高内存地址
    //小端：LSB 在低内存地址
    unsigned int x = 0x12345678;
    char *p = (char *)&x;

    if (p[0] == 0x78)
        return 0;
    else
        return 1;
}

int main(int argc, char *argv[])
{
    printf("The host is %s endian.\n", is_big_endian() ? "big" : "little");
    return 0;
}
