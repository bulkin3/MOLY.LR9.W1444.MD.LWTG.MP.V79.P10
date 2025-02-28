/* crypto/md32_common.h */
/* ====================================================================
 * Copyright (c) 1999-2007 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    licensing@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 */

/*
 * This is a generic 32 bit "collector" for message digest algorithms.
 * Whenever needed it collects input character stream into chunks of
 * 32 bit values and invokes a block function that performs actual hash
 * calculations.
 *
 * Porting guide.
 *
 * Obligatory macros:
 *
 * DATA_ORDER_IS_BIG_ENDIAN or DATA_ORDER_IS_LITTLE_ENDIAN
 *	this macro defines byte order of input stream.
 * HASH_CBLOCK
 *	size of a unit chunk HASH_BLOCK operates on.
 * HASH_LONG
 *	has to be at lest 32 bit wide, if it's wider, then
 *	HASH_LONG_LOG2 *has to* be defined along
 * HASH_CTX
 *	context structure that at least contains following
 *	members:
 *		typedef struct {
 *			...
 *			HASH_LONG	Nl,Nh;
 *			either {
 *			HASH_LONG	data[HASH_LBLOCK];
 *			unsigned char	data[HASH_CBLOCK];
 *			};
 *			unsigned int	num;
 *			...
 *			} HASH_CTX;
 *	data[] vector is expected to be zeroed upon first call to
 *	HASH_UPDATE.
 * HASH_UPDATE
 *	name of "Update" function, implemented here.
 * HASH_TRANSFORM
 *	name of "Transform" function, implemented here.
 * HASH_FINAL
 *	name of "Final" function, implemented here.
 * HASH_BLOCK_DATA_ORDER
 *	name of "block" function capable of treating *unaligned* input
 *	message in original (data) byte order, implemented externally.
 * HASH_MAKE_STRING
 *	macro convering context variables to an ASCII hash string.
 *
 * MD5 example:
 *
 *	#define DATA_ORDER_IS_LITTLE_ENDIAN
 *
 *	#define HASH_LONG		MD5_LONG
 *	#define HASH_LONG_LOG2		MD5_LONG_LOG2
 *	#define HASH_CTX		MD5_CTX
 *	#define HASH_CBLOCK		MD5_CBLOCK
 *	#define HASH_UPDATE		MD5_Update
 *	#define HASH_TRANSFORM		MD5_Transform
 *	#define HASH_FINAL		MD5_Final
 *	#define HASH_BLOCK_DATA_ORDER	md5_block_data_order
 *
 *					<appro@fy.chalmers.se>
 */
 /*****************************************************************************
   *
   * Filename:
   * ---------
   *    md32_common.h
   *
   * Project:
   * --------
   *   Maui_Software
   *
   * Description:
   * ------------
   *   SHA1 Engine
   *
   * Author:
   * -------
   *  Leona Chou (mtk01890)
   *
   *============================================================================
   *             HISTORY
   * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
   *------------------------------------------------------------------------------
   * $Log$
 *
 * removed!
 * removed!
 * .
   *
   *------------------------------------------------------------------------------
   * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
   *============================================================================
   ****************************************************************************/
#ifndef MD32_COMMON_H
#define MD32_COMMON_H

#if !defined(DATA_ORDER_IS_BIG_ENDIAN) && !defined(DATA_ORDER_IS_LITTLE_ENDIAN)
#error "DATA_ORDER must be defined!"
#endif
       
#ifndef HASH_CBLOCK
#error "HASH_CBLOCK must be defined!"
#endif
#ifndef HASH_LONG
#error "HASH_LONG must be defined!"
#endif
#ifndef HASH_CTX
#error "HASH_CTX must be defined!"
#endif
       
#ifndef HASH_UPDATE
#error "HASH_UPDATE must be defined!"
#endif
#ifndef HASH_TRANSFORM
#error "HASH_TRANSFORM must be defined!"
#endif
#ifndef HASH_FINAL
#error "HASH_FINAL must be defined!"
#endif
       
#ifndef HASH_BLOCK_DATA_ORDER
#error "HASH_BLOCK_DATA_ORDER must be defined!"
#endif

#undef ROTATE
#define ROTATE(a,n)     (((a)<<(n))|(((a)&0xffffffff)>>(32-(n))))

#if defined(DATA_ORDER_IS_BIG_ENDIAN)
#define HOST_c2l(c,l)	(l =(((unsigned long)(*((c)++)))<<24),		\
			 l|=(((unsigned long)(*((c)++)))<<16),		\
			 l|=(((unsigned long)(*((c)++)))<< 8),		\
			 l|=(((unsigned long)(*((c)++)))    ),		\
			 l)
			 
#define HOST_l2c(l,c)	(*((c)++)=(unsigned char)(((l)>>24)&0xff),	\
			 *((c)++)=(unsigned char)(((l)>>16)&0xff),	\
			 *((c)++)=(unsigned char)(((l)>> 8)&0xff),	\
			 *((c)++)=(unsigned char)(((l)    )&0xff),	\
			 l)

#elif defined(DATA_ORDER_IS_LITTLE_ENDIAN)
#define HOST_c2l(c,l)	(l =(((unsigned long)(*((c)++)))    ),		\
			 l|=(((unsigned long)(*((c)++)))<< 8),		\
			 l|=(((unsigned long)(*((c)++)))<<16),		\
			 l|=(((unsigned long)(*((c)++)))<<24),		\
			 l)

#define HOST_l2c(l,c)	(*((c)++)=(unsigned char)(((l)    )&0xff),	\
			 *((c)++)=(unsigned char)(((l)>> 8)&0xff),	\
			 *((c)++)=(unsigned char)(((l)>>16)&0xff),	\
			 *((c)++)=(unsigned char)(((l)>>24)&0xff),	\
			 l)

#endif

/*
 * Time for some action:-)
 */

int HASH_UPDATE (HASH_CTX *c, const void *data_, size_t len)
{
    const unsigned char *data=data_;
    unsigned char *p;
    HASH_LONG l;
    size_t n;

    if (len==0) return 1;

    l=(c->Nl+(((HASH_LONG)len)<<3))&0xffffffffUL;
    /* 95-05-24 eay Fixed a bug with the overflow handling, thanks to
    * Wei Dai <weidai@eskimo.com> for pointing it out. */
    if (l < c->Nl) /* overflow */
        c->Nh++;
    c->Nh+=(HASH_LONG)(len>>29);	/* might cause compiler warning on 16-bit */
    c->Nl=l;
    
    n = c->num;
    if (n != 0)
    {
        p=(unsigned char *)c->data;
        
        if (len >= HASH_CBLOCK || len+n >= HASH_CBLOCK)
        {
            memcpy (p+n,data,HASH_CBLOCK-n);
            HASH_BLOCK_DATA_ORDER (c,p,1);
            n      = HASH_CBLOCK-n;
            data  += n;
            len   -= n;
            c->num = 0;
            memset (p,0,HASH_CBLOCK);	/* keep it zeroed */
        }
        else
        {
            memcpy (p+n,data,len);
            c->num += (unsigned int)len;
            return 1;
        }
    }

    n = len/HASH_CBLOCK;
    if (n > 0)
    {
        HASH_BLOCK_DATA_ORDER (c,data,n);
        n    *= HASH_CBLOCK;
        data += n;
        len  -= n;
    }

    if (len != 0)
    {
        p = (unsigned char *)c->data;
        c->num = (unsigned int)len;
        memcpy (p,data,len);
    }
    return 1;
}


void HASH_TRANSFORM (HASH_CTX *c, const unsigned char *data)
{
    HASH_BLOCK_DATA_ORDER (c,data,1);
}


int HASH_FINAL (unsigned char *md, HASH_CTX *c)
{
    unsigned char *p = (unsigned char *)c->data;
    size_t n = c->num;

    p[n] = 0x80; /* there is always room for one */
    n++;

    if (n > (HASH_CBLOCK-8))
    {
        memset (p+n,0,HASH_CBLOCK-n);
        n=0;
        HASH_BLOCK_DATA_ORDER (c,p,1);
    }
    memset (p+n,0,HASH_CBLOCK-8-n);

    p += HASH_CBLOCK-8;
#if   defined(DATA_ORDER_IS_BIG_ENDIAN)
    (void)HOST_l2c(c->Nh,p);
    (void)HOST_l2c(c->Nl,p);
#elif defined(DATA_ORDER_IS_LITTLE_ENDIAN)
    (void)HOST_l2c(c->Nl,p);
    (void)HOST_l2c(c->Nh,p);
#endif
    p -= HASH_CBLOCK;
    HASH_BLOCK_DATA_ORDER (c,p,1);
    c->num=0;
    memset (p,0,HASH_CBLOCK);

#ifndef HASH_MAKE_STRING
#error "HASH_MAKE_STRING must be defined!"
#else
    HASH_MAKE_STRING(c,md);
#endif

    return 1;
}

#ifndef MD32_REG_T
#define MD32_REG_T long
/*
 * This comment was originaly written for MD5, which is why it
 * discusses A-D. But it basically applies to all 32-bit digests,
 * which is why it was moved to common header file.
 *
 * In case you wonder why A-D are declared as long and not
 * as MD5_LONG. Doing so results in slight performance
 * boost on LP64 architectures. The catch is we don't
 * really care if 32 MSBs of a 64-bit register get polluted
 * with eventual overflows as we *save* only 32 LSBs in
 * *either* case. Now declaring 'em long excuses the compiler
 * from keeping 32 MSBs zeroed resulting in 13% performance
 * improvement under SPARC Solaris7/64 and 5% under AlphaLinux.
 * Well, to be honest it should say that this *prevents* 
 * performance degradation.
 *				<appro@fy.chalmers.se>
 * Apparently there're LP64 compilers that generate better
 * code if A-D are declared int. Most notably GCC-x86_64
 * generates better code.
 *				<appro@fy.chalmers.se>
 */
#endif

#endif /* MD32_COMMON_H */
