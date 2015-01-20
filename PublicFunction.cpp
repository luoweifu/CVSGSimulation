#include "PublicFunction.h"
#include <stdio.h>
#include <memory>

void test()
{
    printf("Hello Wrold");
}

bool SetFileBuf(FileBuff& fileBuf, const char* strSrcFile, const char* mode)
{
    FILE* file = fopen(strSrcFile, mode);
    //获取文件大小
    if(file)
    {
        fseek(file, 0, SEEK_END);
        long size = ftell(file);
        fileBuf.lFileDataLen = sizeof(BYTE)* size;
        //拷贝文件内容到字符流
        fseek(file, 0, SEEK_SET);
        fileBuf.pBuff = new BYTE[size];
        memset(fileBuf.pBuff, 0, fileBuf.lFileDataLen);
        fread(fileBuf.pBuff, fileBuf.lFileDataLen, 1, file);
        fclose(file);
        return false;
    }
    return true;
}