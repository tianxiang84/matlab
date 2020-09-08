

    
  
    /*
    * parallelizationTest.c
    * 
      * Code generation for model "parallelizationTest".
  *
  * Model version              : 1.9
  * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
  * C source code generated on : Tue Sep 08 12:15:36 2020
 * 
 * Target selection: NIVeriStand_Linux_64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
    */


    

        #include "parallelizationTest.h"

        #include "parallelizationTest_private.h"



  

  

  

  

  

  

  

  

  

    
    

  

  
      
    
    
    
    
    
    
    
      /* Block states (auto storage) */
                  DW_parallelizationTest_T parallelizationTest_DW;

      
  
        /* Real-time model */
            RT_MODEL_parallelizationTest_T parallelizationTest_M_;

          RT_MODEL_parallelizationTest_T *const parallelizationTest_M = &parallelizationTest_M_;



  

  

  /* Forward declaration for local functions */
    
    

         static void parallelizationT_emxInit_real_T(emxArray_real_T_parallelizati_T **pEmxArray, int32_T numDimensions);
    
    

    
    

         static void parallelization_emxInit_creal_T(emxArray_creal_T_parallelizat_T **pEmxArray, int32_T numDimensions);
    
    

    
    

         static void parallelization_emxFree_creal_T(emxArray_creal_T_parallelizat_T **pEmxArray);
    
    

    
    

         static void parallelizationT_emxFree_real_T(emxArray_real_T_parallelizati_T **pEmxArray);
    
    

    
    

         static void parallelizati_emxEnsureCapacity(emxArray__common_parallelizat_T *emxArray, int32_T oldNumel, uint32_T elementSize);
    
    

    
    

         static real_T parallelizat_eml_rand_mt19937ar(uint32_T state[625]);
    
    

    
    

         static void parallelizationTest_rand(real_T varargin_1, emxArray_real_T_parallelizati_T *r);
    
    

    
    

         static void parallelizatio_emxInit_creal_T1(emxArray_creal_T_parallelizat_T **pEmxArray, int32_T numDimensions);
    
    

    
    

         static void parallelizationTest_sqrt(creal_T *x);
    
    

    
    

         static void parallelizationTest_xzlartg_c(const creal_T f, const creal_T g, real_T *cs, creal_T *sn);
    
    

    
    

         static void parallelizationTest_xzlartg(const creal_T f, const creal_T g, real_T *cs, creal_T *sn, creal_T *r);
    
    

    
    

         static void parallelizationTest_xzhgeqz(const emxArray_creal_T_parallelizat_T *A, int32_T ilo, int32_T ihi, int32_T *info, emxArray_creal_T_parallelizat_T *alpha1, emxArray_creal_T_parallelizat_T *beta1);
    
    

    
    

         static void parallelizationTest_xzgeev(const emxArray_real_T_parallelizati_T *A, int32_T *info, emxArray_creal_T_parallelizat_T *alpha1, emxArray_creal_T_parallelizat_T *beta1);
    
    

    
    

         static void parallelization_emxInit_real_T1(emxArray_real_T_parallelizati_T **pEmxArray, int32_T numDimensions);
    
    

    
    

         static real_T parallelizationTest_xnrm2(int32_T n, const emxArray_real_T_parallelizati_T *x, int32_T ix0);
    
    

    
    

         static void parallelizationTest_xscal(int32_T n, real_T a, emxArray_real_T_parallelizati_T *x, int32_T ix0);
    
    

    
    

         static void parallelizationTest_xgehrd(emxArray_real_T_parallelizati_T *a);
    
    

    
    

         static real_T parallelizationTest_xnrm2_e(int32_T n, const real_T x[3]);
    
    

    
    

         static real_T parallelizationTest_xzlarfg(int32_T n, real_T *alpha1, real_T x[3]);
    
    

    
    

         static void parallelizationTest_xdlanv2(real_T *a, real_T *b, real_T *c, real_T *d, real_T *rt1r, real_T *rt1i, real_T *rt2r, real_T *rt2i, real_T *cs, real_T *sn);
    
    

    
    

         static int32_T parallelizationTest_eml_dlahqr(emxArray_real_T_parallelizati_T *h);
    
    

    
    

         static void parallelizationTest_eig(const emxArray_real_T_parallelizati_T *A, emxArray_creal_T_parallelizat_T *V);
    
    



  

    
  
  
        

  

          
              
    
        
     

    
        
	
    static void parallelizationT_emxInit_real_T(emxArray_real_T_parallelizati_T **pEmxArray, int32_T numDimensions)
    {
          emxArray_real_T_parallelizati_T *emxArray;
int32_T i;
*pEmxArray = (emxArray_real_T_parallelizati_T *)malloc(sizeof(emxArray_real_T_parallelizati_T));
emxArray = *pEmxArray;
emxArray->data = (real_T *)NULL;
emxArray->numDimensions = numDimensions;
emxArray->size = (int32_T *)malloc((uint32_T)(sizeof(int32_T) * numDimensions));
emxArray->allocatedSize = 0;
emxArray->canFreeData = true;
for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
}


    }
	
    

    

        
              
    
        
     

    
        
	
    static void parallelization_emxInit_creal_T(emxArray_creal_T_parallelizat_T **pEmxArray, int32_T numDimensions)
    {
          emxArray_creal_T_parallelizat_T *emxArray;
int32_T i;
*pEmxArray = (emxArray_creal_T_parallelizat_T *)malloc(sizeof(emxArray_creal_T_parallelizat_T));
emxArray = *pEmxArray;
emxArray->data = (creal_T *)NULL;
emxArray->numDimensions = numDimensions;
emxArray->size = (int32_T *)malloc((uint32_T)(sizeof(int32_T) * numDimensions));
emxArray->allocatedSize = 0;
emxArray->canFreeData = true;
for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
}


    }
	
    

    

        
              
    
        
     

    
        
	
    static void parallelization_emxFree_creal_T(emxArray_creal_T_parallelizat_T **pEmxArray)
    {
          if (*pEmxArray != (emxArray_creal_T_parallelizat_T *)NULL) {
    if (((*pEmxArray)->data != (creal_T *)NULL) && (*pEmxArray)->canFreeData) {
        free((void *)(*pEmxArray)->data);
    }
    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_creal_T_parallelizat_T *)NULL;
}


    }
	
    

    

        
              
    
        
     

    
        
	
    static void parallelizationT_emxFree_real_T(emxArray_real_T_parallelizati_T **pEmxArray)
    {
          if (*pEmxArray != (emxArray_real_T_parallelizati_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
        free((void *)(*pEmxArray)->data);
    }
    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T_parallelizati_T *)NULL;
}


    }
	
    

    

        
              
    
        
     

    
        
	
    static void parallelizati_emxEnsureCapacity(emxArray__common_parallelizat_T *emxArray, int32_T oldNumel, uint32_T elementSize)
    {
          int32_T newNumel;
int32_T i;
void *newData;
if (oldNumel < 0) {
    oldNumel = 0;
}
newNumel = 1;
for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
}
if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
        i = 16;
    }
    while (i < newNumel) {
        if (i > 1073741823) {
            i = MAX_int32_T;
        } else {
            i <<= 1;
        }
    }
    newData = calloc((uint32_T)i, elementSize);
    if (emxArray->data != NULL) {
        memcpy(newData, emxArray->data, elementSize * oldNumel);
        if (emxArray->canFreeData) {
            free(emxArray->data);
        }
    }
    emxArray->data = newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
}


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static real_T parallelizat_eml_rand_mt19937ar(uint32_T state[625])
    {
          real_T r;
uint32_T u[2];
uint32_T y;
int32_T kk;
int32_T k;
boolean_T b_isvalid;
uint32_T c_r;
int32_T exitg1;
boolean_T exitg2;
/* <LEGAL>========================= COPYRIGHT NOTICE ============================ */
/* <LEGAL> This is a uniform (0,1) pseudorandom number generator based on:        */
/* <LEGAL>                                                                        */
/* <LEGAL> A C-program for MT19937, with initialization improved 2002/1/26.       */
/* <LEGAL> Coded by Takuji Nishimura and Makoto Matsumoto.                        */
/* <LEGAL>                                                                        */
/* <LEGAL> Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
/* <LEGAL> All rights reserved.                                                   */
/* <LEGAL>                                                                        */
/* <LEGAL> Redistribution and use in source and binary forms, with or without     */
/* <LEGAL> modification, are permitted provided that the following conditions     */
/* <LEGAL> are met:                                                               */
/* <LEGAL>                                                                        */
/* <LEGAL>   1. Redistributions of source code must retain the above copyright    */
/* <LEGAL>      notice, this list of conditions and the following disclaimer.     */
/* <LEGAL>                                                                        */
/* <LEGAL>   2. Redistributions in binary form must reproduce the above copyright */
/* <LEGAL>      notice, this list of conditions and the following disclaimer      */
/* <LEGAL>      in the documentation and/or other materials provided with the     */
/* <LEGAL>      distribution.                                                     */
/* <LEGAL>                                                                        */
/* <LEGAL>   3. The names of its contributors may not be used to endorse or       */
/* <LEGAL>      promote products derived from this software without specific      */
/* <LEGAL>      prior written permission.                                         */
/* <LEGAL>                                                                        */
/* <LEGAL> THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
/* <LEGAL> "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
/* <LEGAL> LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
/* <LEGAL> A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
/* <LEGAL> OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
/* <LEGAL> SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
/* <LEGAL> LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
/* <LEGAL> DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
/* <LEGAL> THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
/* <LEGAL> (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
/* <LEGAL> OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
/* <LEGAL>                                                                        */
/* <LEGAL>=============================   END   ================================= */
do {
    exitg1 = 0;
    for (k = 0; k < 2; k++) {
        c_r = state[624] + 1U;
        if (c_r >= 625U) {
            for (kk = 0; kk < 227; kk++) {
                y = (state[kk + 1] & 2147483647U) | (state[kk] & 2147483648U);
                if ((int32_T)(y & 1U) == 0) {
                    y >>= 1U;
                } else {
                    y = y >> 1U ^ 2567483615U;
                }
                state[kk] = state[kk + 397] ^ y;
            }
            for (kk = 0; kk < 396; kk++) {
                y = (state[kk + 227] & 2147483648U) | (state[kk + 228] & 2147483647U);
                if ((int32_T)(y & 1U) == 0) {
                    y >>= 1U;
                } else {
                    y = y >> 1U ^ 2567483615U;
                }
                state[kk + 227] = state[kk] ^ y;
            }
            y = (state[623] & 2147483648U) | (state[0] & 2147483647U);
            if ((int32_T)(y & 1U) == 0) {
                y >>= 1U;
            } else {
                y = y >> 1U ^ 2567483615U;
            }
            state[623] = state[396] ^ y;
            c_r = 1U;
        }
        y = state[(int32_T)c_r - 1];
        state[624] = c_r;
        y ^= y >> 11U;
        y ^= y << 7U & 2636928640U;
        y ^= y << 15U & 4022730752U;
        y ^= y >> 18U;
        u[k] = y;
    }
    r = ((real_T)(u[0] >> 5U) * 6.7108864E+7 + (real_T)(u[1] >> 6U)) * 1.1102230246251565E-16;
    if (r == 0.0) {
        if ((state[624] >= 1U) && (state[624] < 625U)) {
            b_isvalid = true;
        } else {
            b_isvalid = false;
        }
        if (b_isvalid) {
            b_isvalid = false;
            k = 1;
            exitg2 = false;
            while ((!exitg2) && (k < 625)) {
                if (state[k - 1] == 0U) {
                    k++;
                } else {
                    b_isvalid = true;
                    exitg2 = true;
                }
            }
        }
        if (!b_isvalid) {
            c_r = 5489U;
            state[0] = 5489U;
            for (k = 0; k < 623; k++) {
                c_r = ((c_r >> 30U ^ c_r) * 1812433253U + k) + 1U;
                state[k + 1] = c_r;
            }
            state[624] = 624U;
        }
    } else {
        exitg1 = 1;
    }
} while (exitg1 == 0);
return r;


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static void parallelizationTest_rand(real_T varargin_1, emxArray_real_T_parallelizati_T *r)
    {
          real_T b;
int32_T c;
int32_T k;

c = r->size[0] * r->size[1];
r->size[0] = (int32_T)varargin_1;
r->size[1] = (int32_T)varargin_1;


parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)r, c, sizeof(real_T));
c = r->size[0] * r->size[1];
for (k = 0; k < c; k++) {
    b = parallelizat_eml_rand_mt19937ar(parallelizationTest_DW.state);
    r->data[k] = b;
}


    }
	
    

    

        
              
    
        
     

    
        
	
    static void parallelizatio_emxInit_creal_T1(emxArray_creal_T_parallelizat_T **pEmxArray, int32_T numDimensions)
    {
          emxArray_creal_T_parallelizat_T *emxArray;
int32_T i;
*pEmxArray = (emxArray_creal_T_parallelizat_T *)malloc(sizeof(emxArray_creal_T_parallelizat_T));
emxArray = *pEmxArray;
emxArray->data = (creal_T *)NULL;
emxArray->numDimensions = numDimensions;
emxArray->size = (int32_T *)malloc((uint32_T)(sizeof(int32_T) * numDimensions));
emxArray->allocatedSize = 0;
emxArray->canFreeData = true;
for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
}


    }
	
    

    

      
        
              
    
        
        
     

    
        
	
     real_T rt_hypotd_snf(real_T u0, real_T u1)
    {
          real_T y;
real_T a;
a = fabs(u0);
y = fabs(u1);
if (a < y) {
    a /= y;
    y *= sqrt(a * a + 1.0);
} else if (a > y) {
    y /= a;
    y = sqrt(y * y + 1.0) * a;
} else {
    if (!rtIsNaN(y)) {
        y = a * 1.4142135623730951;
    }
}
return y;


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static void parallelizationTest_sqrt(creal_T *x)
    {
          real_T xr;
real_T xi;
real_T absxr;
real_T absxi;
xr = x->re;
xi = x->im;
if (xi == 0.0) {
    if (xr < 0.0) {
        absxr = 0.0;
        xr = sqrt(-xr);
    } else {
        absxr = sqrt(xr);
        xr = 0.0;
    }
} else if (xr == 0.0) {
    if (xi < 0.0) {
        absxr = sqrt(-xi / 2.0);
        xr = -absxr;
    } else {
        absxr = sqrt(xi / 2.0);
        xr = absxr;
    }
} else if (rtIsNaN(xr)) {
    absxr = xr;
} else if (rtIsNaN(xi)) {
    absxr = xi;
    xr = xi;
} else if (rtIsInf(xi)) {
    absxr = fabs(xi);
    xr = xi;
} else if (rtIsInf(xr)) {
    if (xr < 0.0) {
        absxr = 0.0;
        xr = xi * -xr;
    } else {
        absxr = xr;
        xr = 0.0;
    }
} else {
    absxr = fabs(xr);
    absxi = fabs(xi);
    if ((absxr > 4.4942328371557893E+307) || (absxi > 4.4942328371557893E+307)) {
        absxr *= 0.5;
        absxi *= 0.5;
        absxi = rt_hypotd_snf(absxr, absxi);
        if (absxi > absxr) {
            absxr = sqrt(absxr / absxi + 1.0) * sqrt(absxi);
        } else {
            absxr = sqrt(absxi) * 1.4142135623730951;
        }
    } else {
        absxr = sqrt((rt_hypotd_snf(absxr, absxi) + absxr) * 0.5);
    }
    if (xr > 0.0) {
        xr = xi / absxr * 0.5;
    } else {
        if (xi < 0.0) {
            xr = -absxr;
        } else {
            xr = absxr;
        }
        absxr = xi / xr * 0.5;
    }
}
x->re = absxr;
x->im = xr;


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static void parallelizationTest_xzlartg_c(const creal_T f, const creal_T g, real_T *cs, creal_T *sn)
    {
          real_T scale;
real_T g2;
real_T f2s;
real_T fs_re;
real_T fs_im;
real_T gs_re;
real_T gs_im;
boolean_T guard1 = false;

scale = fabs(f.re);
g2 = fabs(f.im);
if (g2 > scale) {
    scale = g2;
}
g2 = fabs(g.re);
f2s = fabs(g.im);
if (f2s > g2) {
    g2 = f2s;
}
if (g2 > scale) {
    scale = g2;
}
fs_re = f.re;
fs_im = f.im;
gs_re = g.re;
gs_im = g.im;
guard1 = false;
if (scale >= 7.4428285367870146E+137) {
    do {
        fs_re *= 1.3435752215134178E-138;
        fs_im *= 1.3435752215134178E-138;
        gs_re *= 1.3435752215134178E-138;
        gs_im *= 1.3435752215134178E-138;
        scale *= 1.3435752215134178E-138;
    } while (!(scale < 7.4428285367870146E+137));
    guard1 = true;
} else if (scale <= 1.3435752215134178E-138) {
    if ((g.re == 0.0) && (g.im == 0.0)) {
        *cs = 1.0;
        sn->re = 0.0;
        sn->im = 0.0;
    } else {
        do {
            fs_re *= 7.4428285367870146E+137;
            fs_im *= 7.4428285367870146E+137;
            gs_re *= 7.4428285367870146E+137;
            gs_im *= 7.4428285367870146E+137;
            scale *= 7.4428285367870146E+137;
        } while (!(scale > 1.3435752215134178E-138));
        guard1 = true;
    }
} else {
    guard1 = true;
}
if (guard1) {
    scale = fs_re * fs_re + fs_im * fs_im;
    g2 = gs_re * gs_re + gs_im * gs_im;
    f2s = g2;
    if (1.0 > g2) {
        f2s = 1.0;
    }
    if (scale <= f2s * 2.0041683600089728E-292) {
        if ((f.re == 0.0) && (f.im == 0.0)) {
            *cs = 0.0;
            g2 = rt_hypotd_snf(gs_re, gs_im);
            sn->re = gs_re / g2;
            sn->im = -gs_im / g2;
        } else {
            scale = sqrt(g2);
            *cs = rt_hypotd_snf(fs_re, fs_im) / scale;
            g2 = fabs(f.re);
            f2s = fabs(f.im);
            if (f2s > g2) {
                g2 = f2s;
            }
            if (g2 > 1.0) {



                g2 = rt_hypotd_snf(f.re, f.im);
                fs_re = f.re / g2;
                fs_im = f.im / g2;
            } else {
                f2s = 7.4428285367870146E+137 * f.re;
                fs_im = 7.4428285367870146E+137 * f.im;
                g2 = rt_hypotd_snf(f2s, fs_im);
                fs_re = f2s / g2;
                fs_im /= g2;
            }
            gs_re /= scale;
            gs_im = -gs_im / scale;
            sn->re = fs_re * gs_re - fs_im * gs_im;
            sn->im = fs_re * gs_im + fs_im * gs_re;
        }
    } else {
        f2s = sqrt(g2 / scale + 1.0);
        fs_re *= f2s;
        fs_im *= f2s;
        *cs = 1.0 / f2s;
        g2 += scale;
        fs_re /= g2;
        fs_im /= g2;
        sn->re = fs_re * gs_re - fs_im * -gs_im;
        sn->im = fs_re * -gs_im + fs_im * gs_re;
    }
}


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static void parallelizationTest_xzlartg(const creal_T f, const creal_T g, real_T *cs, creal_T *sn, creal_T *r)
    {
          real_T scale;
int32_T count;
int32_T rescaledir;
real_T g2;
real_T f2s;
real_T fs_re;
real_T fs_im;
real_T gs_re;
real_T gs_im;
boolean_T guard1 = false;

scale = fabs(f.re);
g2 = fabs(f.im);
if (g2 > scale) {
    scale = g2;
}
g2 = fabs(g.re);
f2s = fabs(g.im);
if (f2s > g2) {
    g2 = f2s;
}
if (g2 > scale) {
    scale = g2;
}
fs_re = f.re;
fs_im = f.im;
gs_re = g.re;
gs_im = g.im;
count = 0;
rescaledir = 0;
guard1 = false;
if (scale >= 7.4428285367870146E+137) {
    do {
        count++;
        fs_re *= 1.3435752215134178E-138;
        fs_im *= 1.3435752215134178E-138;
        gs_re *= 1.3435752215134178E-138;
        gs_im *= 1.3435752215134178E-138;
        scale *= 1.3435752215134178E-138;
    } while (!(scale < 7.4428285367870146E+137));
    rescaledir = 1;
    guard1 = true;
} else if (scale <= 1.3435752215134178E-138) {
    if ((g.re == 0.0) && (g.im == 0.0)) {
        *cs = 1.0;
        sn->re = 0.0;
        sn->im = 0.0;
        *r = f;
    } else {
        do {
            count++;
            fs_re *= 7.4428285367870146E+137;
            fs_im *= 7.4428285367870146E+137;
            gs_re *= 7.4428285367870146E+137;
            gs_im *= 7.4428285367870146E+137;
            scale *= 7.4428285367870146E+137;
        } while (!(scale > 1.3435752215134178E-138));
        rescaledir = -1;
        guard1 = true;
    }
} else {
    guard1 = true;
}
if (guard1) {
    scale = fs_re * fs_re + fs_im * fs_im;
    g2 = gs_re * gs_re + gs_im * gs_im;
    f2s = g2;
    if (1.0 > g2) {
        f2s = 1.0;
    }
    if (scale <= f2s * 2.0041683600089728E-292) {
        if ((f.re == 0.0) && (f.im == 0.0)) {
            *cs = 0.0;



            r->re = rt_hypotd_snf(g.re, g.im);
            r->im = 0.0;
            g2 = rt_hypotd_snf(gs_re, gs_im);
            sn->re = gs_re / g2;
            sn->im = -gs_im / g2;
        } else {
            scale = sqrt(g2);
            *cs = rt_hypotd_snf(fs_re, fs_im) / scale;
            g2 = fabs(f.re);
            f2s = fabs(f.im);
            if (f2s > g2) {
                g2 = f2s;
            }
            if (g2 > 1.0) {



                g2 = rt_hypotd_snf(f.re, f.im);
                fs_re = f.re / g2;
                fs_im = f.im / g2;
            } else {
                f2s = 7.4428285367870146E+137 * f.re;
                fs_im = 7.4428285367870146E+137 * f.im;
                g2 = rt_hypotd_snf(f2s, fs_im);
                fs_re = f2s / g2;
                fs_im /= g2;
            }
            gs_re /= scale;
            gs_im = -gs_im / scale;
            sn->re = fs_re * gs_re - fs_im * gs_im;
            sn->im = fs_re * gs_im + fs_im * gs_re;
            r->re = (sn->re * g.re - sn->im * g.im) + *cs * f.re;
            r->im = (sn->re * g.im + sn->im * g.re) + *cs * f.im;
        }
    } else {
        f2s = sqrt(g2 / scale + 1.0);
        r->re = f2s * fs_re;
        r->im = f2s * fs_im;
        *cs = 1.0 / f2s;
        g2 += scale;
        scale = r->re / g2;
        g2 = r->im / g2;
        sn->re = scale * gs_re - g2 * -gs_im;
        sn->im = scale * -gs_im + g2 * gs_re;
        if (rescaledir > 0) {
            while (rescaledir <= count) {
                r->re *= 7.4428285367870146E+137;
                r->im *= 7.4428285367870146E+137;
                rescaledir++;
            }
        } else {
            if (rescaledir < 0) {
                for (rescaledir = 1; rescaledir <= count; rescaledir++) {
                    r->re *= 1.3435752215134178E-138;
                    r->im *= 1.3435752215134178E-138;
                }
            }
        }
    }
}


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static void parallelizationTest_xzhgeqz(const emxArray_creal_T_parallelizat_T *A, int32_T ilo, int32_T ihi, int32_T *info, emxArray_creal_T_parallelizat_T *alpha1, emxArray_creal_T_parallelizat_T *beta1)
    {
          creal_T ctemp;
real_T anorm;
int32_T j;
int32_T ifirst;
int32_T istart;
int32_T ilast;
int32_T ilastm1;
int32_T ifrstm;
int32_T ilastm;
int32_T iiter;
boolean_T goto60;
boolean_T goto70;
boolean_T goto90;
int32_T jp1;
boolean_T ilazro;
creal_T ad22;
creal_T shift;
emxArray_creal_T_parallelizat_T *b_A;
int32_T jiter;
real_T scale;
boolean_T firstNonZero;
real_T reAij;
real_T imAij;
real_T b_temp2;
int32_T b_i;
creal_T b_A_0;
creal_T b_A_1;
creal_T anorm_0;
real_T ar;
real_T ai;
real_T t1_re;
real_T t1_im;
real_T shift_im;
real_T eshift_re;
real_T eshift_im;
boolean_T guard1 = false;
boolean_T guard2 = false;
int32_T exitg1;
boolean_T exitg2;

parallelizatio_emxInit_creal_T1(&b_A, 2);
ilast = b_A->size[0] * b_A->size[1];
b_A->size[0] = A->size[0];
b_A->size[1] = A->size[1];
parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)b_A, ilast, sizeof(creal_T));
ifirst = A->size[0] * A->size[1];
for (ilast = 0; ilast < ifirst; ilast++) {
    b_A->data[ilast] = A->data[ilast];
}
*info = -1;
if ((A->size[0] == 1) && (A->size[1] == 1)) {
    ihi = 1;
}
ilast = alpha1->size[0];
alpha1->size[0] = A->size[0];


parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)alpha1, ilast, sizeof(creal_T));
ifirst = A->size[0];
for (ilast = 0; ilast < ifirst; ilast++) {
    alpha1->data[ilast].re = 0.0;
    alpha1->data[ilast].im = 0.0;
}
ilast = beta1->size[0];
beta1->size[0] = A->size[0];


parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)beta1, ilast, sizeof(creal_T));
ifirst = A->size[0];
for (ilast = 0; ilast < ifirst; ilast++) {
    beta1->data[ilast].re = 1.0;
    beta1->data[ilast].im = 0.0;
}
eshift_re = 0.0;
eshift_im = 0.0;
ctemp.re = 0.0;
ctemp.im = 0.0;
anorm = 0.0;
if (!(ilo > ihi)) {
    scale = 0.0;
    firstNonZero = true;
    for (ilast = ilo; ilast <= ihi; ilast++) {
        ifirst = ilast + 1;
        if (ihi < ilast + 1) {
            ifirst = ihi;
        }
        for (istart = ilo; istart <= ifirst; istart++) {
            reAij = A->data[((ilast - 1) * A->size[0] + istart) - 1].re;
            imAij = A->data[((ilast - 1) * A->size[0] + istart) - 1].im;
            if (reAij != 0.0) {
                reAij = fabs(reAij);
                if (firstNonZero) {
                    anorm = 1.0;
                    scale = reAij;
                    firstNonZero = false;
                } else if (scale < reAij) {
                    b_temp2 = scale / reAij;
                    anorm = anorm * b_temp2 * b_temp2 + 1.0;
                    scale = reAij;
                } else {
                    b_temp2 = reAij / scale;
                    anorm += b_temp2 * b_temp2;
                }
            }
            if (imAij != 0.0) {
                reAij = fabs(imAij);
                if (firstNonZero) {
                    anorm = 1.0;
                    scale = reAij;
                    firstNonZero = false;
                } else if (scale < reAij) {
                    b_temp2 = scale / reAij;
                    anorm = anorm * b_temp2 * b_temp2 + 1.0;
                    scale = reAij;
                } else {
                    b_temp2 = reAij / scale;
                    anorm += b_temp2 * b_temp2;
                }
            }
        }
    }
    anorm = scale * sqrt(anorm);
}
imAij = 2.2204460492503131E-16 * anorm;
scale = 2.2250738585072014E-308;
if (imAij > 2.2250738585072014E-308) {
    scale = imAij;
}
imAij = 2.2250738585072014E-308;
if (anorm > 2.2250738585072014E-308) {
    imAij = anorm;
}
anorm = 1.0 / imAij;
imAij = 1.0 / sqrt(A->size[0]);
firstNonZero = true;
for (ilast = ihi; ilast + 1 <= A->size[0]; ilast++) {
    alpha1->data[ilast] = A->data[A->size[0] * ilast + ilast];
}
guard1 = false;
guard2 = false;
if (ihi >= ilo) {
    ifirst = ilo;
    istart = ilo;
    ilast = ihi - 1;
    ilastm1 = ihi - 2;
    ifrstm = ilo;
    ilastm = ihi;
    iiter = 0;
    goto60 = false;
    goto70 = false;
    goto90 = false;
    jiter = 1;
    do {
        exitg1 = 0;
        if (jiter <= ((ihi - ilo) + 1) * 30) {
            if (ilast + 1 == ilo) {
                goto60 = true;
            } else if (fabs(b_A->data[b_A->size[0] * ilastm1 + ilast].re) + fabs(b_A->data[b_A->size[0] * ilastm1 + ilast].im) <= scale) {
                b_A->data[ilast + b_A->size[0] * ilastm1].re = 0.0;
                b_A->data[ilast + b_A->size[0] * ilastm1].im = 0.0;
                goto60 = true;
            } else {
                j = ilastm1;
                exitg2 = false;
                while ((!exitg2) && (j + 1 >= ilo)) {
                    if (j + 1 == ilo) {
                        ilazro = true;
                    } else if (fabs(b_A->data[(j - 1) * b_A->size[0] + j].re) + fabs(b_A->data[(j - 1) * b_A->size[0] + j].im) <= scale) {
                        b_A->data[j + b_A->size[0] * (j - 1)].re = 0.0;
                        b_A->data[j + b_A->size[0] * (j - 1)].im = 0.0;
                        ilazro = true;
                    } else {
                        ilazro = false;
                    }
                    if (ilazro) {
                        ifirst = j + 1;
                        goto70 = true;
                        exitg2 = true;
                    } else {
                        j--;
                    }
                }
            }
            if (!(goto60 || goto70)) {
                ifirst = alpha1->size[0];
                ilast = alpha1->size[0];
                alpha1->size[0] = ifirst;


                parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)alpha1, ilast, sizeof(creal_T));
                for (ilast = 0; ilast < ifirst; ilast++) {
                    alpha1->data[ilast].re = (rtNaN);
                    alpha1->data[ilast].im = 0.0;
                }
                ifirst = beta1->size[0];
                ilast = beta1->size[0];
                beta1->size[0] = ifirst;


                parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)beta1, ilast, sizeof(creal_T));
                for (ilast = 0; ilast < ifirst; ilast++) {
                    beta1->data[ilast].re = (rtNaN);
                    beta1->data[ilast].im = 0.0;
                }
                *info = 0;
                exitg1 = 1;
            } else if (goto60) {
                goto60 = false;
                alpha1->data[ilast] = b_A->data[b_A->size[0] * ilast + ilast];
                ilast = ilastm1;
                ilastm1--;
                if (ilast + 1 < ilo) {
                    firstNonZero = false;
                    guard2 = true;
                    exitg1 = 1;
                } else {
                    iiter = 0;
                    eshift_re = 0.0;
                    eshift_im = 0.0;
                    ilastm = ilast + 1;
                    if (ifrstm > ilast + 1) {
                        ifrstm = ilo;
                    }
                    jiter++;
                }
            } else {
                if (goto70) {
                    goto70 = false;
                    iiter++;
                    ifrstm = ifirst;
                    if (iiter - iiter / 10 * 10 != 0) {
                        ar = b_A->data[b_A->size[0] * ilastm1 + ilastm1].re * anorm;
                        ai = b_A->data[b_A->size[0] * ilastm1 + ilastm1].im * anorm;
                        if (ai == 0.0) {
                            shift.re = ar / imAij;
                            shift.im = 0.0;
                        } else if (ar == 0.0) {
                            shift.re = 0.0;
                            shift.im = ai / imAij;
                        } else {
                            shift.re = ar / imAij;
                            shift.im = ai / imAij;
                        }
                        ar = b_A->data[b_A->size[0] * ilast + ilast].re * anorm;
                        ai = b_A->data[b_A->size[0] * ilast + ilast].im * anorm;
                        if (ai == 0.0) {
                            ad22.re = ar / imAij;
                            ad22.im = 0.0;
                        } else if (ar == 0.0) {
                            ad22.re = 0.0;
                            ad22.im = ai / imAij;
                        } else {
                            ad22.re = ar / imAij;
                            ad22.im = ai / imAij;
                        }
                        t1_re = (shift.re + ad22.re) * 0.5;
                        t1_im = (shift.im + ad22.im) * 0.5;
                        ar = b_A->data[b_A->size[0] * ilast + ilastm1].re * anorm;
                        ai = b_A->data[b_A->size[0] * ilast + ilastm1].im * anorm;
                        if (ai == 0.0) {
                            reAij = ar / imAij;
                            b_temp2 = 0.0;
                        } else if (ar == 0.0) {
                            reAij = 0.0;
                            b_temp2 = ai / imAij;
                        } else {
                            reAij = ar / imAij;
                            b_temp2 = ai / imAij;
                        }
                        ar = b_A->data[b_A->size[0] * ilastm1 + ilast].re * anorm;
                        ai = b_A->data[b_A->size[0] * ilastm1 + ilast].im * anorm;
                        if (ai == 0.0) {
                            ar /= imAij;
                            ai = 0.0;
                        } else if (ar == 0.0) {
                            ar = 0.0;
                            ai /= imAij;
                        } else {
                            ar /= imAij;
                            ai /= imAij;
                        }
                        shift_im = shift.re * ad22.im + shift.im * ad22.re;
                        shift.re = ((t1_re * t1_re - t1_im * t1_im) + (reAij * ar - b_temp2 * ai)) - (shift.re * ad22.re - shift.im * ad22.im);
                        shift.im = ((t1_re * t1_im + t1_im * t1_re) + (reAij * ai + b_temp2 * ar)) - shift_im;
                        parallelizationTest_sqrt(&shift);
                        if ((t1_re - ad22.re) * shift.re + (t1_im - ad22.im) * shift.im <= 0.0) {
                            shift.re += t1_re;
                            shift.im += t1_im;
                        } else {
                            shift.re = t1_re - shift.re;
                            shift.im = t1_im - shift.im;
                        }
                    } else {
                        ar = b_A->data[b_A->size[0] * ilastm1 + ilast].re * anorm;
                        ai = b_A->data[b_A->size[0] * ilastm1 + ilast].im * anorm;
                        if (ai == 0.0) {
                            reAij = ar / imAij;
                            b_temp2 = 0.0;
                        } else if (ar == 0.0) {
                            reAij = 0.0;
                            b_temp2 = ai / imAij;
                        } else {
                            reAij = ar / imAij;
                            b_temp2 = ai / imAij;
                        }
                        eshift_re += reAij;
                        eshift_im += b_temp2;
                        shift.re = eshift_re;
                        shift.im = eshift_im;
                    }
                    j = ilastm1;
                    jp1 = ilastm1 + 1;
                    exitg2 = false;
                    while ((!exitg2) && (j + 1 > ifirst)) {
                        istart = j + 1;
                        ctemp.re = b_A->data[b_A->size[0] * j + j].re * anorm - shift.re * imAij;
                        ctemp.im = b_A->data[b_A->size[0] * j + j].im * anorm - shift.im * imAij;
                        reAij = fabs(ctemp.re) + fabs(ctemp.im);
                        b_temp2 = (fabs(b_A->data[b_A->size[0] * j + jp1].re) + fabs(b_A->data[b_A->size[0] * j + jp1].im)) * anorm;
                        t1_re = reAij;
                        if (b_temp2 > reAij) {
                            t1_re = b_temp2;
                        }
                        if ((t1_re < 1.0) && (t1_re != 0.0)) {
                            reAij /= t1_re;
                            b_temp2 /= t1_re;
                        }
                        if ((fabs(b_A->data[(j - 1) * b_A->size[0] + j].re) + fabs(b_A->data[(j - 1) * b_A->size[0] + j].im)) * b_temp2 <= reAij * scale) {
                            goto90 = true;
                            exitg2 = true;
                        } else {
                            jp1 = j;
                            j--;
                        }
                    }
                    if (!goto90) {
                        istart = ifirst;
                        ctemp.re = b_A->data[((ifirst - 1) * b_A->size[0] + ifirst) - 1].re * anorm - shift.re * imAij;
                        ctemp.im = b_A->data[((ifirst - 1) * b_A->size[0] + ifirst) - 1].im * anorm - shift.im * imAij;
                        goto90 = true;
                    }
                }
                if (goto90) {
                    goto90 = false;
                    anorm_0.re = b_A->data[(istart - 1) * b_A->size[0] + istart].re * anorm;
                    anorm_0.im = b_A->data[(istart - 1) * b_A->size[0] + istart].im * anorm;
                    parallelizationTest_xzlartg_c(ctemp, anorm_0, &reAij, &ad22);
                    j = istart;
                    jp1 = istart - 2;
                    while (j < ilast + 1) {
                        if (j > istart) {
                            b_A_0 = b_A->data[(b_A->size[0] * jp1 + j) - 1];
                            b_A_1 = b_A->data[b_A->size[0] * jp1 + j];
                            parallelizationTest_xzlartg(b_A_0, b_A_1, &reAij, &ad22, &shift);
                            b_A->data[(j + b_A->size[0] * jp1) - 1] = shift;
                            b_A->data[j + b_A->size[0] * jp1].re = 0.0;
                            b_A->data[j + b_A->size[0] * jp1].im = 0.0;
                        }
                        for (jp1 = j - 1; jp1 + 1 <= ilastm; jp1++) {
                            b_temp2 = b_A->data[b_A->size[0] * jp1 + j].re * ad22.re - b_A->data[b_A->size[0] * jp1 + j].im * ad22.im;
                            t1_re = b_A->data[b_A->size[0] * jp1 + j].im * ad22.re + b_A->data[b_A->size[0] * jp1 + j].re * ad22.im;
                            shift.re = b_A->data[(b_A->size[0] * jp1 + j) - 1].re * reAij + b_temp2;
                            shift.im = b_A->data[(b_A->size[0] * jp1 + j) - 1].im * reAij + t1_re;
                            b_temp2 = b_A->data[(b_A->size[0] * jp1 + j) - 1].re;
                            t1_re = b_A->data[(b_A->size[0] * jp1 + j) - 1].im;
                            t1_im = b_A->data[(b_A->size[0] * jp1 + j) - 1].im;
                            ar = b_A->data[(b_A->size[0] * jp1 + j) - 1].re;
                            b_A->data[j + b_A->size[0] * jp1].re = b_A->data[b_A->size[0] * jp1 + j].re * reAij - (ad22.re * b_temp2 + ad22.im * t1_re);
                            b_A->data[j + b_A->size[0] * jp1].im = b_A->data[b_A->size[0] * jp1 + j].im * reAij - (ad22.re * t1_im - ad22.im * ar);
                            b_A->data[(j + b_A->size[0] * jp1) - 1] = shift;
                        }
                        ad22.re = -ad22.re;
                        ad22.im = -ad22.im;
                        jp1 = j;
                        if (ilast + 1 < j + 2) {
                            jp1 = ilast - 1;
                        }
                        for (b_i = ifrstm - 1; b_i + 1 <= jp1 + 2; b_i++) {
                            b_temp2 = b_A->data[(j - 1) * b_A->size[0] + b_i].re * ad22.re - b_A->data[(j - 1) * b_A->size[0] + b_i].im * ad22.im;
                            t1_re = b_A->data[(j - 1) * b_A->size[0] + b_i].im * ad22.re + b_A->data[(j - 1) * b_A->size[0] + b_i].re * ad22.im;
                            shift.re = b_A->data[b_A->size[0] * j + b_i].re * reAij + b_temp2;
                            shift.im = b_A->data[b_A->size[0] * j + b_i].im * reAij + t1_re;
                            b_temp2 = b_A->data[b_A->size[0] * j + b_i].re;
                            t1_re = b_A->data[b_A->size[0] * j + b_i].im;
                            t1_im = b_A->data[b_A->size[0] * j + b_i].im;
                            ar = b_A->data[b_A->size[0] * j + b_i].re;
                            b_A->data[b_i + b_A->size[0] * (j - 1)].re = b_A->data[(j - 1) * b_A->size[0] + b_i].re * reAij - (ad22.re * b_temp2 + ad22.im * t1_re);
                            b_A->data[b_i + b_A->size[0] * (j - 1)].im = b_A->data[(j - 1) * b_A->size[0] + b_i].im * reAij - (ad22.re * t1_im - ad22.im * ar);
                            b_A->data[b_i + b_A->size[0] * j] = shift;
                        }
                        jp1 = j - 1;
                        j++;
                    }
                }
                jiter++;
            }
        } else {
            guard2 = true;
            exitg1 = 1;
        }
    } while (exitg1 == 0);
} else {
    guard1 = true;
}
if (guard2) {
    if (firstNonZero) {
        *info = ilast;
        for (ifirst = 0; ifirst + 1 <= ilast + 1; ifirst++) {
            alpha1->data[ifirst].re = (rtNaN);
            alpha1->data[ifirst].im = 0.0;
            beta1->data[ifirst].re = (rtNaN);
            beta1->data[ifirst].im = 0.0;
        }
    } else {
        guard1 = true;
    }
}
if (guard1) {
    for (ilast = 0; ilast + 1 < ilo; ilast++) {
        alpha1->data[ilast] = b_A->data[b_A->size[0] * ilast + ilast];
    }
}
parallelization_emxFree_creal_T(&b_A);
(*info)++;


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static void parallelizationTest_xzgeev(const emxArray_real_T_parallelizati_T *A, int32_T *info, emxArray_creal_T_parallelizat_T *alpha1, emxArray_creal_T_parallelizat_T *beta1)
    {
          emxArray_creal_T_parallelizat_T *At;
real_T anrm;
boolean_T ilascl;
int32_T ihi;
real_T absxk;
int32_T k;
real_T cfromc;
real_T ctoc;
boolean_T notdone;
real_T cto1;
real_T mul;
emxArray_creal_T_parallelizat_T *b_A;
int32_T ii;
int32_T nzcount;
int32_T jj;
creal_T atmp;
int32_T jrow;
creal_T s;
int32_T jcol;
real_T b_mul;
boolean_T At_0;
creal_T b_A_0;
creal_T b_A_1;
boolean_T exitg1;
int32_T exitg2;
int32_T exitg3;
boolean_T exitg4;

parallelizatio_emxInit_creal_T1(&At, 2);
ii = At->size[0] * At->size[1];
At->size[0] = A->size[0];
At->size[1] = A->size[1];
parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)At, ii, sizeof(creal_T));
nzcount = A->size[0] * A->size[1];
for (ii = 0; ii < nzcount; ii++) {
    At->data[ii].re = A->data[ii];
    At->data[ii].im = 0.0;
}
*info = 0;
ii = alpha1->size[0];
alpha1->size[0] = At->size[0];


parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)alpha1, ii, sizeof(creal_T));
nzcount = At->size[0];
for (ii = 0; ii < nzcount; ii++) {
    alpha1->data[ii].re = 0.0;
    alpha1->data[ii].im = 0.0;
}
ii = beta1->size[0];
beta1->size[0] = At->size[0];


parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)beta1, ii, sizeof(creal_T));
nzcount = At->size[0];
for (ii = 0; ii < nzcount; ii++) {
    beta1->data[ii].re = 0.0;
    beta1->data[ii].im = 0.0;
}
if (!((At->size[0] == 0) || (At->size[1] == 0))) {
    anrm = 0.0;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= At->size[0] * At->size[1] - 1)) {
        absxk = rt_hypotd_snf(At->data[k].re, At->data[k].im);
        if (rtIsNaN(absxk)) {
            anrm = (rtNaN);
            exitg1 = true;
        } else {
            if (absxk > anrm) {
                anrm = absxk;
            }
            k++;
        }
    }
    if (!((!rtIsInf(anrm)) && (!rtIsNaN(anrm)))) {
        ii = alpha1->size[0];
        alpha1->size[0] = At->size[0];


        parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)alpha1, ii, sizeof(creal_T));
        nzcount = At->size[0];
        for (ii = 0; ii < nzcount; ii++) {
            alpha1->data[ii].re = (rtNaN);
            alpha1->data[ii].im = 0.0;
        }
        ii = beta1->size[0];
        beta1->size[0] = At->size[0];


        parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)beta1, ii, sizeof(creal_T));
        nzcount = At->size[0];
        for (ii = 0; ii < nzcount; ii++) {
            beta1->data[ii].re = (rtNaN);
            beta1->data[ii].im = 0.0;
        }
    } else {
        ilascl = false;
        absxk = anrm;
        if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
            absxk = 6.7178761075670888E-139;
            ilascl = true;
        } else {
            if (anrm > 1.4885657073574029E+138) {
                absxk = 1.4885657073574029E+138;
                ilascl = true;
            }
        }
        if (ilascl) {
            cfromc = anrm;
            ctoc = absxk;
            notdone = true;
            while (notdone) {
                b_mul = cfromc * 2.0041683600089728E-292;
                cto1 = ctoc / 4.9896007738368E+291;
                if ((b_mul > ctoc) && (ctoc != 0.0)) {
                    mul = 2.0041683600089728E-292;
                    cfromc = b_mul;
                } else if (cto1 > cfromc) {
                    mul = 4.9896007738368E+291;
                    ctoc = cto1;
                } else {
                    mul = ctoc / cfromc;
                    notdone = false;
                }
                k = At->size[0];
                ihi = At->size[1];
                nzcount = k * ihi;
                for (ii = 0; ii < nzcount; ii++) {
                    At->data[ii].re *= mul;
                    At->data[ii].im *= mul;
                }
            }
        }
        k = 0;
        ihi = At->size[0];
        parallelizatio_emxInit_creal_T1(&b_A, 2);
        if (At->size[0] <= 1) {
            ihi = 1;
        } else {
            do {
                exitg3 = 0;
                jrow = 0;
                jcol = 0;
                notdone = false;
                ii = ihi;
                exitg1 = false;
                while ((!exitg1) && (ii > 0)) {
                    nzcount = 0;
                    jrow = ii;
                    jcol = ihi;
                    jj = 1;
                    exitg4 = false;
                    while ((!exitg4) && (jj <= ihi)) {
                        At_0 = ((At->data[((jj - 1) * At->size[0] + ii) - 1].re != 0.0) || (At->data[((jj - 1) * At->size[0] + ii) - 1].im != 0.0));
                        if (At_0 || (ii == jj)) {
                            if (nzcount == 0) {
                                jcol = jj;
                                nzcount = 1;
                                jj++;
                            } else {
                                nzcount = 2;
                                exitg4 = true;
                            }
                        } else {
                            jj++;
                        }
                    }
                    if (nzcount < 2) {
                        notdone = true;
                        exitg1 = true;
                    } else {
                        ii--;
                    }
                }
                if (!notdone) {
                    exitg3 = 2;
                } else {
                    ii = b_A->size[0] * b_A->size[1];
                    b_A->size[0] = At->size[0];
                    b_A->size[1] = At->size[1];
                    parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)b_A, ii, sizeof(creal_T));
                    nzcount = At->size[0] * At->size[1];
                    for (ii = 0; ii < nzcount; ii++) {
                        b_A->data[ii] = At->data[ii];
                    }
                    if (jrow != ihi) {
                        for (ii = 0; ii + 1 <= At->size[0]; ii++) {
                            atmp = b_A->data[(b_A->size[0] * ii + jrow) - 1];
                            b_A->data[(jrow + b_A->size[0] * ii) - 1] = b_A->data[(b_A->size[0] * ii + ihi) - 1];
                            b_A->data[(ihi + b_A->size[0] * ii) - 1] = atmp;
                        }
                    }
                    if (jcol != ihi) {
                        for (jrow = 0; jrow + 1 <= ihi; jrow++) {
                            atmp = b_A->data[(jcol - 1) * b_A->size[0] + jrow];
                            b_A->data[jrow + b_A->size[0] * (jcol - 1)] = b_A->data[(ihi - 1) * b_A->size[0] + jrow];
                            b_A->data[jrow + b_A->size[0] * (ihi - 1)] = atmp;
                        }
                    }
                    ii = At->size[0] * At->size[1];
                    At->size[0] = b_A->size[0];
                    At->size[1] = b_A->size[1];
                    parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)At, ii, sizeof(creal_T));
                    nzcount = b_A->size[0] * b_A->size[1];
                    for (ii = 0; ii < nzcount; ii++) {
                        At->data[ii] = b_A->data[ii];
                    }
                    ihi--;
                    if (ihi == 1) {
                        exitg3 = 1;
                    }
                }
            } while (exitg3 == 0);
            if (exitg3 == 1) {
            } else {
                do {
                    exitg2 = 0;
                    jrow = 0;
                    jcol = 0;
                    notdone = false;
                    ii = k + 1;
                    exitg1 = false;
                    while ((!exitg1) && (ii <= ihi)) {
                        nzcount = 0;
                        jrow = ihi;
                        jcol = ii;
                        jj = k + 1;
                        exitg4 = false;
                        while ((!exitg4) && (jj <= ihi)) {
                            At_0 = ((At->data[((ii - 1) * At->size[0] + jj) - 1].re != 0.0) || (At->data[((ii - 1) * At->size[0] + jj) - 1].im != 0.0));
                            if (At_0 || (jj == ii)) {
                                if (nzcount == 0) {
                                    jrow = jj;
                                    nzcount = 1;
                                    jj++;
                                } else {
                                    nzcount = 2;
                                    exitg4 = true;
                                }
                            } else {
                                jj++;
                            }
                        }
                        if (nzcount < 2) {
                            notdone = true;
                            exitg1 = true;
                        } else {
                            ii++;
                        }
                    }
                    if (!notdone) {
                        exitg2 = 1;
                    } else {
                        ii = b_A->size[0] * b_A->size[1];
                        b_A->size[0] = At->size[0];
                        b_A->size[1] = At->size[1];
                        parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)b_A, ii, sizeof(creal_T));
                        nzcount = At->size[0] * At->size[1];
                        for (ii = 0; ii < nzcount; ii++) {
                            b_A->data[ii] = At->data[ii];
                        }
                        if (k + 1 != jrow) {
                            for (ii = k; ii + 1 <= At->size[0]; ii++) {
                                atmp = b_A->data[(b_A->size[0] * ii + jrow) - 1];
                                b_A->data[(jrow + b_A->size[0] * ii) - 1] = b_A->data[b_A->size[0] * ii + k];
                                b_A->data[k + b_A->size[0] * ii] = atmp;
                            }
                        }
                        if (k + 1 != jcol) {
                            for (jrow = 0; jrow + 1 <= ihi; jrow++) {
                                atmp = b_A->data[(jcol - 1) * b_A->size[0] + jrow];
                                b_A->data[jrow + b_A->size[0] * (jcol - 1)] = b_A->data[b_A->size[0] * k + jrow];
                                b_A->data[jrow + b_A->size[0] * k] = atmp;
                            }
                        }
                        ii = At->size[0] * At->size[1];
                        At->size[0] = b_A->size[0];
                        At->size[1] = b_A->size[1];
                        parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)At, ii, sizeof(creal_T));
                        nzcount = b_A->size[0] * b_A->size[1];
                        for (ii = 0; ii < nzcount; ii++) {
                            At->data[ii] = b_A->data[ii];
                        }
                        k++;
                        if (k + 1 == ihi) {
                            exitg2 = 1;
                        }
                    }
                } while (exitg2 == 0);
            }
        }
        ii = b_A->size[0] * b_A->size[1];
        b_A->size[0] = At->size[0];
        b_A->size[1] = At->size[1];
        parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)b_A, ii, sizeof(creal_T));
        nzcount = At->size[0] * At->size[1];
        for (ii = 0; ii < nzcount; ii++) {
            b_A->data[ii] = At->data[ii];
        }
        if ((!(At->size[0] <= 1)) && (!(ihi < k + 3))) {
            for (jcol = k; jcol + 1 < ihi - 1; jcol++) {
                for (jrow = ihi - 1; jrow + 1 > jcol + 2; jrow--) {
                    b_A_0 = b_A->data[(b_A->size[0] * jcol + jrow) - 1];
                    b_A_1 = b_A->data[b_A->size[0] * jcol + jrow];
                    parallelizationTest_xzlartg(b_A_0, b_A_1, &cfromc, &s, &atmp);
                    b_A->data[(jrow + b_A->size[0] * jcol) - 1] = atmp;
                    b_A->data[jrow + b_A->size[0] * jcol].re = 0.0;
                    b_A->data[jrow + b_A->size[0] * jcol].im = 0.0;
                    for (ii = jcol + 1; ii + 1 <= At->size[0]; ii++) {
                        ctoc = b_A->data[b_A->size[0] * ii + jrow].re * s.re - b_A->data[b_A->size[0] * ii + jrow].im * s.im;
                        b_mul = b_A->data[b_A->size[0] * ii + jrow].im * s.re + b_A->data[b_A->size[0] * ii + jrow].re * s.im;
                        atmp.re = b_A->data[(b_A->size[0] * ii + jrow) - 1].re * cfromc + ctoc;
                        atmp.im = b_A->data[(b_A->size[0] * ii + jrow) - 1].im * cfromc + b_mul;
                        ctoc = b_A->data[(b_A->size[0] * ii + jrow) - 1].re;
                        b_mul = b_A->data[(b_A->size[0] * ii + jrow) - 1].im;
                        cto1 = b_A->data[(b_A->size[0] * ii + jrow) - 1].im;
                        mul = b_A->data[(b_A->size[0] * ii + jrow) - 1].re;
                        b_A->data[jrow + b_A->size[0] * ii].re = b_A->data[b_A->size[0] * ii + jrow].re * cfromc - (s.re * ctoc + s.im * b_mul);
                        b_A->data[jrow + b_A->size[0] * ii].im = b_A->data[b_A->size[0] * ii + jrow].im * cfromc - (s.re * cto1 - s.im * mul);
                        b_A->data[(jrow + b_A->size[0] * ii) - 1] = atmp;
                    }
                    s.re = -s.re;
                    s.im = -s.im;
                    for (ii = 0; ii + 1 <= ihi; ii++) {
                        ctoc = b_A->data[(jrow - 1) * b_A->size[0] + ii].re * s.re - b_A->data[(jrow - 1) * b_A->size[0] + ii].im * s.im;
                        b_mul = b_A->data[(jrow - 1) * b_A->size[0] + ii].im * s.re + b_A->data[(jrow - 1) * b_A->size[0] + ii].re * s.im;
                        atmp.re = b_A->data[b_A->size[0] * jrow + ii].re * cfromc + ctoc;
                        atmp.im = b_A->data[b_A->size[0] * jrow + ii].im * cfromc + b_mul;
                        ctoc = b_A->data[b_A->size[0] * jrow + ii].re;
                        b_mul = b_A->data[b_A->size[0] * jrow + ii].im;
                        cto1 = b_A->data[b_A->size[0] * jrow + ii].im;
                        mul = b_A->data[b_A->size[0] * jrow + ii].re;
                        b_A->data[ii + b_A->size[0] * (jrow - 1)].re = b_A->data[(jrow - 1) * b_A->size[0] + ii].re * cfromc - (s.re * ctoc + s.im * b_mul);
                        b_A->data[ii + b_A->size[0] * (jrow - 1)].im = b_A->data[(jrow - 1) * b_A->size[0] + ii].im * cfromc - (s.re * cto1 - s.im * mul);
                        b_A->data[ii + b_A->size[0] * jrow] = atmp;
                    }
                }
            }
        }




        parallelizationTest_xzhgeqz(b_A, k + 1, ihi, info, alpha1, beta1);
        parallelization_emxFree_creal_T(&b_A);
        if (!((*info != 0) || (!ilascl))) {
            while (ilascl) {
                cfromc = absxk * 2.0041683600089728E-292;
                ctoc = anrm / 4.9896007738368E+291;
                if ((cfromc > anrm) && (anrm != 0.0)) {
                    b_mul = 2.0041683600089728E-292;
                    absxk = cfromc;
                } else if (ctoc > absxk) {
                    b_mul = 4.9896007738368E+291;
                    anrm = ctoc;
                } else {
                    b_mul = anrm / absxk;
                    ilascl = false;
                }
                ii = alpha1->size[0];


                parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)alpha1, ii, sizeof(creal_T));
                nzcount = alpha1->size[0];
                for (ii = 0; ii < nzcount; ii++) {
                    alpha1->data[ii].re *= b_mul;
                    alpha1->data[ii].im *= b_mul;
                }
            }
        }
    }
}
parallelization_emxFree_creal_T(&At);


    }
	
    

    

        
              
    
        
     

    
        
	
    static void parallelization_emxInit_real_T1(emxArray_real_T_parallelizati_T **pEmxArray, int32_T numDimensions)
    {
          emxArray_real_T_parallelizati_T *emxArray;
int32_T i;
*pEmxArray = (emxArray_real_T_parallelizati_T *)malloc(sizeof(emxArray_real_T_parallelizati_T));
emxArray = *pEmxArray;
emxArray->data = (real_T *)NULL;
emxArray->numDimensions = numDimensions;
emxArray->size = (int32_T *)malloc((uint32_T)(sizeof(int32_T) * numDimensions));
emxArray->allocatedSize = 0;
emxArray->canFreeData = true;
for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
}


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static real_T parallelizationTest_xnrm2(int32_T n, const emxArray_real_T_parallelizati_T *x, int32_T ix0)
    {
          real_T y;
real_T scale;
int32_T kend;
real_T absxk;
real_T t;
int32_T k;
y = 0.0;
if (!(n < 1)) {
    if (n == 1) {
        y = fabs(x->data[ix0 - 1]);
    } else {
        scale = 2.2250738585072014E-308;
        kend = (ix0 + n) - 1;
        for (k = ix0; k <= kend; k++) {
            absxk = fabs(x->data[k - 1]);
            if (absxk > scale) {
                t = scale / absxk;
                y = y * t * t + 1.0;
                scale = absxk;
            } else {
                t = absxk / scale;
                y += t * t;
            }
        }
        y = scale * sqrt(y);
    }
}
return y;


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static void parallelizationTest_xscal(int32_T n, real_T a, emxArray_real_T_parallelizati_T *x, int32_T ix0)
    {
          int32_T b;
int32_T k;
b = (ix0 + n) - 1;
for (k = ix0; k <= b; k++) {
    x->data[k - 1] *= a;
}


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static void parallelizationTest_xgehrd(emxArray_real_T_parallelizati_T *a)
    {
          emxArray_real_T_parallelizati_T *tau;
int32_T n;
emxArray_real_T_parallelizati_T *work;
int32_T im1n;
int32_T in;
int32_T ia0;
real_T alpha1;
int32_T i;
real_T xnorm;
int32_T knt;
int32_T rowleft;
int32_T iy;
int32_T e;
int32_T b_ia;
int32_T jy;
real_T temp;
int32_T b_ix;
int32_T d_ix;
int32_T exitg1;
boolean_T exitg2;

parallelization_emxInit_real_T1(&tau, 1);
parallelization_emxInit_real_T1(&work, 1);
n = a->size[0];
if (a->size[0] < 1) {
    im1n = 1;
} else {
    im1n = a->size[0];
}
i = tau->size[0];
tau->size[0] = im1n - 1;
parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)tau, i, sizeof(real_T));
im1n = a->size[0];
i = work->size[0];
work->size[0] = im1n;
parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)work, i, sizeof(real_T));
for (i = 0; i < im1n; i++) {
    work->data[i] = 0.0;
}
for (i = 0; i + 1 < n; i++) {
    im1n = i * n + 2;
    in = (i + 1) * n;
    ia0 = i + 3;
    if (!(ia0 < n)) {
        ia0 = n;
    }
    ia0 += i * n;
    jy = (n - i) - 2;
    alpha1 = a->data[(a->size[0] * i + i) + 1];
    temp = 0.0;
    if (!(jy + 1 <= 0)) {


        xnorm = parallelizationTest_xnrm2(jy, a, ia0);
        if (xnorm != 0.0) {



            xnorm = rt_hypotd_snf(a->data[(a->size[0] * i + i) + 1], xnorm);
            if (a->data[(a->size[0] * i + i) + 1] >= 0.0) {
                xnorm = -xnorm;
            }
            if (fabs(xnorm) < 1.0020841800044864E-292) {
                knt = 0;
                do {
                    knt++;


                    parallelizationTest_xscal(jy, 9.9792015476736E+291, a, ia0);
                    xnorm *= 9.9792015476736E+291;
                    alpha1 *= 9.9792015476736E+291;
                } while (!(fabs(xnorm) >= 1.0020841800044864E-292));


                xnorm = rt_hypotd_snf(alpha1, parallelizationTest_xnrm2(jy, a, ia0));
                if (alpha1 >= 0.0) {
                    xnorm = -xnorm;
                }
                temp = (xnorm - alpha1) / xnorm;


                parallelizationTest_xscal(jy, 1.0 / (alpha1 - xnorm), a, ia0);
                for (ia0 = 1; ia0 <= knt; ia0++) {
                    xnorm *= 1.0020841800044864E-292;
                }
                alpha1 = xnorm;
            } else {
                temp = (xnorm - a->data[(a->size[0] * i + i) + 1]) / xnorm;




                parallelizationTest_xscal(jy, 1.0 / (a->data[(i + a->size[0] * i) + 1] - xnorm), a, ia0);
                alpha1 = xnorm;
            }
        }
    }
    tau->data[i] = temp;
    a->data[(i + a->size[0] * i) + 1] = 1.0;
    knt = (n - i) - 1;
    jy = (i + im1n) - 1;
    if (tau->data[i] != 0.0) {
        ia0 = jy + knt;
        while ((knt > 0) && (a->data[ia0 - 1] == 0.0)) {
            knt--;
            ia0--;
        }
        ia0 = n;
        exitg2 = false;
        while ((!exitg2) && (ia0 > 0)) {
            rowleft = in + ia0;
            d_ix = rowleft;
            do {
                exitg1 = 0;
                if ((n > 0) && (d_ix <= (knt - 1) * n + rowleft)) {
                    if (a->data[d_ix - 1] != 0.0) {
                        exitg1 = 1;
                    } else {
                        d_ix += n;
                    }
                } else {
                    ia0--;
                    exitg1 = 2;
                }
            } while (exitg1 == 0);
            if (exitg1 == 1) {
                exitg2 = true;
            }
        }
    } else {
        knt = 0;
        ia0 = 0;
    }
    if (knt > 0) {
        if (ia0 != 0) {
            for (rowleft = 1; rowleft <= ia0; rowleft++) {
                work->data[rowleft - 1] = 0.0;
            }
            rowleft = jy;
            d_ix = ((knt - 1) * n + in) + 1;
            b_ix = in + 1;
            while ((n > 0) && (b_ix <= d_ix)) {
                iy = 0;
                e = (b_ix + ia0) - 1;
                for (b_ia = b_ix; b_ia <= e; b_ia++) {
                    work->data[iy] += a->data[b_ia - 1] * a->data[rowleft];
                    iy++;
                }
                rowleft++;
                b_ix += n;
            }
        }
        if (!(-tau->data[i] == 0.0)) {
            rowleft = in;
            for (d_ix = 1; d_ix <= knt; d_ix++) {
                if (a->data[jy] != 0.0) {
                    temp = a->data[jy] * -tau->data[i];
                    b_ix = 0;
                    iy = ia0 + rowleft;
                    for (e = rowleft; e + 1 <= iy; e++) {
                        a->data[e] += work->data[b_ix] * temp;
                        b_ix++;
                    }
                }
                jy++;
                rowleft += n;
            }
        }
    }
    knt = (n - i) - 1;
    im1n = (i + im1n) - 1;
    ia0 = (i + in) + 2;
    if (tau->data[i] != 0.0) {
        in = im1n + knt;
        while ((knt > 0) && (a->data[in - 1] == 0.0)) {
            knt--;
            in--;
        }
        in = (n - i) - 1;
        exitg2 = false;
        while ((!exitg2) && (in > 0)) {
            jy = (in - 1) * n + ia0;
            rowleft = jy;
            do {
                exitg1 = 0;
                if (rowleft <= (jy + knt) - 1) {
                    if (a->data[rowleft - 1] != 0.0) {
                        exitg1 = 1;
                    } else {
                        rowleft++;
                    }
                } else {
                    in--;
                    exitg1 = 2;
                }
            } while (exitg1 == 0);
            if (exitg1 == 1) {
                exitg2 = true;
            }
        }
    } else {
        knt = 0;
        in = 0;
    }
    if (knt > 0) {
        if (in != 0) {
            for (jy = 1; jy <= in; jy++) {
                work->data[jy - 1] = 0.0;
            }
            jy = 0;
            rowleft = (in - 1) * n + ia0;
            d_ix = ia0;
            while ((n > 0) && (d_ix <= rowleft)) {
                b_ix = im1n;
                temp = 0.0;
                iy = (d_ix + knt) - 1;
                for (e = d_ix; e <= iy; e++) {
                    temp += a->data[e - 1] * a->data[b_ix];
                    b_ix++;
                }
                work->data[jy] += temp;
                jy++;
                d_ix += n;
            }
        }
        if (!(-tau->data[i] == 0.0)) {
            ia0--;
            jy = 0;
            for (rowleft = 1; rowleft <= in; rowleft++) {
                if (work->data[jy] != 0.0) {
                    temp = work->data[jy] * -tau->data[i];
                    d_ix = im1n;
                    b_ix = knt + ia0;
                    for (iy = ia0; iy + 1 <= b_ix; iy++) {
                        a->data[iy] += a->data[d_ix] * temp;
                        d_ix++;
                    }
                }
                jy++;
                ia0 += n;
            }
        }
    }
    a->data[(i + a->size[0] * i) + 1] = alpha1;
}
parallelizationT_emxFree_real_T(&work);
parallelizationT_emxFree_real_T(&tau);


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static real_T parallelizationTest_xnrm2_e(int32_T n, const real_T x[3])
    {
          real_T y;
real_T scale;
real_T absxk;
real_T t;
int32_T k;
y = 0.0;
if (!(n < 1)) {
    if (n == 1) {
        y = fabs(x[1]);
    } else {
        scale = 2.2250738585072014E-308;
        for (k = 2; k <= n + 1; k++) {
            absxk = fabs(x[k - 1]);
            if (absxk > scale) {
                t = scale / absxk;
                y = y * t * t + 1.0;
                scale = absxk;
            } else {
                t = absxk / scale;
                y += t * t;
            }
        }
        y = scale * sqrt(y);
    }
}
return y;


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static real_T parallelizationTest_xzlarfg(int32_T n, real_T *alpha1, real_T x[3])
    {
          real_T tau;
real_T xnorm;
int32_T knt;
int32_T c_k;

tau = 0.0;
if (!(n <= 0)) {



    xnorm = parallelizationTest_xnrm2_e(n - 1, x);
    if (xnorm != 0.0) {


        xnorm = rt_hypotd_snf(*alpha1, xnorm);
        if (*alpha1 >= 0.0) {
            xnorm = -xnorm;
        }
        if (fabs(xnorm) < 1.0020841800044864E-292) {
            knt = 0;
            do {
                knt++;
                for (c_k = 1; c_k + 1 <= n; c_k++) {
                    x[c_k] *= 9.9792015476736E+291;
                }
                xnorm *= 9.9792015476736E+291;
                *alpha1 *= 9.9792015476736E+291;
            } while (!(fabs(xnorm) >= 1.0020841800044864E-292));





            xnorm = rt_hypotd_snf(*alpha1, parallelizationTest_xnrm2_e(n - 1, x));
            if (*alpha1 >= 0.0) {
                xnorm = -xnorm;
            }
            tau = (xnorm - *alpha1) / xnorm;
            *alpha1 = 1.0 / (*alpha1 - xnorm);
            for (c_k = 1; c_k + 1 <= n; c_k++) {
                x[c_k] *= *alpha1;
            }
            for (c_k = 1; c_k <= knt; c_k++) {
                xnorm *= 1.0020841800044864E-292;
            }
            *alpha1 = xnorm;
        } else {
            tau = (xnorm - *alpha1) / xnorm;
            *alpha1 = 1.0 / (*alpha1 - xnorm);
            for (knt = 1; knt + 1 <= n; knt++) {
                x[knt] *= *alpha1;
            }
            *alpha1 = xnorm;
        }
    }
}
return tau;


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static void parallelizationTest_xdlanv2(real_T *a, real_T *b, real_T *c, real_T *d, real_T *rt1r, real_T *rt1i, real_T *rt2r, real_T *rt2i, real_T *cs, real_T *sn)
    {
          real_T temp;
real_T p;
real_T bcmax;
real_T bcmis;
real_T scale;
real_T z;
int32_T b_0;
int32_T c_0;

if (*c == 0.0) {
    *cs = 1.0;
    *sn = 0.0;
} else if (*b == 0.0) {
    *cs = 0.0;
    *sn = 1.0;
    temp = *d;
    *d = *a;
    *a = temp;
    *b = -*c;
    *c = 0.0;
} else if ((*a - *d == 0.0) && ((*b < 0.0) != (*c < 0.0))) {
    *cs = 1.0;
    *sn = 0.0;
} else {
    temp = *a - *d;
    p = 0.5 * temp;
    bcmax = fmax(fabs(*b), fabs(*c));
    if (!(*b < 0.0)) {
        b_0 = 1;
    } else {
        b_0 = -1;
    }
    if (!(*c < 0.0)) {
        c_0 = 1;
    } else {
        c_0 = -1;
    }
    bcmis = fmin(fabs(*b), fabs(*c)) * (real_T)b_0 * (real_T)c_0;
    scale = fmax(fabs(p), bcmax);
    z = p / scale * p + bcmax / scale * bcmis;
    if (z >= 8.8817841970012523E-16) {
        if (!(p < 0.0)) {
            temp = sqrt(scale) * sqrt(z);
        } else {
            temp = -(sqrt(scale) * sqrt(z));
        }
        z = p + temp;
        *a = *d + z;
        *d -= bcmax / z * bcmis;


        bcmax = rt_hypotd_snf(*c, z);
        *cs = z / bcmax;
        *sn = *c / bcmax;
        *b -= *c;
        *c = 0.0;
    } else {
        bcmis = *b + *c;
        bcmax = rt_hypotd_snf(bcmis, temp);
        *cs = sqrt((fabs(bcmis) / bcmax + 1.0) * 0.5);
        if (!(bcmis < 0.0)) {
            b_0 = 1;
        } else {
            b_0 = -1;
        }
        *sn = -(p / (bcmax * *cs)) * (real_T)b_0;
        temp = *a * *cs + *b * *sn;
        p = -*a * *sn + *b * *cs;
        bcmax = *c * *cs + *d * *sn;
        bcmis = -*c * *sn + *d * *cs;
        *b = p * *cs + bcmis * *sn;
        *c = -temp * *sn + bcmax * *cs;
        temp = ((temp * *cs + bcmax * *sn) + (-p * *sn + bcmis * *cs)) * 0.5;
        *a = temp;
        *d = temp;
        if (*c != 0.0) {
            if (*b != 0.0) {
                if ((*b < 0.0) == (*c < 0.0)) {
                    z = sqrt(fabs(*b));
                    bcmis = sqrt(fabs(*c));
                    p = z * bcmis;
                    if (*c < 0.0) {
                        p = -p;
                    }
                    bcmax = 1.0 / sqrt(fabs(*b + *c));
                    *a = temp + p;
                    *d = temp - p;
                    *b -= *c;
                    *c = 0.0;
                    p = z * bcmax;
                    bcmax *= bcmis;
                    temp = *cs * p - *sn * bcmax;
                    *sn = *cs * bcmax + *sn * p;
                    *cs = temp;
                }
            } else {
                *b = -*c;
                *c = 0.0;
                temp = *cs;
                *cs = -*sn;
                *sn = temp;
            }
        }
    }
}
*rt1r = *a;
*rt2r = *d;
if (*c == 0.0) {
    *rt1i = 0.0;
    *rt2i = 0.0;
} else {
    *rt1i = sqrt(fabs(*b)) * sqrt(fabs(*c));
    *rt2i = -*rt1i;
}


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static int32_T parallelizationTest_eml_dlahqr(emxArray_real_T_parallelizati_T *h)
    {
          int32_T info;
int32_T n;
int32_T ldh;
real_T v[3];
real_T SMLNUM;
int32_T i;
int32_T L;
boolean_T goto150;
int32_T k;
real_T tst;
real_T htmp1;
real_T ab;
real_T ba;
real_T aa;
real_T h12;
int32_T m;
int32_T nr;
int32_T hoffset;
real_T unusedU2;
real_T unusedU3;
real_T b_v[3];
int32_T b_k;
int32_T b_j;
real_T b_y;
real_T c_y;
int32_T b_ix;
boolean_T exitg1;
boolean_T exitg2;
boolean_T exitg3;
n = h->size[0];
ldh = h->size[0];
info = 0;
if (!((n == 0) || (1 == n))) {
    for (i = 0; i + 1 <= n - 3; i++) {
        h->data[(i + h->size[0] * i) + 2] = 0.0;
        h->data[(i + h->size[0] * i) + 3] = 0.0;
    }
    if (1 <= n - 2) {
        h->data[(n + h->size[0] * (n - 3)) - 1] = 0.0;
    }
    SMLNUM = (real_T)n / 2.2204460492503131E-16 * 2.2250738585072014E-308;
    i = n - 1;
    exitg1 = false;
    while ((!exitg1) && (i + 1 >= 1)) {
        L = 1;
        goto150 = false;
        b_ix = 0;
        exitg2 = false;
        while ((!exitg2) && (b_ix < 31)) {
            k = i;
            exitg3 = false;
            while ((!exitg3) && ((k + 1 > L) && (!(fabs(h->data[(k - 1) * h->size[0] + k]) <= SMLNUM)))) {
                tst = fabs(h->data[((k - 1) * h->size[0] + k) - 1]) + fabs(h->data[h->size[0] * k + k]);
                if (tst == 0.0) {
                    if (k - 1 >= 1) {
                        tst = fabs(h->data[((k - 2) * h->size[0] + k) - 1]);
                    }
                    if (k + 2 <= n) {
                        tst += fabs(h->data[(h->size[0] * k + k) + 1]);
                    }
                }
                if (fabs(h->data[(k - 1) * h->size[0] + k]) <= 2.2204460492503131E-16 * tst) {
                    htmp1 = fabs(h->data[(k - 1) * h->size[0] + k]);
                    tst = fabs(h->data[(h->size[0] * k + k) - 1]);
                    if (htmp1 > tst) {
                        ab = htmp1;
                        ba = tst;
                    } else {
                        ab = tst;
                        ba = htmp1;
                    }
                    htmp1 = fabs(h->data[h->size[0] * k + k]);
                    tst = fabs(h->data[((k - 1) * h->size[0] + k) - 1] - h->data[h->size[0] * k + k]);
                    if (htmp1 > tst) {
                        aa = htmp1;
                        htmp1 = tst;
                    } else {
                        aa = tst;
                    }
                    tst = aa + ab;
                    if (ab / tst * ba <= fmax(SMLNUM, aa / tst * htmp1 * 2.2204460492503131E-16)) {
                        exitg3 = true;
                    } else {
                        k--;
                    }
                } else {
                    k--;
                }
            }
            L = k + 1;
            if (k + 1 > 1) {
                h->data[k + h->size[0] * (k - 1)] = 0.0;
            }
            if (k + 1 >= i) {
                goto150 = true;
                exitg2 = true;
            } else {
                if (b_ix == 10) {
                    tst = fabs(h->data[((k + 1) * h->size[0] + k) + 2]) + fabs(h->data[(h->size[0] * k + k) + 1]);
                    htmp1 = h->data[h->size[0] * k + k] + 0.75 * tst;
                    h12 = -0.4375 * tst;
                    aa = tst;
                    ba = htmp1;
                } else if (b_ix == 20) {
                    tst = fabs(h->data[((i - 2) * h->size[0] + i) - 1]) + fabs(h->data[(i - 1) * h->size[0] + i]);
                    htmp1 = h->data[h->size[0] * i + i] + 0.75 * tst;
                    h12 = -0.4375 * tst;
                    aa = tst;
                    ba = htmp1;
                } else {
                    htmp1 = h->data[((i - 1) * h->size[0] + i) - 1];
                    aa = h->data[(i - 1) * h->size[0] + i];
                    h12 = h->data[(h->size[0] * i + i) - 1];
                    ba = h->data[h->size[0] * i + i];
                }
                tst = ((fabs(htmp1) + fabs(h12)) + fabs(aa)) + fabs(ba);
                if (tst == 0.0) {
                    htmp1 = 0.0;
                    ba = 0.0;
                    ab = 0.0;
                    aa = 0.0;
                } else {
                    htmp1 /= tst;
                    aa /= tst;
                    h12 /= tst;
                    ba /= tst;
                    ab = (htmp1 + ba) / 2.0;
                    htmp1 = (htmp1 - ab) * (ba - ab) - h12 * aa;
                    aa = sqrt(fabs(htmp1));
                    if (htmp1 >= 0.0) {
                        htmp1 = ab * tst;
                        ab = htmp1;
                        ba = aa * tst;
                        aa = -ba;
                    } else {
                        htmp1 = ab + aa;
                        ab -= aa;
                        if (fabs(htmp1 - ba) <= fabs(ab - ba)) {
                            htmp1 *= tst;
                            ab = htmp1;
                        } else {
                            ab *= tst;
                            htmp1 = ab;
                        }
                        ba = 0.0;
                        aa = 0.0;
                    }
                }
                m = i - 1;
                exitg3 = false;
                while ((!exitg3) && (m >= k + 1)) {
                    tst = (fabs(h->data[((m - 1) * h->size[0] + m) - 1] - ab) + fabs(aa)) + fabs(h->data[(m - 1) * h->size[0] + m]);
                    h12 = h->data[(m - 1) * h->size[0] + m] / tst;
                    v[0] = ((h->data[((m - 1) * h->size[0] + m) - 1] - ab) / tst * (h->data[((m - 1) * h->size[0] + m) - 1] - htmp1) + h->data[(h->size[0] * m + m) - 1] * h12) - aa / tst * ba;
                    v[1] = (((h->data[((m - 1) * h->size[0] + m) - 1] + h->data[h->size[0] * m + m]) - htmp1) - ab) * h12;
                    v[2] = h->data[(h->size[0] * m + m) + 1] * h12;
                    tst = (fabs(v[0]) + fabs(v[1])) + fabs(v[2]);
                    h12 = v[0] / tst;
                    v[0] /= tst;
                    b_y = v[1] / tst;
                    v[1] /= tst;
                    c_y = v[2] / tst;
                    v[2] /= tst;
                    if ((k + 1 == m) || (fabs(h->data[((m - 2) * h->size[0] + m) - 1]) * (fabs(b_y) + fabs(c_y)) <= ((fabs(h->data[((m - 2) * h->size[0] + m) - 2]) + fabs(h->data[((m - 1) * h->size[0] + m) - 1])) + fabs(h->data[h->size[0] * m + m])) * (2.2204460492503131E-16 * fabs(h12)))) {
                        exitg3 = true;
                    } else {
                        m--;
                    }
                }
                for (b_k = m; b_k <= i; b_k++) {
                    nr = (i - b_k) + 2;
                    if (3 < nr) {
                        nr = 3;
                    }
                    if (b_k > m) {
                        hoffset = (b_k - 2) * ldh + b_k;
                        for (b_j = -1; b_j + 2 <= nr; b_j++) {
                            v[b_j + 1] = h->data[b_j + hoffset];
                        }
                    }
                    htmp1 = v[0];
                    b_v[0] = v[0];
                    b_v[1] = v[1];
                    b_v[2] = v[2];
                    tst = parallelizationTest_xzlarfg(nr, &htmp1, b_v);
                    v[1] = b_v[1];
                    v[2] = b_v[2];
                    v[0] = htmp1;
                    if (b_k > m) {
                        h->data[(b_k + h->size[0] * (b_k - 2)) - 1] = htmp1;
                        h->data[b_k + h->size[0] * (b_k - 2)] = 0.0;
                        if (b_k < i) {
                            h->data[(b_k + h->size[0] * (b_k - 2)) + 1] = 0.0;
                        }
                    } else {
                        if (m > k + 1) {
                            h->data[(b_k + h->size[0] * (b_k - 2)) - 1] = h->data[((b_k - 2) * h->size[0] + b_k) - 1] * (1.0 - tst);
                        }
                    }
                    htmp1 = b_v[1];
                    ab = tst * b_v[1];
                    if (nr == 3) {
                        aa = b_v[2];
                        h12 = tst * b_v[2];
                        for (nr = b_k - 1; nr + 1 <= n; nr++) {
                            ba = (h->data[(h->size[0] * nr + b_k) - 1] + h->data[h->size[0] * nr + b_k] * htmp1) + h->data[(h->size[0] * nr + b_k) + 1] * aa;
                            h->data[(b_k + h->size[0] * nr) - 1] -= ba * tst;
                            h->data[b_k + h->size[0] * nr] -= ba * ab;
                            h->data[(b_k + h->size[0] * nr) + 1] -= ba * h12;
                        }
                        hoffset = b_k + 3;
                        nr = i + 1;
                        if (hoffset < nr) {
                            nr = hoffset;
                        }
                        for (hoffset = 0; hoffset + 1 <= nr; hoffset++) {
                            ba = (h->data[(b_k - 1) * h->size[0] + hoffset] + h->data[h->size[0] * b_k + hoffset] * htmp1) + h->data[(b_k + 1) * h->size[0] + hoffset] * aa;
                            h->data[hoffset + h->size[0] * (b_k - 1)] = h->data[(b_k - 1) * h->size[0] + hoffset] - ba * tst;
                            h->data[hoffset + h->size[0] * b_k] -= ba * ab;
                            h->data[hoffset + h->size[0] * (b_k + 1)] = h->data[(b_k + 1) * h->size[0] + hoffset] - ba * h12;
                        }
                    } else {
                        if (nr == 2) {
                            for (nr = b_k - 1; nr + 1 <= n; nr++) {
                                ba = h->data[(h->size[0] * nr + b_k) - 1] + h->data[h->size[0] * nr + b_k] * htmp1;
                                h->data[(b_k + h->size[0] * nr) - 1] -= ba * tst;
                                h->data[b_k + h->size[0] * nr] -= ba * ab;
                            }
                            for (nr = 0; nr + 1 <= i + 1; nr++) {
                                ba = h->data[(b_k - 1) * h->size[0] + nr] + h->data[h->size[0] * b_k + nr] * htmp1;
                                h->data[nr + h->size[0] * (b_k - 1)] = h->data[(b_k - 1) * h->size[0] + nr] - ba * tst;
                                h->data[nr + h->size[0] * b_k] -= ba * ab;
                            }
                        }
                    }
                }
                b_ix++;
            }
        }
        if (!goto150) {
            info = i + 1;
            exitg1 = true;
        } else {
            if (!((i + 1 == L) || (!(L == i)))) {
                ab = h->data[((i - 1) * h->size[0] + i) - 1];
                ba = h->data[(h->size[0] * i + i) - 1];
                aa = h->data[(i - 1) * h->size[0] + i];
                h12 = h->data[h->size[0] * i + i];
                parallelizationTest_xdlanv2(&ab, &ba, &aa, &h12, &b_y, &c_y, &unusedU2, &unusedU3, &tst, &htmp1);
                h->data[(i + h->size[0] * (i - 1)) - 1] = ab;
                h->data[(i + h->size[0] * i) - 1] = ba;
                h->data[i + h->size[0] * (i - 1)] = aa;
                h->data[i + h->size[0] * i] = h12;
                if (n > i + 1) {
                    b_ix = (n - i) - 1;
                    if (!(b_ix < 1)) {
                        k = ((i + 1) * ldh + i) - 1;
                        m = (i + 1) * ldh + i;
                        for (b_k = 1; b_k <= b_ix; b_k++) {
                            ab = tst * h->data[k] + htmp1 * h->data[m];
                            h->data[m] = tst * h->data[m] - htmp1 * h->data[k];
                            h->data[k] = ab;
                            m += ldh;
                            k += ldh;
                        }
                    }
                }
                if (!(i - 1 < 1)) {
                    b_ix = (i - 1) * ldh;
                    k = i * ldh;
                    for (m = 1; m < i; m++) {
                        ab = tst * h->data[b_ix] + htmp1 * h->data[k];
                        h->data[k] = tst * h->data[k] - htmp1 * h->data[b_ix];
                        h->data[b_ix] = ab;
                        k++;
                        b_ix++;
                    }
                }
            }
            i = L - 2;
        }
    }
}
return info;


    }
	
    

    

        
              
    
        
    /* Function for MATLAB Function: '<Root>/MATLAB Function' */

    
        
	
    static void parallelizationTest_eig(const emxArray_real_T_parallelizati_T *A, emxArray_creal_T_parallelizat_T *V)
    {
          emxArray_creal_T_parallelizat_T *beta1;
emxArray_creal_T_parallelizat_T *T;
boolean_T b_p;
emxArray_real_T_parallelizati_T *b_A;
emxArray_real_T_parallelizati_T *h;
int32_T istart;
int32_T jend;
int32_T b_j;
int32_T b_i;
real_T r;
real_T rt2r;
real_T rt2i;
real_T cs;
real_T sn;
real_T bim;
real_T mu1_re;
real_T mu1_im;
real_T t1_re;
real_T t1_im;
int32_T exitg1;
boolean_T exitg2;

if ((A->size[0] == 0) || (A->size[1] == 0)) {
    istart = V->size[0];
    V->size[0] = A->size[0];


    parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)V, istart, sizeof(creal_T));
    jend = A->size[0];
    for (istart = 0; istart < jend; istart++) {
        V->data[istart].re = 0.0;
        V->data[istart].im = 0.0;
    }
} else if ((A->size[0] == 1) && (A->size[1] == 1)) {
    istart = V->size[0];
    V->size[0] = 1;


    parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)V, istart, sizeof(creal_T));
    V->data[0].re = A->data[0];
    V->data[0].im = 0.0;
} else {
    b_p = (A->size[0] == A->size[1]);
    if (b_p) {
        istart = 0;
        exitg2 = false;
        while ((!exitg2) && (istart <= A->size[1] - 1)) {
            jend = 0;
            do {
                exitg1 = 0;
                if (jend <= istart) {
                    if (!(A->data[A->size[0] * istart + jend] == A->data[A->size[0] * jend + istart])) {
                        b_p = false;
                        exitg1 = 1;
                    } else {
                        jend++;
                    }
                } else {
                    istart++;
                    exitg1 = 2;
                }
            } while (exitg1 == 0);
            if (exitg1 == 1) {
                exitg2 = true;
            }
        }
    }
    if (b_p) {
        parallelizationT_emxInit_real_T(&b_A, 2);
        istart = b_A->size[0] * b_A->size[1];
        b_A->size[0] = A->size[0];
        b_A->size[1] = A->size[1];
        parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)b_A, istart, sizeof(real_T));
        jend = A->size[0] * A->size[1];
        for (istart = 0; istart < jend; istart++) {
            b_A->data[istart] = A->data[istart];
        }
        parallelizationT_emxInit_real_T(&h, 2);
        parallelizationTest_xgehrd(b_A);
        parallelizationTest_eml_dlahqr(b_A);
        istart = h->size[0] * h->size[1];
        h->size[0] = b_A->size[0];
        h->size[1] = b_A->size[1];
        parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)h, istart, sizeof(real_T));
        jend = b_A->size[0] * b_A->size[1];
        for (istart = 0; istart < jend; istart++) {
            h->data[istart] = b_A->data[istart];
        }
        if ((!((b_A->size[0] == 0) || (b_A->size[1] == 0))) && (!(3 >= b_A->size[0]))) {
            istart = 4;
            if (b_A->size[0] - 4 < b_A->size[1] - 1) {
                jend = b_A->size[0] - 3;
            } else {
                jend = b_A->size[1];
            }
            for (b_j = 1; b_j <= jend; b_j++) {
                for (b_i = istart; b_i <= b_A->size[0]; b_i++) {
                    h->data[(b_i + h->size[0] * (b_j - 1)) - 1] = 0.0;
                }
                if (b_j >= 1) {
                    istart++;
                }
            }
        }
        parallelizationT_emxFree_real_T(&b_A);
        parallelizatio_emxInit_creal_T1(&T, 2);
        istart = T->size[0] * T->size[1];
        T->size[0] = h->size[0];
        T->size[1] = h->size[1];
        parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)T, istart, sizeof(creal_T));
        jend = h->size[0] * h->size[1];
        for (istart = 0; istart < jend; istart++) {
            T->data[istart].re = h->data[istart];
            T->data[istart].im = 0.0;
        }
        istart = h->size[0];
        if (h->size[1] < h->size[0]) {
            istart = h->size[1];
        }
        if (istart != 0) {
            for (jend = istart - 1; jend + 1 >= 2; jend--) {
                if (h->data[(jend - 1) * h->size[0] + jend] != 0.0) {
                    r = h->data[((jend - 1) * h->size[0] + jend) - 1];
                    t1_re = h->data[(h->size[0] * jend + jend) - 1];
                    t1_im = h->data[(jend - 1) * h->size[0] + jend];
                    mu1_re = h->data[h->size[0] * jend + jend];
                    parallelizationTest_xdlanv2(&r, &t1_re, &t1_im, &mu1_re, &bim, &mu1_im, &rt2r, &rt2i, &cs, &sn);
                    mu1_re = bim - h->data[h->size[0] * jend + jend];
                    r = rt_hypotd_snf(rt_hypotd_snf(mu1_re, mu1_im), h->data[(jend - 1) * h->size[0] + jend]);
                    if (mu1_im == 0.0) {
                        mu1_re /= r;
                        mu1_im = 0.0;
                    } else if (mu1_re == 0.0) {
                        mu1_re = 0.0;
                        mu1_im /= r;
                    } else {
                        mu1_re /= r;
                        mu1_im /= r;
                    }
                    r = h->data[(jend - 1) * h->size[0] + jend] / r;
                    for (b_j = jend - 1; b_j + 1 <= istart; b_j++) {
                        t1_re = T->data[(T->size[0] * b_j + jend) - 1].re;
                        t1_im = T->data[(T->size[0] * b_j + jend) - 1].im;
                        bim = T->data[(T->size[0] * b_j + jend) - 1].re;
                        rt2r = T->data[(T->size[0] * b_j + jend) - 1].im;
                        rt2i = T->data[(T->size[0] * b_j + jend) - 1].im;
                        cs = T->data[(T->size[0] * b_j + jend) - 1].re;
                        T->data[(jend + T->size[0] * b_j) - 1].re = T->data[T->size[0] * b_j + jend].re * r + (mu1_re * bim + mu1_im * rt2r);
                        T->data[(jend + T->size[0] * b_j) - 1].im = T->data[T->size[0] * b_j + jend].im * r + (mu1_re * rt2i - mu1_im * cs);
                        rt2i = T->data[T->size[0] * b_j + jend].re * mu1_re - T->data[T->size[0] * b_j + jend].im * mu1_im;
                        cs = T->data[T->size[0] * b_j + jend].im * mu1_re + T->data[T->size[0] * b_j + jend].re * mu1_im;
                        T->data[jend + T->size[0] * b_j].re = rt2i - r * t1_re;
                        T->data[jend + T->size[0] * b_j].im = cs - r * t1_im;
                    }
                    for (b_j = 0; b_j + 1 <= jend + 1; b_j++) {
                        t1_re = T->data[(jend - 1) * T->size[0] + b_j].re;
                        t1_im = T->data[(jend - 1) * T->size[0] + b_j].im;
                        rt2i = T->data[(jend - 1) * T->size[0] + b_j].re * mu1_re - T->data[(jend - 1) * T->size[0] + b_j].im * mu1_im;
                        cs = T->data[(jend - 1) * T->size[0] + b_j].im * mu1_re + T->data[(jend - 1) * T->size[0] + b_j].re * mu1_im;
                        bim = T->data[T->size[0] * jend + b_j].re;
                        rt2r = T->data[T->size[0] * jend + b_j].im;
                        T->data[b_j + T->size[0] * (jend - 1)].re = r * bim + rt2i;
                        T->data[b_j + T->size[0] * (jend - 1)].im = r * rt2r + cs;
                        bim = T->data[T->size[0] * jend + b_j].re;
                        rt2r = T->data[T->size[0] * jend + b_j].im;
                        rt2i = T->data[T->size[0] * jend + b_j].im;
                        cs = T->data[T->size[0] * jend + b_j].re;
                        T->data[b_j + T->size[0] * jend].re = (mu1_re * bim + mu1_im * rt2r) - r * t1_re;
                        T->data[b_j + T->size[0] * jend].im = (mu1_re * rt2i - mu1_im * cs) - r * t1_im;
                    }
                    T->data[jend + T->size[0] * (jend - 1)].re = 0.0;
                    T->data[jend + T->size[0] * (jend - 1)].im = 0.0;
                }
            }
        }
        parallelizationT_emxFree_real_T(&h);
        istart = V->size[0];
        V->size[0] = T->size[0];


        parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)V, istart, sizeof(creal_T));
        for (istart = 0; istart + 1 <= T->size[0]; istart++) {
            V->data[istart] = T->data[T->size[0] * istart + istart];
        }
        parallelization_emxFree_creal_T(&T);
    } else {
        parallelization_emxInit_creal_T(&beta1, 1);



        parallelizationTest_xzgeev(A, &istart, V, beta1);
        istart = V->size[0];


        parallelizati_emxEnsureCapacity((emxArray__common_parallelizat_T *)V, istart, sizeof(creal_T));
        jend = V->size[0];
        for (istart = 0; istart < jend; istart++) {
            r = V->data[istart].re;
            mu1_im = V->data[istart].im;
            t1_im = beta1->data[istart].re;
            mu1_re = beta1->data[istart].im;
            if (mu1_re == 0.0) {
                if (mu1_im == 0.0) {
                    V->data[istart].re = r / t1_im;
                    V->data[istart].im = 0.0;
                } else if (r == 0.0) {
                    V->data[istart].re = 0.0;
                    V->data[istart].im = mu1_im / t1_im;
                } else {
                    V->data[istart].re = r / t1_im;
                    V->data[istart].im = mu1_im / t1_im;
                }
            } else if (t1_im == 0.0) {
                if (r == 0.0) {
                    V->data[istart].re = mu1_im / mu1_re;
                    V->data[istart].im = 0.0;
                } else if (mu1_im == 0.0) {
                    V->data[istart].re = 0.0;
                    V->data[istart].im = -(r / mu1_re);
                } else {
                    V->data[istart].re = mu1_im / mu1_re;
                    V->data[istart].im = -(r / mu1_re);
                }
            } else {
                t1_re = fabs(t1_im);
                bim = fabs(mu1_re);
                if (t1_re > bim) {
                    t1_re = mu1_re / t1_im;
                    mu1_re = t1_re * mu1_re + t1_im;
                    V->data[istart].re = (t1_re * mu1_im + r) / mu1_re;
                    V->data[istart].im = (mu1_im - t1_re * r) / mu1_re;
                } else if (bim == t1_re) {
                    t1_im = t1_im > 0.0 ? 0.5 : -0.5;
                    mu1_re = mu1_re > 0.0 ? 0.5 : -0.5;
                    V->data[istart].re = (r * t1_im + mu1_im * mu1_re) / t1_re;
                    V->data[istart].im = (mu1_im * t1_im - r * mu1_re) / t1_re;
                } else {
                    t1_re = t1_im / mu1_re;
                    mu1_re += t1_re * t1_im;
                    V->data[istart].re = (t1_re * r + mu1_im) / mu1_re;
                    V->data[istart].im = (t1_re * mu1_im - r) / mu1_re;
                }
            }
        }
        parallelization_emxFree_creal_T(&beta1);
    }
}


    }
	
    

    


  
        
        
          
    /* Model output function */
            static void parallelizationTest_output(void) 
    {
      
    
    
        
      
      uint32_T r;
int32_T mti;
emxArray_real_T_parallelizati_T *c;
emxArray_creal_T_parallelizat_T *c_0;


      

        
  



         
        
  



                                  /* MATLAB Function: '<Root>/MATLAB Function' */
/* MATLAB Function 'MATLAB Function': '<S1>:1' */
/*  time_par_tests: Perform a parallization test (baseline) */
/* status = time_par_tests_mfile(matrix_size, repeat_times); */
/* [-] how many times we repeat the operation */
/* [-] matrix size */
/*  Specify the seed for MATLAB random number generator */
/* '<S1>:1:10' */
r = 42U;
parallelizationTest_DW.state[0] = 42U;
for (mti = 0; mti < 623; mti++) {
    r = ((r >> 30U ^ r) * 1812433253U + mti) + 1U;
    parallelizationTest_DW.state[mti + 1] = r;
}
parallelizationTest_DW.state[624] = 624U;
/* '<S1>:1:12' */
/* '<S1>:1:13' */
mti = 0;
parallelizationT_emxInit_real_T(&c, 2);
parallelization_emxInit_creal_T(&c_0, 1);
/* MATLAB Function: '<Root>/MATLAB Function' incorporates:
 *  Constant: '<Root>/matrix_size'
 *  Constant: '<Root>/repeat_times'
 */
while (mti <= (int32_T)parallelizationTest_P.repeat_times_Value - 1) {
    /* '<S1>:1:13' */
    /* [-] soring the results */
    /* '<S1>:1:14' */
    parallelizationTest_rand(parallelizationTest_P.matrix_size_Value, c);
    parallelizationTest_eig(c, c_0);
    mti++;
}
parallelization_emxFree_creal_T(&c_0);
parallelizationT_emxFree_real_T(&c);
/* '<S1>:1:17' */






        
  


        

    
    


      
          
  

    }
    

        
    
    /* Model update function */
            static void parallelizationTest_update(void) 
    {
      
    
    
    
    
        
    
    
      
  



          
  



                          
  



          
  
  
    
    

            /* Update absolute time for base rate */
            /* The "clockTick0" counts the number of times the code of this task has 
    * been executed. The absolute time is the multiplication of "clockTick0" 
    * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not 
    * overflow during the application lifespan selected.
      * Timer of this task consists of two 32 bit unsigned integers. 
      * The two integers represent the low bits Timing.clockTick0 and the high bits 
      * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment. 
    */

    if(!(++parallelizationTest_M->Timing.clockTick0)) {
 ++parallelizationTest_M->Timing.clockTickH0; 
} parallelizationTest_M->Timing.t[0] = parallelizationTest_M->Timing.clockTick0 * parallelizationTest_M->Timing.stepSize0 + parallelizationTest_M->Timing.clockTickH0 * parallelizationTest_M->Timing.stepSize0 * 4294967296.0;


        

    


    
    
  
  

    

    
    
    

      
      
    }
    




  



  




  /* Model initialize function */
    static void parallelizationTest_initialize(void)
  { 
      


    
    
    
    
        
    
    





      
    
        {
  uint32_T r;
int32_T mti;

  
  



      
  



                              

/* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
memset(&parallelizationTest_DW.state[0], 0, 625U * sizeof(uint32_T));
r = 5489U;
parallelizationTest_DW.state[0] = 5489U;
for (mti = 0; mti < 623; mti++) {
    r = ((r >> 30U ^ r) * 1812433253U + mti) + 1U;
    parallelizationTest_DW.state[mti + 1] = r;
}
parallelizationTest_DW.state[624] = 624U;
/* End of SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
        






  
  



          }
    
    
        

  


      
  


  }




      
  


  
    
    /* Model terminate function */
        static void parallelizationTest_terminate(void)

    {
      
      /* (no terminate code required) */



          
  

    }
    
  





  
  
  /*========================================================================*
   * Start of Classic call interface                                        *
   *========================================================================*/
   
  

     
         void MdlOutputs(int_T tid) {
      
        
        parallelizationTest_output();
            UNUSED_PARAMETER(tid);

    }
           
     
         void MdlUpdate(int_T tid) {
      
        parallelizationTest_update();
            UNUSED_PARAMETER(tid);

    }
    
  
   
     void MdlInitializeSizes(void) {
  }
  
   
     void MdlInitializeSampleTimes(void) {
  }
  
  
   
     void MdlInitialize(void) {
  }
    
   
     void MdlStart(void) {
    parallelizationTest_initialize();
  }
  
    
   
     void MdlTerminate(void) {
      parallelizationTest_terminate();
  }
    

  /* Registration function */
  
       RT_MODEL_parallelizationTest_T *parallelizationTest(void) {
        /* Registration code */
          
  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  
  


      
            
            /* initialize real-time model */
            (void) memset((void *)parallelizationTest_M, 0,
sizeof(RT_MODEL_parallelizationTest_T));
            
            
  
  

  
      
      /* Initialize timing info */
        {
          int_T  *mdlTsMap      = parallelizationTest_M->Timing.sampleTimeTaskIDArray;
              mdlTsMap[0] = 0;
          parallelizationTest_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
          parallelizationTest_M->Timing.sampleTimes = (&parallelizationTest_M->Timing.sampleTimesArray[0]);
          parallelizationTest_M->Timing.offsetTimes = (&parallelizationTest_M->Timing.offsetTimesArray[0]);
              /* task periods */
      parallelizationTest_M->Timing.sampleTimes[0] = (0.1);

    /* task offsets */
      parallelizationTest_M->Timing.offsetTimes[0] = (0.0);
        }
      
        rtmSetTPtr(parallelizationTest_M, &parallelizationTest_M->Timing.tArray[0]);
      
        {
          int_T  *mdlSampleHits = parallelizationTest_M->Timing.sampleHitArray;
                mdlSampleHits[0] = 1;
          parallelizationTest_M->Timing.sampleHits = (&mdlSampleHits[0]);
        }

  




	  rtmSetTFinal(parallelizationTest_M, -1);
	    parallelizationTest_M->Timing.stepSize0  = 0.1;


      

    
      
        
  /* Setup for data logging */
  {
      static RTWLogInfo rt_DataLoggingInfo;
      rt_DataLoggingInfo.loggingInterval = NULL;

          parallelizationTest_M->rtwLogInfo = &rt_DataLoggingInfo;

  }


  /* Setup for data logging */
  {

          rtliSetLogXSignalInfo(parallelizationTest_M->rtwLogInfo, (NULL));

          rtliSetLogXSignalPtrs(parallelizationTest_M->rtwLogInfo, (NULL));


        rtliSetLogT(parallelizationTest_M->rtwLogInfo, "tout");

        rtliSetLogX(parallelizationTest_M->rtwLogInfo, "");

        rtliSetLogXFinal(parallelizationTest_M->rtwLogInfo, "");

        rtliSetLogVarNameModifier(parallelizationTest_M->rtwLogInfo, "rt_");

        rtliSetLogFormat(parallelizationTest_M->rtwLogInfo, 4);

        rtliSetLogMaxRows(parallelizationTest_M->rtwLogInfo, 0);

        rtliSetLogDecimation(parallelizationTest_M->rtwLogInfo, 1);


    
      

             rtliSetLogY(parallelizationTest_M->rtwLogInfo, "");


          rtliSetLogYSignalInfo(parallelizationTest_M->rtwLogInfo, (NULL));

          rtliSetLogYSignalPtrs(parallelizationTest_M->rtwLogInfo, (NULL));

  }



        
  
  

    parallelizationTest_M->solverInfoPtr = (&parallelizationTest_M->solverInfo);
    parallelizationTest_M->Timing.stepSize = (0.1);
    rtsiSetFixedStepSize(&parallelizationTest_M->solverInfo, 0.1);
      rtsiSetSolverMode(&parallelizationTest_M->solverInfo, SOLVER_MODE_SINGLETASKING);
  
  
  






        /* parameters */
        parallelizationTest_M->defaultParam = ((real_T *)&parallelizationTest_P);
        

    /* states (dwork) */
    
        

        parallelizationTest_M->dwork = ((void *) &parallelizationTest_DW);
    
        
                    (void) memset((void *)&parallelizationTest_DW,  0,
 sizeof(DW_parallelizationTest_T));
        
        

        
    
        
  
    

    


  

    
      

  
      


    
    
    
  
      /* Initialize Sizes */
        parallelizationTest_M->Sizes.numContStates = (0); /* Number of continuous states */
  parallelizationTest_M->Sizes.numY = (0);  /* Number of model outputs */
  parallelizationTest_M->Sizes.numU = (0);    /* Number of model inputs */
    parallelizationTest_M->Sizes.sysDirFeedThru = (0);  /* The model is not direct feedthrough */
  parallelizationTest_M->Sizes.numSampTimes = (1);   /* Number of sample times */
  parallelizationTest_M->Sizes.numBlocks = (4); /* Number of blocks */
    parallelizationTest_M->Sizes.numBlockIO = (1); /* Number of block outputs */
    parallelizationTest_M->Sizes.numBlockPrms = (2);  /* Sum of parameter "widths" */

        
    return parallelizationTest_M;
  }
  
  /*========================================================================*
   * End of Classic call interface                                          *
   *========================================================================*/




  

  

  

  

		/*========================================================================*
* NI VeriStand Model Framework code generation
*
* Model : parallelizationTest
* Model version : 1.9
* VeriStand Model Framework version : 2017.0.1.0 (2017 f1)
* Source generated on : Tue Sep 08 12:15:36 2020
*========================================================================*/

		/* This file contains automatically generated code for functions
		 * to update the inports and outports of a Simulink/Realtime Workshop
		 * model. Calls to these functions should be made before each step is taken
		 * (inports, call SetExternalInputs) and after each step is taken
		 * (outports, call SetExternalOutputs.)
		*/

		#ifdef NI_ROOTMODEL_parallelizationTest
			#include "ni_modelframework_ex.h"
			#include <stddef.h>
			#include <stdlib.h>
			#include <float.h>
			#include <math.h>
			
			unsigned char ReadSideDirtyFlag = 0, WriteSideDirtyFlag = 0;
			
			/*========================================================================*
			 * Function: NIRT_GetValueByDataType
			 *
			 * Abstract:
			 *		Converting to and from double and datatypes used in the model
			 *
			 * Output Parameters
			 *      ptr : address to the source
			 *      subindex : index value if vector
			 *      type   : the source's data type
			 *      Complex : true if a complex data type
			 *
			 * Returns:
			 *     Return value: 0 if no error
			 *========================================================================*/
			 double NIRT_GetValueByDataType(void* ptr, int32_t subindex, int32_t type, int32_t Complex) 
			{
				switch (type)
				{
							case 0: return (double)(((real_T*)ptr)[subindex]);
							case 1: return (double)(((real32_T*)ptr)[subindex]);
							case 2: return (double)(((int8_T*)ptr)[subindex]);
							case 3: return (double)(((uint8_T*)ptr)[subindex]);
							case 4: return (double)(((int16_T*)ptr)[subindex]);
							case 5: return (double)(((uint16_T*)ptr)[subindex]);
							case 6: return (double)(((int32_T*)ptr)[subindex]);
							case 7: return (double)(((uint32_T*)ptr)[subindex]);
							case 8: return (double)(((boolean_T*)ptr)[subindex]);
							case 10: return NIRT_GetValueByDataType(ptr,subindex,6,Complex);
							case 13: return NIRT_GetValueByDataType(ptr,subindex,7,Complex);
							case 15: return NIRT_GetValueByDataType(ptr,subindex,6,Complex);
							case 16: return NIRT_GetValueByDataType(ptr,subindex,6,Complex);
							case 17: return NIRT_GetValueByDataType(ptr,subindex,3,Complex);
							case 18: return NIRT_GetValueByDataType(ptr,subindex,7,Complex);
							case 21: return (( double *)ptr)[subindex];
							case 24: return (double) (((creal_T *)ptr)[subindex].re);
							case 26: return (( double *)ptr)[subindex];
							case 29: return (( double *)ptr)[subindex];
							case 31: return NIRT_GetValueByDataType(ptr,subindex,0,Complex);
							case 32: return (( double *)ptr)[subindex];
							case 33: return (( double *)ptr)[subindex];
							case 34: return NIRT_GetValueByDataType(ptr,subindex,0,Complex);
							case 35: return NIRT_GetValueByDataType(ptr,subindex,0,Complex);
				}
				// return ((double *)ptr)[subindex];
			    return rtNaN;
			}
			
			 /*========================================================================*
			 * Function: NIRT_SetValueByDataType
			 *
			 * Abstract:
			 *		Converting to and from double and datatypes used in the model
			 *
			 * Output Parameters
			 *      ptr : address to the destination
			 *      subindex : index value if vector
			 *      value : value to set on the destination
			 *      type   : the destination's data type
			 *      Complex : true if a complex data type
			 *
			 * Returns:
			 *     Return value: 0 if no error
			 *========================================================================*/
			 int32_t NIRT_SetValueByDataType(void* ptr, int32_t subindex, double value, int32_t type, int32_t Complex) 
			{
				//Complex is only used for R14.3 and down
				switch (type)
				{
								case 0: ((real_T *)ptr)[subindex] = (real_T)value;
								return NI_OK;
								case 1: ((real32_T *)ptr)[subindex] = (real32_T)value;
								return NI_OK;
								case 2: ((int8_T *)ptr)[subindex] = (int8_T)value;
								return NI_OK;
								case 3: ((uint8_T *)ptr)[subindex] = (uint8_T)value;
								return NI_OK;
								case 4: ((int16_T *)ptr)[subindex] = (int16_T)value;
								return NI_OK;
								case 5: ((uint16_T *)ptr)[subindex] = (uint16_T)value;
								return NI_OK;
								case 6: ((int32_T *)ptr)[subindex] = (int32_T)value;
								return NI_OK;
								case 7: ((uint32_T *)ptr)[subindex] = (uint32_T)value;
								return NI_OK;
								case 8: ((boolean_T *)ptr)[subindex] = (boolean_T)value;
								return NI_OK;
								case 10:
								//Type is renamed. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 6, Complex);
								case 13:
								//Type is matrix. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 7, Complex);
								  case 15:
								  //Type is enum. Call SetValueByDataType on its contained type
								  return NIRT_SetValueByDataType(ptr, subindex, value, 6, Complex);
								  case 16:
								  //Type is enum. Call SetValueByDataType on its contained type
								  return NIRT_SetValueByDataType(ptr, subindex, value, 6, Complex);
								case 17:
								//Type is renamed. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 3, Complex);
								case 18:
								//Type is matrix. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 7, Complex);
								case 21:
								//Type is struct. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);
								//Type is complex.  Set the real portion to the value and set the complex portion to 0.
								case 24: ((creal_T *)ptr)[subindex].re = (real_T)value;
								((creal_T *)ptr)[subindex].im = 0;
								return NI_OK;
								case 26:
								//Type is struct. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);
								case 29:
								//Type is struct. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);
								case 31:
								//Type is matrix. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);
								case 32:
								//Type is struct. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);
								case 33:
								//Type is struct. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);
								case 34:
								//Type is matrix. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);
								case 35:
								//Type is matrix. Call SetValueByDataType on its contained type
								return NIRT_SetValueByDataType(ptr, subindex, value, 0, Complex);
				}
				//No matching datatype conversion
				return NI_ERROR;
			}
				


					extern parallelizationTest_rtModel *S;
		extern _SITexportglobals SITexportglobals;
		

		     /*========================================================================*
     * Function: SetExternalInputs
     *
     * Abstract:
     *		Set data to model ports on the specified task
     *
     * Input Parameters
     *      data : data to set
     *      TaskSampleHit : task id
     *
     * Returns:
     *     Return value: 0 if no error
     *========================================================================*/
     void SetExternalInputs(double* data, int_T* TaskSampleHit)
        {	
        } /* of SetExternalInputs */

		
         int32_t NumInputPorts(void) { return 0; }

			


			

             void SetExternalOutputs(double* data, int_T* TaskSampleHit)
                {
                }

             int32_t NumOutputPorts(void)
                {
                    return NI_OK;
                }

             int32_t NI_InitExternalOutputs()
                {
                    return NI_OK;
                }

		

				
		
			
	
						
			
					
					

				
					
						
						
						
						

							
							
							
						
						
						
						
							
							
							

						
			
					
					

				
					
						
						
						
						

							
							
							
						
						
						
						
							
							
							

			

		/* Undefine parameter macros. The undef allows us to access the real declarations.
		In the Simulink(R) generated code, the parameters are redefined to be the read-side of rtParameter.*/
		#define _NI_UNDEFINE_PARAMS_DBL_BUFFER_
		#include "ni_pglobals.h"
			
	/* All elements by default (including scalars) have 2 dimensions [1,1] */
	static NI_Parameter NI_ParamList[] DataSection(".NIVS.paramlist") =
	{
		{ 0, "parallelizationtest/matrix_size/Value", offsetof(P_parallelizationTest_T,matrix_size_Value), 0, 1, 2, 0, 0 }, 
{ 1, "parallelizationtest/repeat_times/Value", offsetof(P_parallelizationTest_T,repeat_times_Value), 0, 1, 2, 2, 0 }, 

	};
			
	static int32_t NI_ParamListSize DataSection(".NIVS.paramlistsize") = 2;
	static int32_t NI_ParamDimList[] DataSection(".NIVS.paramdimlist") =
	{
					1, 					1, 				/* Parameter at index 0 */
					1, 					1, 				/* Parameter at index 1 */
	};

	
				static NI_Signal NI_SigList[] DataSection(".NIVS.siglist") =
	{












		{ -1, "", -1,"", 0, 0, 0 }
	};
	
	static int32_t NI_SigListSize DataSection(".NIVS.siglistsize") = 0;

		static int32_t NI_VirtualBlockSources[1];

	static int32_t NI_SigDimList[] DataSection(".NIVS.sigdimlist") =
	{		0
	};


			
	static int32_t NI_ExtListSize DataSection(".NIVS.extlistsize") = 0;
	static NI_ExternalIO NI_ExtList[] DataSection(".NIVS.extlist") =
	{
		

		
		{-1, "", 0, 0, 0, 0, 0}
	};

			
			/* This Task List is generated to allow access to the task specs without
			* initializing the model.
			* 0th entry is for scheduler (base rate)
			* rest for multirate model's tasks.
			*/
			 NI_Task NI_TaskList[] DataSection(".NIVS.tasklist") =
			{
					{ 0, 0.1, 0}
			};

			 int32_t NI_NumTasks DataSection(".NIVS.numtasks") = 				1;
			
			static const char* NI_CompiledModelName DataSection(".NIVS.compiledmodelname") = "parallelizationTest";
			static const char* NI_CompiledModelVersion = "1.9";
			static const char* NI_CompiledModelDateTime = "Tue Sep 08 12:15:36 2020";
			static const char* NI_builder DataSection(".NIVS.builder") = "NI Model Framework 2017.0.1.0 (2017 f1) for Simulink Coder 8.12 (R2017a)";
			static const char* NI_BuilderVersion DataSection(".NIVS.builderversion") = "2017.0.1.0";
			
 
 /*========================================================================*
 * Function: NIRT_GetBuildInfo
 *
 * Abstract:
 *	Get the DLL versioning etc information.
 * 
 * Output Parameters:
 *	detail	: String containing model build information.
 *	len		: the build info string length. If a value of "-1" is specified, the minimum buffer size of "detail" is returned as its value. 
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetBuildInfo(char* detail, int32_t* len) 
{
	int32_t msgLength = 0;
	char *msgBuffer = NULL;
	
	/* Message */
	const char msg[] = "%s\nModel Name: %s\nModel Version: %s\nVeriStand Model Framework Version: %s\nCompiled On: %s";
	
	/* There are no console properties to set for VxWorks, because the console is simply serial output data.
	    Just do printf for VxWorks and ignore all console properties. */
	#if ! defined (VXWORKS) && ! defined (kNIOSLinux)
		HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdout, FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	#endif

	/* Print to screen */
	printf("\n*******************************************************************************\n");
	msgLength = printf(msg, NI_builder, NI_CompiledModelName, NI_CompiledModelVersion, NI_BuilderVersion, NI_CompiledModelDateTime);
	printf("\n*******************************************************************************\n");
	
	#if ! defined (VXWORKS) && ! defined (kNIOSLinux)
		SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	#endif

	if (*len == -1)
	{
		/* Return the required minimum buffer size */
		*len = msgLength;
	}
	else
	{
		/* allocate the buffer */
		msgBuffer = (char*)calloc(msgLength + 1, sizeof(char));
		sprintf (msgBuffer, msg, NI_builder, NI_CompiledModelName, NI_CompiledModelVersion, NI_BuilderVersion, NI_CompiledModelDateTime);
		
		if (*len >= msgLength) 
		{
			*len = msgLength + 1;
		}
		
		/* Copy into external buffer */
		strncpy(detail, msgBuffer, *len);
		
		/* Release memory */
		free(msgBuffer);
	}
	
	return NI_OK;
}

 /*========================================================================*
 * Function: NIRT_GetSignalSpec
 *
 * Abstract:
 *	If index == -1, lookup parameter by the ID.
 *	If ID_len == 0 or if ID == null, return number of parameters in model.
 *	Otherwise, lookup parameter by index, and return the information. 
 *
 * Input/Output Parameters:
 *	index		: index of the signal (in/out) 
 *	ID			: ID of signal to be looked up (in), ID of signal at index (out)
 *	ID_len		: length of input ID(in), length of ID (out)
 *	bnlen		: length of buffer blkname (in), length of output blkname (out)
 *	snlen		: length of buffer signame (in), length of output signame (out)
 *
 * Output Parameters:  
 *	blkname		: Name of the source block for the signal
 *	portnum		: port number of the block that is the source of the signal (0 indexed)
 *	signame		: Name of the signal
 *	datatype	: same as with parameters. Currently assuming all data to be double. 
 *	dims		: The port's dimension of length 'numdims'. 
 *	numdims		: the port's number of dimensions. If a value of "-1" is specified, the minimum buffer size of "dims" is returned as its value. 
 *		
 * Returns:
 *	NI_OK if no error(if sigidx == -1, number of signals)
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetSignalSpec(int32_t* sidx, char* ID, int32_t* ID_len, char* blkname, int32_t *bnlen, 
							int32_t *portnum, char* signame, int32_t *snlen, int32_t *dattype, int32_t* dims, int32_t* numdim)
{
	int32_t sigidx = *sidx;
	int32_t i = 0;
	char *addr = NULL;
	char *IDblk = 0;
	int32_t IDport = 0;

	if (sigidx < 0) 
	{
		/* check if ID has been specified. */
		if ((ID != NULL) && (ID_len != NULL) &&  (*ID_len > 0)) 
		{
			/* parse ID into blkname and port */
			addr = strrchr(ID, ':');
			if (addr == NULL)
			{
				return NI_SigListSize;
			}
			
			/* Calculate the char offset into the string after the port */
			i = addr - ID;
			
			/* malformed ID */
			if (i<=0)
			{
				return NI_SigListSize;
			}
			
			IDblk = ID; 
			IDport = atoi(ID+i+1);

			/* lookup the table for matching ID */
			for (i=0; i<NI_SigListSize; i++) 
			{
				/* 11 to accomodate ':','/', port number and null character */
                char *tempID = (char *)calloc(strlen(NI_SigList[i].blockname)+strlen(NI_SigList[i].signalname) + 11, sizeof(char));
                
                if (strlen(NI_SigList[i].signalname)>0)
				{
                    sprintf(tempID,"%s:%d%s%s",NI_SigList[i].blockname,NI_SigList[i].portno+1,"/",NI_SigList[i].signalname);
				}
                else
				{
                    sprintf(tempID,"%s:%d",NI_SigList[i].blockname,NI_SigList[i].portno+1);
				}
				
				if (!strcmp(IDblk,tempID) && IDport==(NI_SigList[i].portno+1))
				{
					break;
				}
				
                free(tempID);
			}
			
			if (i < NI_SigListSize)
			{
				sigidx = *sidx = i;
			}
			else 
			{
				return NI_SigListSize;
			}
			
		} 
		else
		{
			// no index or ID specified.
			return NI_SigListSize;
		}
	}

	if (sigidx>=0 && sigidx<NI_SigListSize) 
	{
		if (ID != NULL) 
		{
			// no need for return string to be null terminated!
			/* 11 to accomodate ':','/', port number and null character */
			char *tempID = (char *)calloc(strlen(NI_SigList[sigidx].blockname)+strlen(NI_SigList[sigidx].signalname)+ 11, sizeof(char));
			
            if (strlen(NI_SigList[sigidx].signalname)>0)
			{
                sprintf(tempID,"%s:%d%s%s",NI_SigList[sigidx].blockname,NI_SigList[sigidx].portno+1,"/",NI_SigList[sigidx].signalname);
			}
            else
			{
                sprintf(tempID,"%s:%d",NI_SigList[sigidx].blockname,NI_SigList[sigidx].portno+1);
			}
			
			if ((int32_t)strlen(tempID)<*ID_len)
			{
				*ID_len = strlen(tempID);
			}
	    	
			strncpy(ID, tempID, *ID_len);
			free(tempID);
		}
	   
		if (blkname != NULL)  
		{
			// no need for return string to be null terminated!
			if ((int32_t)strlen(NI_SigList[sigidx].blockname)<*bnlen)
			{
				*bnlen = strlen(NI_SigList[sigidx].blockname);
			}
				
	      	strncpy(blkname, NI_SigList[sigidx].blockname, *bnlen);
	   	} 
		
	   	if (signame != NULL) 
		{
			// no need for return string to be null terminated!
			if ((int32_t)strlen(NI_SigList[sigidx].signalname)<*snlen)
			{
				*snlen = strlen(NI_SigList[sigidx].signalname);
			}
	      
			strncpy(signame, NI_SigList[sigidx].signalname, *snlen);
	   	}
		
	   	if (portnum != NULL) 
		{
	   		*portnum = NI_SigList[sigidx].portno;
		}
		
	   	if (dattype != NULL) 
		{
	   		*dattype = NI_SigList[sigidx].datatype;
		}
		
		if (numdim != NULL)
		{
			if (*numdim == -1)
			{
				*numdim = NI_SigList[sigidx].numofdims;
			}
			else if (dims != NULL) 
			{
				for (i=0;i < *numdim; i++)
				{
					dims[i] = NI_SigDimList[NI_SigList[sigidx].dimListOffset +i];
				}
			} 
		}

	   	return NI_OK;
	}
	return NI_SigListSize;
}

 /*========================================================================*
 * Function: NIRT_GetParameterIndices
 *
 * Abstract:
 *	Returns an array of indices to tunable parameters
 *
 * Output Parameters:
 *	indices	: buffer to store the parameter indices of length "len"
 *	len		: returns the number of indices. If a value of "-1" is specified, the minimum buffer size of "indices" is returned as its value. 
 *
 * Returns:
 *	NI_OK if no error
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetParameterIndices(int32_t* indices, int32_t* len) 
{
	int32_t i;

	if((len == NULL) || (indices == NULL))
	{
		return NI_ERROR;
	}
	
	if (*len == -1)
	{
		*len = NI_ParamListSize;
	}
	else
	{
		for(i=0; (i < NI_ParamListSize) && (i < *len); i++) 
		{
			indices[i] = NI_ParamList[i].idx;
		}

		*len = i;
	}
	
	return NI_OK;
}

 /*========================================================================*
 * Function: NIRT_GetParameterSpec
 *
 * Abstract:
 *	If index == -1, lookup parameter by the ID.
 *	If ID_len == 0 or if ID == null, return number of parameters in model.
 *	Otherwise, lookup parameter by index, and return the information. 
 *
 * Input/Output Parameters:
 *	paramidx	: index of the parameter(in/out). If a value of "-1" is specified, the parameter's ID is used instead
 *	ID			: ID of parameter to be looked up (in), ID of parameter at index (out)
 *	ID_len		: length of input ID (in), length of ID (out)
 *	pnlen		: length of buffer paramname(in), length of the returned paramname (out)
 *	numdim		: length of buffer dimension(in), length of output dimension (out). If a value of "-1" is specified, the minimum buffer size of "dims" is returned as its value
 *
 * Output Parameters: 
 *	paramname	: Name of the parameter
 *	datatype	: datatype of the parameter (currently assuming 0: double, .. )
 *	dims		: array of dimensions with length 'numdim'
 *		
 * Returns:
 *	NI_OK if no error (if paramidx == -1, number of tunable parameters)
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetParameterSpec(int32_t* pidx, char* ID, int32_t* ID_len, char* paramname, int32_t *pnlen, 
						    int32_t *dattype, int32_t* dims, int32_t* numdim) 
{
	int32_t i = 0;
	int32_t paramidx = *pidx;

	if (paramidx < 0) 
	{
		// check if ID has been specified.
		if ( (ID != NULL) && (ID_len != NULL) && (*ID_len > 0) ) 
		{
			// lookup the table for matching ID
			for (i=0; i < NI_ParamListSize; i++) 
			{
				if (strcmp(ID,NI_ParamList[i].paramname) == 0)
				{
					/* found matching string */
					break;
				}
			}
			
			if (i < NI_ParamListSize) 
			{
				/* note the index into the rtParamAttribs */
				paramidx = *pidx = i;
			}
			else 
			{
				return NI_ParamListSize;
			}
		} 
		else
		{
			// no index or ID specified.
			return NI_ParamListSize;
		}
	}

	if ((paramidx >= 0) && (paramidx<NI_ParamListSize)) 
	{
		if(ID != NULL) 
		{
	    	if ((int32_t)strlen(NI_ParamList[paramidx].paramname) < *ID_len)
			{
				*ID_len = strlen(NI_ParamList[paramidx].paramname);
			}
			strncpy(ID, NI_ParamList[paramidx].paramname, *ID_len);
	   	}
		
	   	if(paramname != NULL) 
		{
			/* no need for return string to be null terminated! */
			if ((int32_t)strlen(NI_ParamList[paramidx].paramname) < *pnlen)
			{
				*pnlen = strlen(NI_ParamList[paramidx].paramname);
			}
		    strncpy(paramname, NI_ParamList[paramidx].paramname, *pnlen);
	   	}
		
	   	if (dattype != NULL) 
		{
	   		*dattype = NI_ParamList[paramidx].datatype;
		}
		
	   	if (numdim != NULL)
		{
			if (*numdim == -1)
			{
				*numdim = NI_ParamList[paramidx].numofdims;
			}
			else if (dims != NULL)
			{
				for (i = 0; i < *numdim; i++)
				{
					dims[i] = NI_ParamDimList[NI_ParamList[paramidx].dimListOffset + i];
				}
			} 
		}
		
	   	return NI_OK;
	}
	return NI_ParamListSize;
}

 /*========================================================================*
 * Function: NIRT_GetExtIOSpec
 *
 * Abstract:
 *	Returns the model's inport or outport specification
 *	
 * Input Parameters: 
 *	index	: index of the task
 *
 * Output Parameters: 
 *	idx		: idx of the IO.
 *	name	: Name of the IO block
 *	tid		: task id
 *	type	: EXT_IN or EXT_OUT
 *	dims	: The port's dimension of length 'numdims'. 
 *	numdims : the port's number of dimensions. If a value of "-1" is specified, the minimum buffer size of "dims" is returned as its value. 
 *		
 * Returns
 *	NI_OK if no error. (if index == -1, return number of tasks in the model) 
 *========================================================================*/
DLL_EXPORT int32_t NIRT_GetExtIOSpec(int32_t index, int32_t *idx, char* name, int32_t* tid, int32_t *type, int32_t *dims, int32_t* numdims) 
{
	if (index == -1) 
	{
		return NI_ExtListSize;
	}
	
	if (idx != NULL) 
	{
		*idx = NI_ExtList[index].idx;
	}
	
	if (name != NULL) 
	{
		int32_t sz = strlen(name);
		strncpy(name, NI_ExtList[index].name, sz-1);
		name[sz-1]=0;
	}
	
	if (tid != NULL) 
	{
		*tid = NI_ExtList[index].TID;
	}
	
	if (type != NULL) 
	{
		*type = NI_ExtList[index].type;
	}

	if (numdims != NULL)
	{
		if (*numdims == -1)
		{
			*numdims = 2;
		}
		else if (numdims != NULL) 
		{
			/* Return port dimensions */
			dims[0] = NI_ExtList[index].dimX;
			dims[1] = NI_ExtList[index].dimY;
		}
	}
	
  	return NI_OK;
}
			
				/*========================================================================*
	 * Function: NI_ProbeOneSignal
	 *
	 * Abstract:
	 *		Helper function to probe one signal. baseaddr must NOT be VIRTUAL_SIG
	 *
	 * Output Parameters
	 *
	 * Returns:
	 *     Return value: Returns the last index value probed in a vector signal
	 *========================================================================*/
	static int32_t NI_ProbeOneSignal(int32_t idx, double *value, int32_t len, int32_t *count, int32_t vOffset, int32_t vLength)
	{
		if (NI_SigList[idx].baseaddr == VIRTUAL_SIG)
		{
			SetSITErrorMessage("NI_ProbeOneSignal: Received request to probe a virtual signal, but was expecting a ground source. Ignoring virtual signal probe. Report this behavior to National Instruments.", 0);
			return 0;
		}
		else
		{
			char *ptr = (char*)((NI_SigList[idx].baseaddr == BLOCKIO_SIG) ? S->blockIO : S->inputs) + (uintptr_t)NI_SigList[idx].addr;
			
			int32_t subindex = (vLength == -1) ? 0 : vOffset;
			int32_t sublength = (vLength == -1) ? NI_SigList[idx].width : (vLength + vOffset);

			while ((subindex < sublength) && (*count < len))			
				value[(*count)++] = NIRT_GetValueByDataType(ptr, subindex++, NI_SigList[idx].datatype, NI_SigList[idx].IsComplex);
		
			return *count;
		}
	}

	 /*========================================================================*
	 * Function: NIRT_ProbeSignals
	 *
	 * Abstract:
	 *	returns the latest signal values. 
	 *
	 * Input Parameters: 
	 *	sigindices	: list of signal indices to be probed.
	 *	numsigs		: length of sigindices array.
	 * 	
	 *		NOTE: (Implementation detail) the sigindices array that is passed in is delimited by a value of -1. 
	 *		Thus the # of valid indices in the sigindices table is min(numsigs, index of value -1) - 1. 
	 *		Reason for subtracting 1, the first index in the array is used for bookkeeping and should be copied
	 *		into the 0th index in the signal values buffer. 
	 *		Also, the 1st index in the signal values buffer should contain the current timestamp. Hence valid 
	 *		signal data should be filled in starting from index 2. Any non-scalar signals should be added to the 
	 *		buffer in row-order. 
	 * 	  
	 * Input/Output Parameters
	 *	num			: (in) length of sigvalues buffer (out) number of values returned in the buffer
	 * 	  
	 * Output Parameters: 
	 *	value		: array of signal values
	 *
	 * Returns:
	 *	NI_OK if no error
	 *========================================================================*/
	DLL_EXPORT int32_t NIRT_ProbeSignals(int32_t* sigindices, int32_t numsigs, double* value, int32_t* len)
	{
		int32_t i = 0;
		int32_t idx = 0;			
		int32_t count = 0;
		
		if (!SITexportglobals.inCriticalSection)
		{
			SetSITErrorMessage("SignalProbe should only be called between ScheduleTasks and PostOutputs",1);
		}
				
		/* Get the index to the first signal */
		if ((*len > 1) && (numsigs > 0)) 
		{
			value[count++] = sigindices[0];
			value[count++] = 0;
		}

		/* Get the second and other signals */
		for (i = 1; (i < numsigs) && (count < *len); i++) 
		{
			idx = sigindices[i];
			
			if (idx < 0)
			{
				break;
			}
			
			if (idx < NI_SigListSize) 
			{
				if (NI_SigList[idx].baseaddr == VIRTUAL_SIG) 
				{
					int32_t vidx = NI_VirtualBlockSources[NI_SigList[idx].addr];	

					NI_ProbeOneSignal(vidx, value, *len, &count, 0, -1);
				}
				else
				{
					NI_ProbeOneSignal(idx, value, *len, &count, 0, -1);
				}
			}
		}
		
		*len = 	count;
		return count;
	}


					 int32_t NI_InitializeParamStruct()
	{
		memcpy(&rtParameter[0], &parallelizationTest_P, sizeof(P_parallelizationTest_T));
		return NI_OK;
	}

	/*  After the model has initialized and updated the parameters in 
		rtParameter[0] (aka parallelizationTest_P) we make a copy to rtParameter[1] so
		that it is double buffered. We also do a memcpy to each task's copy.
	*/
	 int32_t NI_InitParamDoubleBuf()
	{
		int32_t idx = 1;
	#ifdef MULTITASKING
		for (; idx <= NUMST - TID01EQ; idx++)
	#endif
			memcpy(&rtParameter[idx], &rtParameter[0], sizeof(P_parallelizationTest_T));
		return NI_OK;
	}

	static int32_t NI_SetParamTxStatus = NI_OK;

	 /*========================================================================*
	 * Function: NIRT_SetParameter
	 *
	 * Abstract:
	 *	Set parameter value. Called either in scheduler loop or a background loop. 
	 * 	
	 * Input Parameters:
	 *	index	: index of the parameter (as specified in Parameter Information)
	 *	subindex: index in the flattened array, if parameter is n-D array
	 *	val		: Value to set the parameter to
	 *
	 * Returns:
	 *	NI_OK if no error
	 *========================================================================*/
	DLL_EXPORT int32_t NIRT_SetParameter(int32_t index, int32_t subindex, double value)
	{
		char* ptr = NULL;
		
		/* Check bounds */
		if (index >= NI_ParamListSize) 
		{
			SetSITErrorMessage("Parameter index is out of bounds.", 1);
			return NI_SetParamTxStatus=NI_ERROR;
		}
		
		/* Commit parameter values */
		if (index < 0) 
		{				
			if(ReadSideDirtyFlag == 1)	
			{
				memcpy(&rtParameter[1-READSIDE], &rtParameter[READSIDE], sizeof(P_parallelizationTest_T));
				ReadSideDirtyFlag = 0;
					
				if(WriteSideDirtyFlag == 0)
				{
					/* No values to commit */
					return NI_OK;
				}
				else
				{
					SetSITErrorMessage("Parameters have been set inline and from the background loop at the same time. Parameters written from the background loop since the last commit have been lost.", 1);
					
					WriteSideDirtyFlag = 0;
					return NI_ERROR;
				}
			}
			
			/* If an error occurred and we have values to commit, then save to the write side and return error */
			if (NI_SetParamTxStatus == NI_ERROR) 
			{
				// fail the transaction.
				// copy old list of parameters to the failed TX buffer
				if(WriteSideDirtyFlag == 1)
				{
					memcpy(&rtParameter[READSIDE], &rtParameter[1-READSIDE], sizeof(P_parallelizationTest_T));
				}
				
				// reset the status.
				NI_SetParamTxStatus = NI_OK;
				WriteSideDirtyFlag = 0;
				
				return NI_ERROR;
			}
			
			/* If we have values to commit, then save to the write-side */
			if(WriteSideDirtyFlag == 1)
			{
				S->defaultParam = (double *)&rtParameter[1-READSIDE];
				WaitForSingleObject(SITexportglobals.flipCriticalSection, INFINITE);
				READSIDE = 1 - READSIDE;
				SITexportglobals.copyTaskBitfield = 0xFFFFFFFF;
				ReleaseSemaphore(SITexportglobals.flipCriticalSection, 1, NULL);
					
				// Copy back the newly set parameters to the writeside.
				memcpy(&rtParameter[1-READSIDE], &rtParameter[READSIDE], sizeof(P_parallelizationTest_T));
				WriteSideDirtyFlag = 0;
			}
			
			return NI_OK;				
		}

		// verify that subindex is within bounds.
		if (subindex >= NI_ParamList[index].width) 
		{
			SetSITErrorMessage("Parameter subindex is out of bounds.",1);
			return NI_SetParamTxStatus = NI_ERROR;
		}
		
		if(ReadSideDirtyFlag == 1)
		{
			memcpy(&rtParameter[1-READSIDE], &rtParameter[READSIDE], sizeof(P_parallelizationTest_T));
			ReadSideDirtyFlag = 0;
		}
		
		/* Get the parameter's address into the Parameter struct 
		casting to char to perform pointer arithmetic using the byte offset */	
		ptr = (char *)(&rtParameter[1-READSIDE]) + NI_ParamList[index].addr;
		WriteSideDirtyFlag = 1;
		
		/* Convert the incoming double datatype to the parameter's internal datatype and update value */
		return NIRT_SetValueByDataType(ptr, subindex, value, NI_ParamList[index].datatype, NI_ParamList[index].IsComplex);
	}

	 /*========================================================================*
	 * Function: NIRT_SetVectorParameter
	 *
	 * Abstract:
	 *	Sets the value to a parameter array.
	 * 	
	 * Input Parameters:
	 *	index		: index of the parameter as returned by NIRT_GetParameterSpec()
	 *	paramvalues	: array of values to set
	 *	paramlength	: Length of parameter values.
	 *
	 * Returns:
	 *	NI_OK if no error
	 *========================================================================*/
	DLL_EXPORT int32_t NIRT_SetVectorParameter( uint32_t index, const double* paramvalues,  uint32_t paramlength)
	{
		uint32_t i = 0;
		int32_t retval = NI_OK;
		char* ptr = NULL;
		
		/* verify that index is within bounds*/
		if (index >= (uint32_t)NI_ParamListSize) 
		{
			SetSITErrorMessage("Parameter index is out of bounds.", 1);
			return NI_SetParamTxStatus = NI_ERROR;
		}
		
		// verify that subindex is within bounds.
		if (paramlength != (uint32_t)NI_ParamList[index].width) 
		{
			SetSITErrorMessage("Parameter length is incorrect.", 1);
			return NI_SetParamTxStatus = NI_ERROR;
		}
		
		/* If we have pending modified parameters, then copy to write-side */
		if(ReadSideDirtyFlag == 1)
		{
			memcpy(&rtParameter[1-READSIDE], &rtParameter[READSIDE], sizeof(P_parallelizationTest_T));
			ReadSideDirtyFlag = 0;
		}
		
		/* Get the parameter's address into the Parameter struct 
		casting to char to perform pointer arithmetic using the byte offset */
		ptr = (char*)(&rtParameter[1-READSIDE]) + NI_ParamList[index].addr;
		
		while(i < paramlength) 
		{
			/* Convert the incoming double datatype to the parameter's internal datatype and update value */
			retval = retval & NIRT_SetValueByDataType(ptr, i, paramvalues[i], NI_ParamList[index].datatype, NI_ParamList[index].IsComplex);
			i++;
		}
		
		WriteSideDirtyFlag = 1;
		return retval;
	}

	 /*========================================================================*
	 * Function: NIRT_SetScalarParameterInline
	 *
	 * Abstract:
	 *	Sets the value to a parameter immediately without the need of a commit request.
	 *
	 * Input Parameters:
	 *	index		: index of the parameter as returned by NIRT_GetParameterSpec()
	 *	subindex	: offset of the element within the parameter
	 *	paramvalue	: Value to set the parameter to
	 *
	 * Returns:
	 *	NI_OK if no error
	 *========================================================================*/
	DLL_EXPORT int32_t NIRT_SetScalarParameterInline( uint32_t index,  uint32_t subindex,  double paramvalue)
	{
		char* ptr = NULL;
		
		if (index >= (uint32_t)NI_ParamListSize) 
		{
			SetSITErrorMessage("Parameter index is out of bounds.", 1);
			return NI_SetParamTxStatus = NI_ERROR;
		}
		
		// verify that subindex is within bounds.
		if (subindex >= (uint32_t)NI_ParamList[index].width) 
		{
			SetSITErrorMessage("Parameter subindex is out of bounds.", 1);
			return NI_SetParamTxStatus = NI_ERROR;
		}
		
		/* Get the parameter's address into the Parameter struct 
		casting to char to perform pointer arithmetic using the byte offset */
		ptr = (char *)(&rtParameter[READSIDE]) + NI_ParamList[index].addr;
		ReadSideDirtyFlag = 1;
		
		/* Convert the incoming double datatype to the parameter's internal datatype and update value */
		return NIRT_SetValueByDataType(ptr, subindex, paramvalue, NI_ParamList[index].datatype, NI_ParamList[index].IsComplex);
	}

	 /*========================================================================*
	 * Function: NIRT_GetParameter
	 *
	 * Abstract:
	 *	Get the current value of a parameter.
	 * 
	 * Input Parameters: 
	 *	index	: index of the parameter
	 *	subindex: element index into the flattened array if an array
	 * 
	 * Output Parameters:
	 *	val		: value of the parameter 
	 *
	 * Returns:
	 *	NI_OK if no error
	 *========================================================================*/
	DLL_EXPORT int32_t NIRT_GetParameter(int32_t index, int32_t subindex, double *value)
	{
		char* ptr = NULL;
		
		/* Check index boundaries */
		if (index >= NI_ParamListSize || index < 0 || (subindex>=NI_ParamList[index].width))
		{
			return NI_ERROR;
		}

		/* Get the parameter's address into the Parameter struct 
		casting to char to perform pointer arithmetic using the byte offset */
		ptr = (char *)(&rtParameter[READSIDE]) + NI_ParamList[index].addr;
		
		/* Convert the parameter's internal datatype to double and return its value */
		*value = NIRT_GetValueByDataType(ptr, subindex, NI_ParamList[index].datatype, NI_ParamList[index].IsComplex);
		return NI_OK;
	}

	 /*========================================================================*
	 * Function: NIRT_GetVectorParameter
	 *
	 * Abstract:
	 *	Get the current value of a vector parameter.
	 * 
	 * Input Parameters: 
	 *	index: index of the parameter
	 *	paramLength: length of the parameter
	 * 
	 * Output Parameters:
	 *	paramValues: an array of the parameter's value
	 *
	 * Returns:
	 *	NI_OK if no error
	 *========================================================================*/
	DLL_EXPORT int32_t NIRT_GetVectorParameter(uint32_t index, double* paramvalues, uint32_t paramlength)
	{
		char* ptr = NULL;
		uint32_t i = 0;
		
		if (index >= (uint32_t)NI_ParamListSize || index < 0 || (paramlength != (uint32_t)NI_ParamList[index].width))
		{
			return NI_ERROR;
		}

		/* Get the parameter's address into the Parameter struct 
		casting to char to perform pointer arithmetic using the byte offset */
		ptr = (char *)(&rtParameter[READSIDE]) + NI_ParamList[index].addr;
		
		while(i<paramlength) 
		{
			/* Convert the parameter's internal datatype to double and return its value */
			paramvalues[i] = NIRT_GetValueByDataType(ptr, i, NI_ParamList[index].datatype, NI_ParamList[index].IsComplex);
			i++;
		}
		
		return NI_OK;
	}   

			
				
				
					
					
					
					
					
					
					
					
					
							
		
				 /*========================================================================*
				 * Function: NIRT_GetSimState
				 *
				 * Abstract:
				 *
				 * Returns:
				 *	NI_OK if no error
				 *========================================================================*/	
				DLL_EXPORT int32_t NIRT_GetSimState(int32_t* numContStates, char* contStatesNames, double* contStates, int32_t* numDiscStates, char* discStatesNames, double* discStates, int32_t* numClockTicks, char* clockTicksNames, int32_t* clockTicks) 
				{
					int32_t count = 0;
					int32_t idx = 0; 
					

					
					if ((numContStates != NULL) && (numDiscStates != NULL) && (numClockTicks != NULL)) 
					{
						if (*numContStates < 0 || *numDiscStates < 0 || *numClockTicks < 0) 
						{
							
							
							*numContStates = 0;
							*numDiscStates = 625;
							*numClockTicks = NUMST - TID01EQ;
							return NI_OK;
						}
					}
					
					
					
					if ((discStates != NULL) && (discStatesNames != NULL)) 
					{
						idx = 0;
					
 	for (count = 0; count < 625; count++)
	{
								discStates[idx] = NIRT_GetValueByDataType(&parallelizationTest_DW.state, count, 18, 0);	
								strcpy(discStatesNames + (idx++ * 100), "&parallelizationTest_DW.state");
	}
							
					}
					
					if ((clockTicks != NULL) && (clockTicksNames != NULL)) 
					{
						clockTicks[0] = S->Timing.clockTick0;
						strcpy(clockTicksNames, "clockTick0");
					}
					
					 
					return NI_OK;
				}	
		
				 /*========================================================================*
				 * Function: NIRT_SetSimState
				 *
				 * Abstract:
				 *
				 * Returns:
				 *	NI_OK if no error
				 *========================================================================*/
				DLL_EXPORT int32_t NIRT_SetSimState(double* contStates, double* discStates, int32_t* clockTicks)
				{
					int32_t count = 0;
					int32_t idx = 0;
					
					
					
			
					
					if (discStates != NULL) 
					{
						idx = 0;
					
 	for (count = 0; count < 625; count++)
	{
								NIRT_SetValueByDataType(&parallelizationTest_DW.state, count, discStates[idx++], 18, 0);
	}
							
					}
				
					if (clockTicks != NULL) 
					{
						S->Timing.clockTick0 = clockTicks[0];
					}
					
					
					return NI_OK;
				}
		#endif // of NI_ROOTMODEL_parallelizationTest
