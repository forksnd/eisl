(c-include "<stdio.h>")

(defun eschome ()
    (c-lang "printf(\"\33[1;1H\");")
    (c-lang "res = T;"))
#|
#define ESCHOME printf("\33[1;1H")
#define ESCTOP  printf("\33[2;1H")
#define ESCCLS  printf("\33[2J")
#define ESCCLS1 printf("\33[0J")
#define ESCCLSL printf("\33[0K")
#define ESCCLSLA printf("\33[2K")
#define ESCMVLEFT(x) printf("\33[%dG", x)
#define ESCMVR  printf("\33[C")
#define ESCMVL  printf("\33[D")
#define ESCMVU  printf("\33[A")
#define ESCMVD  printf("\33[B")
#define ESCSCR  printf("\33[S")
#define ESCMVLN(x) printf("\33[%dD", x)
#define ESCMOVE(x,y)    printf("\33[%d;%df", x,y)
#define ESCFBLACK printf("\33[30m")
#define ESCFRED  printf("\33[31m")
#define ESCFGREEN printf("\33[32m")
#define ESCFYELLOW printf("\33[33m")
#define ESCFBLUE printf("\33[34m")
#define ESCFMAGENTA printf("\33[35m")
#define ESCFCYAN printf("\33[36m")
#define ESCFWHITE printf("\33[37m")
#define ESCFORG  printf("\33[39m")

#define ESCBCYAN printf("\33[46m")
#define ESCBORG  printf("\33[49m")
#define ESCREV  printf("\33[7m")
#define ESCRST  printf("\33[0m")
#define ESCBOLD printf("\33[1m")

|#
