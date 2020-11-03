/* ccheat
 * cheating your way through the C compiler
 * add the binary to your path and always have them handy.  works great with
 * `grep`.
 */

#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRMACRO "1234567890"

/* what is the equivalent value? */
void equiv(char*, int);
void equiv(char* msg, int i) { printf("%s = %d\n", msg, i); }

/* print a bunch of cheats */
int main(void) {
    equiv("true", true);
    equiv("false", false);
    equiv("EXIT_SUCCESS", EXIT_SUCCESS);
    equiv("EXIT_FAILURE", EXIT_FAILURE);

    puts("");
    char c;
    printf("sizeof(char) = %d bytes (%d bits)\n", sizeof(c), sizeof(c) * 8);
    printf("\tCHAR_MIN = %d, CHAR_MAX = %d\n", CHAR_MIN, CHAR_MAX);

    puts("");
    short s;
    printf("sizeof(short) = %d bytes (%d bits)\n", sizeof(s), sizeof(s) * 8);
    printf("\tSHRT_MIN = %d,SHRT_MAX = %d\n", SHRT_MIN, SHRT_MAX);

    puts("");
    int i;
    printf("sizeof(int) = %d bytes (%d bits)\n", sizeof(i), sizeof(i) * 8);
    printf("\tINT_MIN = %d, INT_MAX = %d\n", INT_MIN, INT_MAX);

    puts("");
    long l;
    printf("sizeof(long) = %d bytes (%d bits)\n", sizeof(l), sizeof(l) * 8);
    printf("\tLONG_MIN = %d, LONG_MAX = %d\n", LONG_MIN, LONG_MAX);

    puts("");
    long long ll;
    printf("sizeof(long long) = %d bytes (%d bits)\n", sizeof(ll),
           sizeof(ll) * 8);
    printf("\tLLONG_MIN = %d, LLONG_MAX = %d\n", LLONG_MIN, LLONG_MAX);
    puts("");

    /*
     *
     *
     *
     */

    size_t st;
    printf("sizeof(size_t) = %d bytes (%d bits)\n", sizeof(st), sizeof(st) * 8);
    printf("\tSSIZE_MAX = %d\n", SSIZE_MAX);

    puts("");
    unsigned short us;
    printf("sizeof(unsigned short) = %d bytes (%d bits)\n", sizeof(us),
           sizeof(us) * 8);
    printf("\tUSHRT_MAX = %d\n", USHRT_MAX);

    puts("");
    unsigned int ui;
    printf("sizeof(unsigned int) = %d bytes (%d bits)\n", sizeof(ui),
           sizeof(ui) * 8);
    printf("\tUINT_MAX = %d\n", UINT_MAX);

    puts("");
    unsigned long ul;
    printf("sizeof(unsigned long) = %d bytes (%d bits)\n", sizeof(ul),
           sizeof(ul) * 8);
    printf("\tULONG_MAX = %d\n", ULONG_MAX);

    puts("");
    unsigned long long ull;
    printf("sizeof(unsigned long long) = %d bytes (%d bits)\n", sizeof(ull),
           sizeof(ull) * 8);
    printf("\tULLONG_MAX = %d\n", ULLONG_MAX);

    puts("");

    printf("#define STRMACRO \"1234567890\" ... sizeof(STRMACRO)=%d\n",
           sizeof(STRMACRO));
    printf("#define STRMACRO \"1234567890\" ... strlen(STRMACRO)=%d\n",
           strlen(STRMACRO));
}

