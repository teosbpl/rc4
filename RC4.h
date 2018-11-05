//
//  RC4.h
//  RC4
//
//  Created by khaled salem on 11/23/17.
//  Copyright © 2017 khaled Fawzy. All rights reserved.
//

#ifndef RC4_h
#define RC4_h
#include <stdio.h>
#ifdef __cplusplus
extern "C" {
#endif
    /* Declarations of this file */
    void RC4(unsigned char*,long , unsigned char* , long ,unsigned char* );
    /* Function to encrypt data represented in array of char "data" with length represented in dataLen using key which is represented in "Key" with length represented in keyLen, and result will be stored in result */

#ifdef __cplusplus
}
#endif

#endif /* RC4_h */
