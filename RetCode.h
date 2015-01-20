/* 
 * File:   RetCode.h
 * Author: luoweifu
 *
 * Created on January 20, 2015, 7:32 PM
 */

#ifndef RETCODE_H
#define	RETCODE_H

typedef long ReturnCode;

//成功
#define RT_OK                       0L
//失败
#define RT_FAILED                   1L

//参数错误
#define RT_PARAM_ERROR              2L
//无法预知的错误
#define RT_UNEXPECTED_ERROR         3L
//空指针
#define RT_NULL_PTR                 4L
//分配内存错误
#define RT_ALLOCATE_MEMORY_FAILED   5L
//不支持的操作
#define RT_UNSUPPORT_OPERATE        6L


#endif	/* RETCODE_H */

