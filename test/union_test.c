/*Memory Address:   | ... | 0x02 | 0x03 | ... |
                  |-----|------|------|-----|
                  | ... | ch[1]| ch[0]| ... |
                  | ... |  2   |  3   | ... |
u.i = 0x00000203 */
#include <stdio.h>

int main()
{
    union a
    {
        int i;
        char ch[2];
    };
    union a u;
    u.ch[0] = 3;
    u.ch[1] = 2;
    printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i);
    return 0;
}

