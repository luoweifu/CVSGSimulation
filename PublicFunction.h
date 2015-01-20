/* 
 * File:   PublicFunction.h
 * Author: luoweifu
 *
 * Created on August 11, 2014, 7:26 PM
 */

#ifndef PUBLICFUNCTION_H
#define	PUBLICFUNCTION_H

#include "stdafx.h"


//各种宏定义
#define DELETE_POINTER(p)       \
    do                          \
    {                           \
        if(NULL != p)           \
            delete p;           \
        p = NULL;               \
    }while(0)


#define DELETE_ARRAY(p)       \
    do                          \
    {                           \
        if(NULL != p)           \
            delete[] p;           \
        p = NULL;               \
    }while(0)

//==================================================

typedef unsigned char  BYTE;

typedef struct __FileBuff
{
    long lFileDataLen;
    BYTE* pBuff;
    
    __FileBuff() : lFileDataLen(0), pBuff(NULL){}
    
    ~__FileBuff()
    {
        DELETE_ARRAY(pBuff);
        lFileDataLen = 0;
    }
}FileBuff;

//==================================================

void test();

bool SetFileBuf(FileBuff& fileBuf, const char* strSrcFile, const char* mode);


#endif	/* PUBLICFUNCTION_H */

