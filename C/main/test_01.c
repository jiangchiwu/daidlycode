#include <stdio.h>
#include <stdlib.h>

__attribute((constructor)) void before_main()
{
        printf("====%s=====\n", __FUNCTION__);
}

__attribute((destructor)) void after_main()
{
        printf("====%s=====\n", __FUNCTION__);
}


int main(int argc, char **argv)
{
        printf("=====entering %s.========\n", __FUNCTION__);

        printf("====exiting from main!===\n");
        return 0;
}

