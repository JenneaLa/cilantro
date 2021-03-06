/*<html><pre>  -<a                             href="qh-geom_r.htm"
  >-------------------------------</a><a name="TOP">-</a>

  random.h
    header file for random and utility routines

   see qh-geom_r.htm and random_r.c

   Copyright (c) 1993-2015 The Geometry Center.
   $Id: //main/2015/qhull/src/libqhull_r/random_r.h#4 $$Change: 2079 $
   $DateTime: 2016/02/07 17:43:34 $$Author: bbarber $
*/

#ifndef qhDEFrandom
#define qhDEFrandom 1

#include <cilantro/3rd_party/libqhull_r/libqhull_r.h>

/*============= prototypes in alphabetical order ======= */

#ifdef __cplusplus
extern "C" {
#endif

int     qh_argv_to_command(int argc, char *argv[], char* command, int max_size);
int     qh_argv_to_command_size(int argc, char *argv[]);
int     qh_rand(qhT *qh);
void    qh_srand(qhT *qh, int seed);
realT   qh_randomfactor(qhT *qh, realT scale, realT offset);
void    qh_randommatrix(qhT *qh, realT *buffer, int dim, realT **row);
int     qh_strtol(const char *s, char **endp);
double  qh_strtod(const char *s, char **endp);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* qhDEFrandom */



