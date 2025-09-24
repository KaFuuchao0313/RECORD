#include<stdio.h>
#include<unistd.h>
/*include sleep() and usleep()*/
void slowprint(const char *text,int delay_ms)
/* '*'serve as a navigator, better use it*/
{
    for(int i=0;text[i]!='\0';i++){
        /*a bit like c++ since they both use != as not equal*/
        /*'\0'=the end of the text when saving string '\0' will be added*/
        putchar(text[i]);
        fflush(stdout);
        /*force the word to print by cleaning the buffer zone instantly*/
        usleep(delay_ms*1000);
        /*from mius to ms*/
    }
    printf("\n");
}
void main()
{
    char ans;
    slowprint("the story is now loading",100);
    printf("\nsalmon:\n");
    slowprint("列车马上就要到站了，请做出你的选择。",50);
    printf("\nA.如果可以的话，请让我一直留在你身边。\nB.好吧，看来我别无选择。\n\n");
    scanf("%c",&ans);
    if(ans=='A'){
        printf("\nsalmon:\n");
        slowprint("我的荣幸。",50);
    }
    else if(ans=='B'){
        printf("\nsalmon:\n");
        slowprint("看来列车长想要把我赶下车了呢。",50);
    }
    else;
    return 0;
}
