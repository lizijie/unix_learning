#include <stdio.h>
#include <sys/stat.h>

int
main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("pass a file to read i/o block size\n");
        return -1;
    }

    char* path = argv[1];
    struct stat st;
    if (stat(path, &st) != 0) 
    {
        printf("no invaild file\n");
        return -2;
    }

    printf("file:%s block size:%d byte\n", path, st.st_blksize);
    return 0;
}
