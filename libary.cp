# 1 "src/library.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "src/library.c"
# 1 "include/main.h" 1



# 1 "include/API.h" 1
# 25 "include/API.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 24 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 367 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 368 "/usr/include/features.h" 2 3 4
# 391 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 392 "/usr/include/features.h" 2 3 4
# 25 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 328 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 711 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 751 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 774 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 811 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 950 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4

# 26 "include/API.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdbool.h" 1 3 4
# 27 "include/API.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 98 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 28 "include/API.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 2 3 4
# 29 "include/API.h" 2
# 68 "include/API.h"
_Bool 
# 68 "include/API.h"
    isAutonomous();
# 77 "include/API.h"

# 77 "include/API.h" 3 4
_Bool 
# 77 "include/API.h"
    isEnabled();
# 88 "include/API.h"

# 88 "include/API.h" 3 4
_Bool 
# 88 "include/API.h"
    isJoystickConnected(unsigned char joystick);








# 96 "include/API.h" 3 4
_Bool 
# 96 "include/API.h"
    isOnline();







int joystickGetAnalog(unsigned char joystick, unsigned char axis);
# 114 "include/API.h"

# 114 "include/API.h" 3 4
_Bool 
# 114 "include/API.h"
    joystickGetDigital(unsigned char joystick, unsigned char buttonGroup,
 unsigned char button);





unsigned int powerLevelBackup();






unsigned int powerLevelMain();





void setTeamName(const char *name);
# 221 "include/API.h"
int analogCalibrate(unsigned char channel);
# 237 "include/API.h"
int analogRead(unsigned char channel);
# 252 "include/API.h"
int analogReadCalibrated(unsigned char channel);
# 271 "include/API.h"
int analogReadCalibratedHR(unsigned char channel);
# 287 "include/API.h"

# 287 "include/API.h" 3 4
_Bool 
# 287 "include/API.h"
    digitalRead(unsigned char pin);
# 298 "include/API.h"
void digitalWrite(unsigned char pin, 
# 298 "include/API.h" 3 4
                                    _Bool 
# 298 "include/API.h"
                                         value);
# 309 "include/API.h"
void pinMode(unsigned char pin, unsigned char mode);
# 332 "include/API.h"
typedef void (*InterruptHandler)(unsigned char pin);
# 341 "include/API.h"
void ioClearInterrupt(unsigned char pin);
# 362 "include/API.h"
void ioSetInterrupt(unsigned char pin, unsigned char edges, InterruptHandler handler);
# 379 "include/API.h"
int motorGet(unsigned char channel);
# 390 "include/API.h"
void motorSet(unsigned char channel, int speed);
# 400 "include/API.h"
void motorStop(unsigned char channel);




void motorStopAll();
# 414 "include/API.h"
void speakerInit();
# 429 "include/API.h"
void speakerPlayArray(const char * * songs);
# 443 "include/API.h"
void speakerPlayRtttl(const char *song);






void speakerShutdown();
# 479 "include/API.h"
unsigned int imeInitializeAll();
# 500 "include/API.h"

# 500 "include/API.h" 3 4
_Bool 
# 500 "include/API.h"
    imeGet(unsigned char address, int *value);
# 523 "include/API.h"

# 523 "include/API.h" 3 4
_Bool 
# 523 "include/API.h"
    imeGetVelocity(unsigned char address, int *value);
# 532 "include/API.h"

# 532 "include/API.h" 3 4
_Bool 
# 532 "include/API.h"
    imeReset(unsigned char address);







void imeShutdown();







typedef void * Gyro;
# 559 "include/API.h"
int gyroGet(Gyro gyro);
# 579 "include/API.h"
Gyro gyroInit(unsigned char port, unsigned short multiplier);
# 588 "include/API.h"
void gyroReset(Gyro gyro);
# 597 "include/API.h"
void gyroShutdown(Gyro gyro);







typedef void * Encoder;
# 614 "include/API.h"
int encoderGet(Encoder enc);
# 627 "include/API.h"
Encoder encoderInit(unsigned char portTop, unsigned char portBottom, 
# 627 "include/API.h" 3 4
                                                                    _Bool 
# 627 "include/API.h"
                                                                         reverse);
# 636 "include/API.h"
void encoderReset(Encoder enc);
# 645 "include/API.h"
void encoderShutdown(Encoder enc);







typedef void * Ultrasonic;
# 664 "include/API.h"
int ultrasonicGet(Ultrasonic ult);
# 676 "include/API.h"
Ultrasonic ultrasonicInit(unsigned char portEcho, unsigned char portPing);
# 685 "include/API.h"
void ultrasonicShutdown(Ultrasonic ult);
# 700 "include/API.h"

# 700 "include/API.h" 3 4
_Bool 
# 700 "include/API.h"
    i2cRead(uint8_t addr, uint8_t *data, uint16_t count);
# 713 "include/API.h"

# 713 "include/API.h" 3 4
_Bool 
# 713 "include/API.h"
    i2cReadRegister(uint8_t addr, uint8_t reg, uint8_t *value, uint16_t count);
# 726 "include/API.h"

# 726 "include/API.h" 3 4
_Bool 
# 726 "include/API.h"
    i2cWrite(uint8_t addr, uint8_t *data, uint16_t count);
# 736 "include/API.h"

# 736 "include/API.h" 3 4
_Bool 
# 736 "include/API.h"
    i2cWriteRegister(uint8_t addr, uint8_t reg, uint16_t value);







typedef int FILE;
# 794 "include/API.h"
void usartInit(FILE *usart, unsigned int baud, unsigned int flags);
# 804 "include/API.h"
void usartShutdown(FILE *usart);
# 860 "include/API.h"
void fclose(FILE *stream);
# 873 "include/API.h"
int fcount(FILE *stream);
# 884 "include/API.h"
int fdelete(const char *file);







int feof(FILE *stream);
# 904 "include/API.h"
int fflush(FILE *stream);
# 913 "include/API.h"
int fgetc(FILE *stream);
# 928 "include/API.h"
char* fgets(char *str, int num, FILE *stream);
# 952 "include/API.h"
FILE * fopen(const char *file, const char *mode);
# 962 "include/API.h"
void fprint(const char *string, FILE *stream);
# 972 "include/API.h"
int fputc(int value, FILE *stream);
# 982 "include/API.h"
int fputs(const char *string, FILE *stream);
# 994 "include/API.h"
size_t fread(void *ptr, size_t size, size_t count, FILE *stream);
# 1004 "include/API.h"
int fseek(FILE *stream, long int offset, int origin);







long int ftell(FILE *stream);
# 1024 "include/API.h"
size_t fwrite(const void *ptr, size_t size, size_t count, FILE *stream);





int getchar();







void print(const char *string);
# 1049 "include/API.h"
int putchar(int value);






int puts(const char *string);
# 1087 "include/API.h"
int fprintf(FILE *stream, const char *formatString, ...);






int printf(const char *formatString, ...);
# 1107 "include/API.h"
int snprintf(char *buffer, size_t limit, const char *formatString, ...);
# 1118 "include/API.h"
int sprintf(char *buffer, const char *formatString, ...);
# 1141 "include/API.h"
void lcdClear(FILE *lcdPort);
# 1150 "include/API.h"
void lcdInit(FILE *lcdPort);
# 1165 "include/API.h"
void __attribute__ ((format (printf, 3, 4))) lcdPrint(FILE *lcdPort, unsigned char line,
 const char *formatString, ...);
# 1177 "include/API.h"
unsigned int lcdReadButtons(FILE *lcdPort);
# 1186 "include/API.h"
void lcdSetBacklight(FILE *lcdPort, 
# 1186 "include/API.h" 3 4
                                   _Bool 
# 1186 "include/API.h"
                                        backlight);
# 1198 "include/API.h"
void lcdSetText(FILE *lcdPort, unsigned char line, const char *buffer);





void lcdShutdown(FILE *lcdPort);
# 1283 "include/API.h"
typedef void * TaskHandle;





typedef void * Mutex;





typedef void * Semaphore;
# 1306 "include/API.h"
typedef void (*TaskCode)(void *);
# 1319 "include/API.h"
TaskHandle taskCreate(TaskCode taskCode, const unsigned int stackDepth, void *parameters,
 const unsigned int priority);
# 1335 "include/API.h"
void taskDelay(const unsigned long msToDelay);
# 1356 "include/API.h"
void taskDelayUntil(unsigned long *previousWakeTime, const unsigned long cycleTime);
# 1370 "include/API.h"
void taskDelete(TaskHandle taskToDelete);
# 1380 "include/API.h"
unsigned int taskGetCount();
# 1392 "include/API.h"
unsigned int taskGetState(TaskHandle task);






unsigned int taskPriorityGet(const TaskHandle task);
# 1410 "include/API.h"
void taskPrioritySet(TaskHandle task, const unsigned int newPriority);
# 1421 "include/API.h"
void taskResume(TaskHandle taskToResume);
# 1437 "include/API.h"
TaskHandle taskRunLoop(void (*fn)(void), const unsigned long increment);
# 1446 "include/API.h"
void taskSuspend(TaskHandle taskToSuspend);
# 1460 "include/API.h"
Semaphore semaphoreCreate();
# 1472 "include/API.h"

# 1472 "include/API.h" 3 4
_Bool 
# 1472 "include/API.h"
    semaphoreGive(Semaphore semaphore);
# 1482 "include/API.h"

# 1482 "include/API.h" 3 4
_Bool 
# 1482 "include/API.h"
    semaphoreTake(Semaphore semaphore, const unsigned long blockTime);






void semaphoreDelete(Semaphore semaphore);
# 1503 "include/API.h"
Mutex mutexCreate();








# 1511 "include/API.h" 3 4
_Bool 
# 1511 "include/API.h"
    mutexGive(Mutex mutex);
# 1523 "include/API.h"

# 1523 "include/API.h" 3 4
_Bool 
# 1523 "include/API.h"
    mutexTake(Mutex mutex, const unsigned long blockTime);






void mutexDelete(Mutex mutex);






void delay(const unsigned long time);
# 1548 "include/API.h"
void delayMicroseconds(const unsigned long us);
# 1558 "include/API.h"
unsigned long micros();
# 1567 "include/API.h"
unsigned long millis();





void wait(const unsigned long time);






void waitUntil(unsigned long *previousWakeTime, const unsigned long time);
# 5 "include/main.h" 2
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
# 32 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 45 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4

# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 49 "/usr/include/math.h" 2 3 4
# 83 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




# 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 84 "/usr/include/math.h" 2 3 4
# 104 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




# 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 105 "/usr/include/math.h" 2 3 4
# 151 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




# 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 152 "/usr/include/math.h" 2 3 4
# 168 "/usr/include/math.h" 3 4
extern int signgam;
# 209 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 347 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 372 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 534 "/usr/include/math.h" 3 4

# 6 "include/main.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 160 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 206 "/usr/include/string.h" 3 4

# 231 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 258 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 277 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 310 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 337 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 392 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 422 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 440 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 484 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 512 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 529 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 552 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 658 "/usr/include/string.h" 3 4

# 7 "include/main.h" 2
# 38 "include/main.h"

# 38 "include/main.h"
typedef enum {
  eNone = 0,
  eGeneric,
  eTooMany,
  eNotEnough,
  eTooLarge,
  eTooSmall,
  eAlreadySet,
  eNonexistant,
} status_t;




  char *gErrorMessage;


  status_t _error(status_t Status, char *Message);
# 81 "include/main.h"
int _motorGet(uint8_t channel);


void _motorSet(uint8_t channel, int speed);


void encoderSet(Encoder enc, int32_t value);





typedef struct {
  const char *Name;
  void (*Func)(void);
} autonFunc_t;


extern const autonFunc_t aAutonomousFunctions[];





int min(int a, int b);
int max(int a, int b);

float absMax(float a, float b);

float absMin(float a, float b);

float bound(float f, float a, float b);

int sign(float n);

float mod(float Divisor, float Dividend);
# 125 "include/main.h"
typedef struct {
  int DeviceID;
  int (*get)(void);
  void (*set)(int Value);
} deviceProxy_t;
typedef Encoder encoder_t;


int get(int DeviceID);

void set(int DeviceID, int Value);

void driveStop();
# 146 "include/main.h"
void motorSetDirection(uint8_t channel, 
# 146 "include/main.h" 3 4
                                       _Bool 
# 146 "include/main.h"
                                            direction);


# 148 "include/main.h" 3 4
_Bool 
# 148 "include/main.h"
    motorGetDirection(uint8_t channel);
# 160 "include/main.h"
enum {
  kTaskDead,
  kTaskRunning,
  kTaskRunnable,
  kTaskSleeping,
  kTaskSuspended
};




typedef enum {
  kParamX = 1,
  kParamY,
  kParamR,
  kParamDirection,
  kParamKPDrive,
  kParamKDDrive,
  kParamKIDrive,
  kParamKPRotate,
  kParamKDRotate,
  kParamKIRotate,
  kParamStopRadius,
  kParamStopRotation,
  kParamAdjustRadius,
  kParamCalculateFromVector,
  kParamDriveX,
  kParamDriveY,
  kParamRotateX,
  kParamRotateY,
  kParamToRotation,
  kParamDriveX2,
  kParamDriveY2,
  kParamDirection2,
  kParamArmSet,
  kParamLockBackWhenDone,
  kParamWaitTime,
} paramType_t;


typedef struct {
  paramType_t ID;
  float Value;
} param_t;
typedef struct {
  int cParams;
  param_t *Params;
} params_t;


typedef void (*task_t)(params_t *pParameters);
typedef TaskHandle taskHandle_t;
# 225 "include/main.h"
extern uint32_t fTasks;


status_t registerTask(task_t pTask, void *Parameter);

status_t deregisterTask(task_t pTask);


# 232 "include/main.h" 3 4
_Bool 
# 232 "include/main.h"
    isTaskActive(task_t pTask);

void stopAllTasks();



void _waitForTasks(int cArgs, ...);



void _waitForTasksBut(int cArgs, ...);


param_t *getParameter(paramType_t ParamType, params_t *pParameters);





typedef struct {
  float x, y, r;
} position_t;


extern position_t gPosition;


void setGlobalPosition(float x, float y, float r);
# 270 "include/main.h"
extern const int kGroundHeight, kLockHeight, kSoftLaunchHeight, kHardLaunchHeight;


typedef enum {
  kLockedAtGround,
  kLockedAtLaunch,
  kUnlocked,
} armLockState_t;


extern armLockState_t ArmLockState;

extern int ArmHeight;


void updateArm();

void arm(int power);
# 302 "include/main.h"
void positionTracking(params_t *parameter);
# 318 "include/main.h"
void driveToTask(params_t *pParameters);
# 332 "include/main.h"
void rotateToTask(params_t *pParameters);
# 345 "include/main.h"
void driveAndRotateTask(params_t *pParameters);
# 356 "include/main.h"
void driveTwiceTask(params_t *pParameters);





void moveArmToTask(params_t *pParameters);





void loadArmTask(params_t *pParameters);





void unfoldTask(params_t *pParameters);





typedef struct {
  const int hcOptions;
  const char * const *haOptions;
} screenOptions_t;
typedef struct {
  const char *hQuestion;
  const screenOptions_t hOptions;
} screen_t;






extern const screen_t aPreAutonScreens[];


void handleLCDOption(int *iScreen, int iOption, screen_t Screen);


void runSetupQuestions();
# 411 "include/main.h"
typedef struct {
  
# 412 "include/main.h" 3 4
 _Bool 
# 412 "include/main.h"
      color : 1;
  
# 413 "include/main.h" 3 4
 _Bool 
# 413 "include/main.h"
      side : 1;
  
# 414 "include/main.h" 3 4
 _Bool 
# 414 "include/main.h"
      determiner : 1;
} autonSettings_t;

extern autonSettings_t AutonSettings;
extern autonFunc_t SelectedAuton;



extern int kEncoderLeft, kEncoderRight;
# 447 "include/main.h"
void initializeIO();

void initialize();

void handleLCDOption(int *iScreen, int iOption, screen_t Screen);





void autoScore();
void autoHang();
void autoSkills();

void autonomous();





void operatorControl();
# 2 "src/library.c" 2




void setUpperArmLock(int Value);
int getUpperArmLock();
void setLowerArmLock(int Value);
int getLowerArmLock();
void setLiftLock(int Value);
int getLiftLock();







const autonFunc_t aAutonomousFunctions[] = {
  {"autoScore", autoScore},
  {"autoHang", autoHang},
  {"autoSkills", autoSkills},
};


const screen_t aPreAutonScreens[] = {
  {"Red or Blue?", {(sizeof((void *[]){
# 27 "src/library.c" 3 4
                  ((void *)0)
# 27 "src/library.c"
                  ,"Red", "Blue", "Skills"})/sizeof(int)-1), (const char * const []){"Red", "Blue", "Skills"}}},
  {"Hot Dog or Hamburger?", {(sizeof((void *[]){
# 28 "src/library.c" 3 4
                           ((void *)0)
# 28 "src/library.c"
                           ,"Hot Dog", "Hamburger"})/sizeof(int)-1), (const char * const []){"Hot Dog", "Hamburger"}}},
  {"Hanging Zone?", {(sizeof((void *[]){
# 29 "src/library.c" 3 4
                   ((void *)0)
# 29 "src/library.c"
                   ,"Yes", "No"})/sizeof(int)-1), (const char * const []){"Yes", "No"}}},
  {"Autonomous", {-1, 
# 30 "src/library.c" 3 4
                     ((void *)0)
# 30 "src/library.c"
                         }},
};




const deviceProxy_t aDeviceProxies[] = {
  {9 + 10, getUpperArmLock, setUpperArmLock},
  {11 + 10, getLowerArmLock, setLowerArmLock},
  {8 + 10, getLiftLock, setLiftLock},
};





const int kTrackingPrecision = 128;

const float kWheelWidth = 370.0, kWheelDiameter = 70.0, kRotationFix = 1/0.971;





const int
  kGroundHeight = 100,
  kLockHeight = 550,
  kSoftLaunchHeight = 2900,
  kHardLaunchHeight = 3200;


const int kUpperLockPosition = 410, kLowerLockPosition = 60, kArmTrim = -50;







int min(int a, int b) {
  if(a > b)
    return b;
  return a;
}
int max(int a, int b) {
  if(a < b)
    return b;
  return a;
}

float fabsMax(float a, float b) {
  return fmax(fabs(a), fabs(b));
}

float fabsMin(float a, float b) {
  return fmin(fabs(a), fabs(b));
}

float bound(float f, float a, float b) {
  if(a < b)
    return fmax(fmin(f, b), a);

  return fmin(fmax(f, a), b);
}

int sign(float n) {
  if(n > 0)
    return 1;
  if(n < 0)
    return -1;
  return 0;
}

float mod(float Divisor, float Dividend) {
  return Divisor - Dividend * floor(Divisor / Dividend);
}






deviceProxy_t *getProxyForDevice(int DeviceID) {
  int i;


  for(i = 0; i < sizeof(aDeviceProxies); i++)

    if(aDeviceProxies[i].DeviceID == DeviceID)
      return (deviceProxy_t *)(int)(aDeviceProxies + i);

  return 
# 121 "src/library.c" 3 4
        ((void *)0)
# 121 "src/library.c"
            ;
}


int get(int DeviceID) {
  deviceProxy_t *pProxy = getProxyForDevice(DeviceID);


  if(pProxy != 
# 129 "src/library.c" 3 4
              ((void *)0) 
# 129 "src/library.c"
                   && pProxy->get != 
# 129 "src/library.c" 3 4
                                     ((void *)0)
# 129 "src/library.c"
                                         )
    return pProxy->get();




  if(DeviceID > 0x08000000)
    return encoderGet((encoder_t)DeviceID);


  if(DeviceID > 10)
    return _motorGet(DeviceID - 30);


  if(DeviceID > 0)
    return digitalRead(DeviceID - 10);


  return analogRead(DeviceID - 0);
}


void set(int DeviceID, int Value) {
  deviceProxy_t *pProxy = getProxyForDevice(DeviceID);


  if(pProxy != 
# 155 "src/library.c" 3 4
              ((void *)0) 
# 155 "src/library.c"
                   && pProxy->set != 
# 155 "src/library.c" 3 4
                                     ((void *)0)
# 155 "src/library.c"
                                         )
    return pProxy->set(Value);




  if(DeviceID > 0x08000000)
    return (void)encoderSet((encoder_t)DeviceID, Value);


  if(DeviceID > 10)
    return (void)_motorSet(DeviceID - 30, Value);;


  if(DeviceID > 0)
    return (void)digitalWrite(DeviceID - 10, Value);


}

void driveStop() {
  set(7 + 30, 0);
  set(4 + 30, 0);
  set(8 + 30, 0);
  set(3 + 30, 0);
}





uint16_t fMotorDirections;

void motorSetDirection(uint8_t channel, 
# 188 "src/library.c" 3 4
                                       _Bool 
# 188 "src/library.c"
                                            direction) {

  fMotorDirections = (fMotorDirections & ~((typeof(fMotorDirections))1 << (channel))) | (direction * ((typeof(fMotorDirections))1 << (channel)));
}

# 192 "src/library.c" 3 4
_Bool 
# 192 "src/library.c"
    motorGetDirection(uint8_t channel) {
  return fMotorDirections & ((typeof(fMotorDirections))1 << (channel));
}





uint32_t fTasks;

const int kMaxTasks = sizeof(fTasks);

task_t aTaskIDs[sizeof(fTasks) * 8];

taskHandle_t aTaskHandles[sizeof(fTasks) * 8];


status_t getIDForTask(task_t pTask, int *TaskID) {
  int FirstEmpty = -1, i;


  for(i = 0; i < kMaxTasks; i++) {

    if(aTaskIDs[i] == pTask) {
      *TaskID = i;
      return eNone;
    }

    if(aTaskIDs[i] == 
# 220 "src/library.c" 3 4
                     ((void *)0) 
# 220 "src/library.c"
                          && FirstEmpty == -1) {
      FirstEmpty = i;
    }
  }



  do{if(!(FirstEmpty != -1)) return _error(eTooMany, "There are already the maximum number of tasks registered");}while(0);


  aTaskIDs[FirstEmpty] = pTask;
  *TaskID = FirstEmpty;
  return eNone;
}


status_t registerTask(task_t pTask, void *Parameters) {
  int ErrorCode, TaskID;


  ErrorCode = getIDForTask(pTask, &TaskID);


  fTasks |= ((typeof(fTasks))1 << (TaskID));


  aTaskHandles[TaskID] = taskCreate((TaskCode)pTask, 512, Parameters, 2);


  return ErrorCode;
}


status_t deregisterTask(task_t pTask) {
  int ErrorCode, TaskID;


  ErrorCode = getIDForTask(pTask, &TaskID);


  fTasks &= ~((typeof(fTasks))1 << (TaskID));


  taskDelete(aTaskHandles[TaskID]);
  aTaskHandles[TaskID] = 0;

  return ErrorCode;
}



# 270 "src/library.c" 3 4
_Bool 
# 270 "src/library.c"
    isTaskActive(task_t pTask) {
  int i;


  for(i = 0; i < kMaxTasks; i++) {

    if(aTaskIDs[i] == pTask)
      return fTasks & ((typeof(fTasks))1 << (i));
  }

  return 
# 280 "src/library.c" 3 4
        0
# 280 "src/library.c"
             ;
}


void stopAllTasks() {
  int i;

  for(i = 0; i < sizeof(fTasks) * 8; i++) {
    if(fTasks & ((typeof(fTasks))1 << (i)))
      deregisterTask(aTaskIDs[i]);
  }
}


void _waitForTasks(int cArgs, ...) {
  typeof(fTasks) Mask = 0;
  va_list TaskArgs;
  task_t Task;
  int i, TaskID;


  
# 301 "src/library.c" 3 4
 __builtin_va_start(
# 301 "src/library.c"
 TaskArgs
# 301 "src/library.c" 3 4
 ,
# 301 "src/library.c"
 cArgs
# 301 "src/library.c" 3 4
 )
# 301 "src/library.c"
                          ;


  for(i = 0; i < cArgs; i++) {

    Task = 
# 306 "src/library.c" 3 4
          __builtin_va_arg(
# 306 "src/library.c"
          TaskArgs
# 306 "src/library.c" 3 4
          ,
# 306 "src/library.c"
          task_t
# 306 "src/library.c" 3 4
          )
# 306 "src/library.c"
                                  ;

    getIDForTask(Task, &TaskID);

    Mask |= ((typeof(Mask))1 << (TaskID));
  }


  
# 314 "src/library.c" 3 4
 __builtin_va_end(
# 314 "src/library.c"
 TaskArgs
# 314 "src/library.c" 3 4
 )
# 314 "src/library.c"
                 ;


  while(fTasks & Mask)
    delay(20);
}


void _waitForTasksBut(int cArgs, ...) {
  typeof(fTasks) Mask = 0;
  va_list TaskArgs;
  task_t Task;
  int i, TaskID;


  
# 329 "src/library.c" 3 4
 __builtin_va_start(
# 329 "src/library.c"
 TaskArgs
# 329 "src/library.c" 3 4
 ,
# 329 "src/library.c"
 cArgs
# 329 "src/library.c" 3 4
 )
# 329 "src/library.c"
                          ;


  for(i = 0; i < cArgs; i++) {

    Task = 
# 334 "src/library.c" 3 4
          __builtin_va_arg(
# 334 "src/library.c"
          TaskArgs
# 334 "src/library.c" 3 4
          ,
# 334 "src/library.c"
          task_t
# 334 "src/library.c" 3 4
          )
# 334 "src/library.c"
                                  ;

    getIDForTask(Task, &TaskID);

    Mask |= ((typeof(Mask))1 << (TaskID));
  }


  
# 342 "src/library.c" 3 4
 __builtin_va_end(
# 342 "src/library.c"
 TaskArgs
# 342 "src/library.c" 3 4
 )
# 342 "src/library.c"
                 ;


  while(fTasks & ~Mask)
    delay(20);
}


param_t *getParameter(paramType_t ParamType, params_t *pParameters) {
  int i;

  for(i = 0; i < pParameters->cParams; i++)
    if(pParameters->Params[i].ID == ParamType)
      return (pParameters->Params + i);

  return 
# 357 "src/library.c" 3 4
        ((void *)0)
# 357 "src/library.c"
            ;
}





position_t gPosition;

float rotationOffset;


void calculateMove(float al, float ar, position_t *Delta) {
  float
    t = (al - ar) / (kWheelWidth * 2) * kRotationFix, t2 = t * t,
    sum = 1, n = 1, c = 1;


  for(int i = 0; i < kTrackingPrecision; i++) {
    n *= -t2 / (++c * ++c);
    sum += n;
  }

  float h = kWheelWidth * sin(t) + ar * sum;

  Delta->x = h * sin(t);
  Delta->y = h * cos(t);
  Delta->r = t;
}


void rotateCoordinate(position_t *Coord, float Theta) {

  float x = Coord->x, y = Coord->y;


  Coord->x = -cos(Theta)*x + sin(Theta)*y;
  Coord->y = sin(Theta)*x + cos(Theta)*y;
}


float encoderToMm(float value) {
  return value / 360.0 * kWheelDiameter * 3.14192653589793;
}


void globalPositioningTask(void *parameter) {

  (void)parameter;

  position_t DeltaMove;
  int LeftP = get(kEncoderLeft), RightP = get(kEncoderRight), LeftT, RightT;

  while(
# 410 "src/library.c" 3 4
       1
# 410 "src/library.c"
           ) {

    delay(20);


    LeftT = encoderToMm(get(kEncoderLeft));
    RightT = encoderToMm(get(kEncoderRight));


    gPosition.r = (LeftT - RightT) / kWheelWidth * kRotationFix + rotationOffset;


    calculateMove(LeftT - LeftP, RightT - RightP, &DeltaMove);

    LeftP = LeftT;
    RightP = RightT;


    rotateCoordinate(&DeltaMove, gPosition.r);


    gPosition.x += DeltaMove.x;
    gPosition.y += DeltaMove.y;
  }
}

void setGlobalPosition(float x, float y, float r) {
  set(kEncoderLeft, 0);
  set(kEncoderRight, 0);
}
# 471 "src/library.c"
armLockState_t ArmLockState;

int ArmHeight;

uint8_t fLocks;


void updateArm() {
  ArmHeight = get(1 + 0) + kArmTrim;
}


void arm(int power) {
  set(5 + 30, power);
  set(2 + 30, power);
  set(6 + 30, power);
  set(9 + 30, power);
}


void setUpperArmLock(int State) {

  digitalWrite(9 + 10 - 10, !State);

  fLocks = (fLocks & ~((typeof(fLocks))1 << (0))) | (!State * ((typeof(fLocks))1 << (0)));

  if(State) {

    if(ArmHeight < kUpperLockPosition && ArmLockState != kLockedAtGround)

      ArmLockState = kLockedAtLaunch;
  } else if(ArmLockState == kLockedAtLaunch) {

    ArmLockState = kUnlocked;
  }
}


int getUpperArmLock() {
  return !!(fLocks & ((typeof(fLocks))1 << (0)));
}


void setLowerArmLock(int State) {

  digitalWrite(11 + 10 - 10, !State);

  fLocks = (fLocks & ~((typeof(fLocks))1 << (1))) | (!State * ((typeof(fLocks))1 << (1)));

  if(State) {

    if(ArmHeight < kLowerLockPosition)

      ArmLockState = kLockedAtGround;
  } else if(ArmLockState == kLockedAtGround) {

    if(ArmHeight < kUpperLockPosition && get(9 + 10))

      ArmLockState = kLockedAtLaunch;
    else

      ArmLockState = kUnlocked;
  }
}


int getLowerArmLock() {
  return !!(fLocks & ((typeof(fLocks))1 << (1)));
}


void setLiftLock(int State) {

  digitalWrite(8 + 10 - 10, !State);

  fLocks = (fLocks & ~((typeof(fLocks))1 << (2))) | (!State * ((typeof(fLocks))1 << (2)));
}


int getLiftLock() {
  return !!(fLocks & ((typeof(fLocks))1 << (2)));
}




void driveToTask(params_t *pParameters) {
  const int kIts = 20;

  float
    dX, dY, Distance, dTheta, DesiredRotation,
    DriveRight, DriveLeft, DriveForward, DriveRotate, DriveSideMax,
    DistanceP = 0, dThetaP = 0,
    DistanceI = 0, dThetaI = 0,
    DriveVel, RotateVel,
    ExtraPower = 0, ExtraPowerDirection;
  float DriveVelocities[kIts], RotateVelocities[kIts];
  int i;


  param_t *pParam;

  float
    kX = 0, kY = 0, kDirection = 0,
    kPDrive = 0.3, kDDrive = 1.5, kIDrive = 0,
    kPRotate = 500, kDRotate = 1, kIRotate = 0,
    kStopRadius = 80, kAdjustRadius = 350;

  if(pParameters != 
# 579 "src/library.c" 3 4
                   ((void *)0)
# 579 "src/library.c"
                       ) {
    do{(pParam) = getParameter(kParamX, (pParameters)); if((pParam) != 
# 580 "src/library.c" 3 4
   ((void *)0)
# 580 "src/library.c"
   ) (kX) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamY, (pParameters)); if((pParam) != 
# 581 "src/library.c" 3 4
   ((void *)0)
# 581 "src/library.c"
   ) (kY) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamDirection, (pParameters)); if((pParam) != 
# 582 "src/library.c" 3 4
   ((void *)0)
# 582 "src/library.c"
   ) (kDirection) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamKPDrive, (pParameters)); if((pParam) != 
# 583 "src/library.c" 3 4
   ((void *)0)
# 583 "src/library.c"
   ) (kPDrive) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamKDDrive, (pParameters)); if((pParam) != 
# 584 "src/library.c" 3 4
   ((void *)0)
# 584 "src/library.c"
   ) (kDDrive) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamKIDrive, (pParameters)); if((pParam) != 
# 585 "src/library.c" 3 4
   ((void *)0)
# 585 "src/library.c"
   ) (kIDrive) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamKPRotate, (pParameters)); if((pParam) != 
# 586 "src/library.c" 3 4
   ((void *)0)
# 586 "src/library.c"
   ) (kPRotate) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamKDRotate, (pParameters)); if((pParam) != 
# 587 "src/library.c" 3 4
   ((void *)0)
# 587 "src/library.c"
   ) (kDRotate) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamKIRotate, (pParameters)); if((pParam) != 
# 588 "src/library.c" 3 4
   ((void *)0)
# 588 "src/library.c"
   ) (kIRotate) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamStopRadius, (pParameters)); if((pParam) != 
# 589 "src/library.c" 3 4
   ((void *)0)
# 589 "src/library.c"
   ) (kStopRadius) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamAdjustRadius, (pParameters)); if((pParam) != 
# 590 "src/library.c" 3 4
   ((void *)0)
# 590 "src/library.c"
   ) (kAdjustRadius) = (pParam)->Value;}while(0);
  }

  kDirection = sign(kDirection);

  if(kDirection == 0)
    kDirection = 1;



  for(i = 0; i < kIts; i++) {
    DriveVelocities[i] = 0;
    RotateVelocities[i] = 0;
  }

  while(
# 605 "src/library.c" 3 4
       1
# 605 "src/library.c"
           ) {

    dX = kDirection * (kX - gPosition.x);
    dY = kDirection * (kY - gPosition.y);
    Distance = sqrt(dX * dX + dY * dY);



    if(Distance < kStopRadius || Distance == 0)
      break;


    DesiredRotation = asin(dX / Distance);


    if(dY < 0)
      DesiredRotation = 3.14192653589793 - DesiredRotation;


    dTheta = mod(DesiredRotation - gPosition.r + 3.14192653589793, 2 * 3.14192653589793) - 3.14192653589793;


    for(i = 0; i < kIts - 1; i++) {
      DriveVelocities[i] = DriveVelocities[i + 1];
      RotateVelocities[i] = RotateVelocities[i + 1];
    }


    DriveVelocities[kIts - 1] = Distance - DistanceP;

    RotateVelocities[kIts - 1] = dTheta - dThetaP;


    DriveVel = RotateVel = 0;
    for(i = 0; i < kIts; i++) {
      DriveVel += DriveVelocities[i] * (i + 1);
      RotateVel += RotateVelocities[i] * (i + 1);
    }
    DriveVel /= kIts * (kIts + 1) / 2;
    RotateVel /= kIts * (kIts + 1) / 2;


    DistanceI += Distance;
    dThetaI += dTheta;


    if(DistanceP == Distance)
      ExtraPower = 40;
    else if(ExtraPower > 0)
      ExtraPower--;


    if(kDirection < 0)
      ExtraPowerDirection = 0;
    else
      ExtraPowerDirection = 1;


    DriveForward =
      kPDrive * Distance +
      DriveVel * kDDrive +
      bound(DistanceI * kIDrive, -10, 10) +
      ExtraPowerDirection * ExtraPower;
    DriveForward = kDirection * bound(DriveForward, -127, 127);


    if(Distance > kAdjustRadius)
      DriveRotate = dTheta * kPRotate;
    else
      DriveRotate = dTheta * kPRotate * Distance/kAdjustRadius * Distance/kAdjustRadius;
    DriveRotate +=
      RotateVel * kDRotate +
      bound(dThetaI * kIRotate, -10, 10);


    DriveRight = DriveForward - DriveRotate;
    DriveLeft = DriveForward + DriveRotate;


    DriveSideMax = absMax(DriveRight, DriveLeft);
    if(DriveSideMax > 127) {
      DriveRight *= 127.0 / DriveSideMax;
      DriveLeft *= 127.0 / DriveSideMax;
    }


    set(8 + 30, DriveLeft);
    set(7 + 30, DriveLeft);
    set(3 + 30, DriveRight);
    set(4 + 30, DriveRight);


    DistanceP = Distance;
    dThetaP = dTheta;


    delay(20);
  }


  driveStop();


  deregisterTask(driveToTask);
}

void rotateToTask(params_t *pParameters) {
  const int kIts = 3;

  float
    dX, dY, Distance, dTheta, DesiredRotation,
    DriveRotate,
    dThetaP = 0,
    dThetaI = 0,
    RotateVel,
    NotMoving = 0, ExtraPower = 0, ExtraPowerDirection;
  float RotateVelocities[kIts];
  int i;


  param_t *pParam;

  float
    kX = 0, kY = 0, kR = 0,
    kPRotate = 0, kDRotate = 0, kIRotate = 0,
    kStopRotation = 0.6,
    kCalculateFromVector = 0;

  if(pParameters != 
# 733 "src/library.c" 3 4
                   ((void *)0)
# 733 "src/library.c"
                       ) {
    do{(pParam) = getParameter(kParamX, (pParameters)); if((pParam) != 
# 734 "src/library.c" 3 4
   ((void *)0)
# 734 "src/library.c"
   ) (kX) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamY, (pParameters)); if((pParam) != 
# 735 "src/library.c" 3 4
   ((void *)0)
# 735 "src/library.c"
   ) (kY) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamR, (pParameters)); if((pParam) != 
# 736 "src/library.c" 3 4
   ((void *)0)
# 736 "src/library.c"
   ) (kR) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamKPRotate, (pParameters)); if((pParam) != 
# 737 "src/library.c" 3 4
   ((void *)0)
# 737 "src/library.c"
   ) (kPRotate) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamKDRotate, (pParameters)); if((pParam) != 
# 738 "src/library.c" 3 4
   ((void *)0)
# 738 "src/library.c"
   ) (kDRotate) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamKIRotate, (pParameters)); if((pParam) != 
# 739 "src/library.c" 3 4
   ((void *)0)
# 739 "src/library.c"
   ) (kIRotate) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamStopRotation, (pParameters)); if((pParam) != 
# 740 "src/library.c" 3 4
   ((void *)0)
# 740 "src/library.c"
   ) (kStopRotation) = (pParam)->Value;}while(0);
    do{(pParam) = getParameter(kParamCalculateFromVector, (pParameters)); if((pParam) != 
# 741 "src/library.c" 3 4
   ((void *)0)
# 741 "src/library.c"
   ) (kCalculateFromVector) = (pParam)->Value;}while(0);
  }

  if(kCalculateFromVector) {
    dX = kX - gPosition.x;
    dY = kY - gPosition.y;

    Distance = sqrt(dX * dX + dY * dY);

    DesiredRotation = asin(dX / Distance);

    if(dY < 0)
      DesiredRotation = 3.14192653589793 - DesiredRotation;
  } else
    DesiredRotation = kR;


  for(i = 0; i < kIts; i++) {
    RotateVelocities[i] = 0;
  }

  while(
# 762 "src/library.c" 3 4
       1
# 762 "src/library.c"
           ) {

    dTheta = mod(DesiredRotation - gPosition.r + 3.14192653589793, 2 * 3.14192653589793) - 3.14192653589793;


    if(abs(dTheta) < kStopRotation)
      break;


    for(i = 0; i < kIts + 1; i++)
      RotateVelocities[i] = RotateVelocities[i + 1];


    RotateVelocities[kIts - 1] = dTheta - dThetaP;


    RotateVel = 0;
    for(i = 0; i < kIts; i++)
      RotateVel += RotateVelocities[i] * (i + 1);
    RotateVel /= kIts * (kIts + 1) / 2;


    dThetaI += dTheta;



    if(dThetaP == dTheta) {
      ExtraPower = 15;
      NotMoving += 1;
    } else {
      if(ExtraPower > 0)
        ExtraPower -= 1;
      NotMoving = 0;
    }


    if(NotMoving > 50)
      break;

    if(dTheta > DesiredRotation)
      ExtraPowerDirection = -1;
    else
      ExtraPowerDirection = 1;


    DriveRotate =
      dTheta * kPRotate +
      -RotateVel * kDRotate +
      bound(dThetaI * kIRotate, -10, 10) +
      ExtraPowerDirection * ExtraPower;
    DriveRotate = bound(DriveRotate, -127, 127);


    set(8 + 30, DriveRotate);
    set(7 + 30, DriveRotate);
    set(3 + 30, -DriveRotate);
    set(4 + 30, -DriveRotate);


    delay(20);
  }


  driveStop();


  deregisterTask(rotateToTask);
}

void driveAndRotateTask(params_t *pParameters) {
  param_t
    *pParam,
    DriveParamList[3], RotateParamList[4];
  params_t DriveParams = {0, DriveParamList}, RotateParams = {0, RotateParamList};


  pParam = getParameter(kParamDriveX, pParameters);
  if(pParam != 
# 839 "src/library.c" 3 4
              ((void *)0)
# 839 "src/library.c"
                  )
    DriveParams.Params[DriveParams.cParams++] = (param_t){kParamX, pParam->Value};

  pParam = getParameter(kParamDriveY, pParameters);
  if(pParam != 
# 843 "src/library.c" 3 4
              ((void *)0)
# 843 "src/library.c"
                  )
    DriveParams.Params[DriveParams.cParams++] = (param_t){kParamY, pParam->Value};

  pParam = getParameter(kParamDirection, pParameters);
  if(pParam != 
# 847 "src/library.c" 3 4
              ((void *)0)
# 847 "src/library.c"
                  )
    DriveParams.Params[DriveParams.cParams++] = (param_t){kParamDirection, pParam->Value};


  pParam = getParameter(kParamRotateX, pParameters);
  if(pParam != 
# 852 "src/library.c" 3 4
              ((void *)0)
# 852 "src/library.c"
                  )
    RotateParams.Params[DriveParams.cParams++] = (param_t){kParamX, pParam->Value};

  pParam = getParameter(kParamRotateY, pParameters);
  if(pParam != 
# 856 "src/library.c" 3 4
              ((void *)0)
# 856 "src/library.c"
                  )
    RotateParams.Params[DriveParams.cParams++] = (param_t){kParamY, pParam->Value};

  pParam = getParameter(kParamR, pParameters);
  if(pParam != 
# 860 "src/library.c" 3 4
              ((void *)0)
# 860 "src/library.c"
                  )
    RotateParams.Params[DriveParams.cParams++] = (param_t){kParamR, pParam->Value};

  pParam = getParameter(kParamCalculateFromVector, pParameters);
  if(pParam != 
# 864 "src/library.c" 3 4
              ((void *)0)
# 864 "src/library.c"
                  )
    RotateParams.Params[DriveParams.cParams++] = (param_t){kParamCalculateFromVector, pParam->Value};


  registerTask(driveToTask, &DriveParams);
  _waitForTasks((sizeof((void *[]){
# 869 "src/library.c" 3 4
 ((void *)0)
# 869 "src/library.c"
 ,driveToTask})/sizeof(int)-1), driveToTask);

  delay(500);

  registerTask(rotateToTask, &RotateParams);

  deregisterTask(driveAndRotateTask);
}

void driveTwiceTask(params_t *pParameters) {
  param_t
    *pParam,
    FirstDriveParamList[3], SecondDriveParamList[3];
  params_t FirstDriveParams = {0, FirstDriveParamList}, SecondDriveParams = {0, SecondDriveParamList};


  pParam = getParameter(kParamDriveX, pParameters);
  if(pParam != 
# 886 "src/library.c" 3 4
              ((void *)0)
# 886 "src/library.c"
                  )
    FirstDriveParams.Params[SecondDriveParams.cParams++] = (param_t){kParamX, pParam->Value};

  pParam = getParameter(kParamDriveY, pParameters);
  if(pParam != 
# 890 "src/library.c" 3 4
              ((void *)0)
# 890 "src/library.c"
                  )
    FirstDriveParams.Params[SecondDriveParams.cParams++] = (param_t){kParamY, pParam->Value};

  pParam = getParameter(kParamDirection, pParameters);
  if(pParam != 
# 894 "src/library.c" 3 4
              ((void *)0)
# 894 "src/library.c"
                  )
    FirstDriveParams.Params[SecondDriveParams.cParams++] = (param_t){kParamDirection, pParam->Value};


  pParam = getParameter(kParamDriveX2, pParameters);
  if(pParam != 
# 899 "src/library.c" 3 4
              ((void *)0)
# 899 "src/library.c"
                  )
    SecondDriveParams.Params[SecondDriveParams.cParams++] = (param_t){kParamX, pParam->Value};

  pParam = getParameter(kParamDriveY2, pParameters);
  if(pParam != 
# 903 "src/library.c" 3 4
              ((void *)0)
# 903 "src/library.c"
                  )
    SecondDriveParams.Params[SecondDriveParams.cParams++] = (param_t){kParamY, pParam->Value};

  pParam = getParameter(kParamDirection2, pParameters);
  if(pParam != 
# 907 "src/library.c" 3 4
              ((void *)0)
# 907 "src/library.c"
                  )
    SecondDriveParams.Params[SecondDriveParams.cParams++] = (param_t){kParamDirection, pParam->Value};

  float kWaitTime = 500;

  do{(pParam) = getParameter(kParamWaitTime, (pParameters)); if((pParam) != 
# 912 "src/library.c" 3 4
 ((void *)0)
# 912 "src/library.c"
 ) (kWaitTime) = (pParam)->Value;}while(0);


  registerTask(driveToTask, &FirstDriveParams);
  _waitForTasks((sizeof((void *[]){
# 916 "src/library.c" 3 4
 ((void *)0)
# 916 "src/library.c"
 ,driveToTask})/sizeof(int)-1), driveToTask);

  delay(kWaitTime);

  registerTask(driveToTask, &SecondDriveParams);
  _waitForTasks((sizeof((void *[]){
# 921 "src/library.c" 3 4
 ((void *)0)
# 921 "src/library.c"
 ,driveToTask})/sizeof(int)-1), driveToTask);


  deregisterTask(driveTwiceTask);
}

void moveArmToTask(params_t *pParameters) {
  
# 928 "src/library.c" 3 4
 _Bool 
# 928 "src/library.c"
      GoingUp;


  param_t *pParam;

  float kArmSet = 0;

  if(pParameters != 
# 935 "src/library.c" 3 4
                   ((void *)0)
# 935 "src/library.c"
                       ) {
    do{(pParam) = getParameter(kParamArmSet, (pParameters)); if((pParam) != 
# 936 "src/library.c" 3 4
   ((void *)0)
# 936 "src/library.c"
   ) (kArmSet) = (pParam)->Value;}while(0);
  }

  GoingUp = (ArmHeight < kArmSet);

  while(
# 941 "src/library.c" 3 4
       1
# 941 "src/library.c"
           ) {
    updateArm();

    if(GoingUp) {
      arm(127);

      if(ArmHeight > kArmSet)
        break;
    } else {
      arm(-127);

      if(ArmHeight < kArmSet)
        break;
    }
  }


  arm(0);;


  deregisterTask(moveArmToTask);
}

void loadArmTask(params_t *pParameters) {

  param_t *pParam;

  
# 968 "src/library.c" 3 4
 _Bool 
# 968 "src/library.c"
      kLockBackWhenDone = 
# 968 "src/library.c" 3 4
                          0
# 968 "src/library.c"
                               ;

  if(pParameters != 
# 970 "src/library.c" 3 4
                   ((void *)0)
# 970 "src/library.c"
                       ) {
    do{(pParam) = getParameter(kParamLockBackWhenDone, (pParameters)); if((pParam) != 
# 971 "src/library.c" 3 4
   ((void *)0)
# 971 "src/library.c"
   ) (kLockBackWhenDone) = (pParam)->Value;}while(0);
  }



  params_t P1;


  registerTask(moveArmToTask, &(P1 = (params_t){sizeof((param_t []){{kParamArmSet, kGroundHeight}}), (param_t []){{kParamArmSet, kGroundHeight}}}));
  _waitForTasks((sizeof((void *[]){
# 980 "src/library.c" 3 4
 ((void *)0)
# 980 "src/library.c"
 ,moveArmToTask})/sizeof(int)-1), moveArmToTask);

  set(11 + 10, 
# 982 "src/library.c" 3 4
                    1
# 982 "src/library.c"
                        );

  arm(-80);
  delay(100);


  registerTask(moveArmToTask, &(P1 = (params_t){sizeof((param_t []){{kParamArmSet, kHardLaunchHeight}}), (param_t []){{kParamArmSet, kHardLaunchHeight}}}));
  _waitForTasks((sizeof((void *[]){
# 989 "src/library.c" 3 4
 ((void *)0)
# 989 "src/library.c"
 ,moveArmToTask})/sizeof(int)-1), moveArmToTask);

  if(kLockBackWhenDone) {
    setLiftLock(
# 992 "src/library.c" 3 4
               1
# 992 "src/library.c"
                   );


    delay(200);
  }


  deregisterTask(loadArmTask);
}

void unfoldTask(params_t *pParameters) {
  params_t P1;


  registerTask(moveArmToTask, (params_t){sizeof((param_t []){P1, {kParamArmSet, 550}}), (param_t []){P1, {kParamArmSet, 550}}});
  _waitForTasks((sizeof((void *[]){
# 1007 "src/library.c" 3 4
 ((void *)0)
# 1007 "src/library.c"
 ,moveArmToTask})/sizeof(int)-1), moveArmToTask);


  arm(-127);
  delay(1000);
  arm(0);;


  deregisterTask(unfoldTask);
}





# 1021 "src/library.c" 3 4
_Bool 
# 1021 "src/library.c"
    getOptionCountFromScreen(screen_t Screen, int *Count) {
  *Count = Screen.hOptions.hcOptions;

  if(*Count == -1) {
    *Count = sizeof(aAutonomousFunctions);
    return 
# 1026 "src/library.c" 3 4
          1
# 1026 "src/library.c"
              ;
  }

  return 
# 1029 "src/library.c" 3 4
        0
# 1029 "src/library.c"
             ;
}

const char *getOptionFromScreen(screen_t Screen, int Index) {
  int cOptions;
  
# 1034 "src/library.c" 3 4
 _Bool 
# 1034 "src/library.c"
      IsAuton = getOptionCountFromScreen(Screen, &cOptions);

  if(Index >= Screen.hOptions.hcOptions || Index < 0)
    return 
# 1037 "src/library.c" 3 4
          ((void *)0)
# 1037 "src/library.c"
              ;

  if(IsAuton)
    return aAutonomousFunctions[Index].Name;

  return Screen.hOptions.haOptions[Index];
}

void displayPreAutonScreen(screen_t Screen, int Index, int cOptions) {
  lcdClear(((FILE *)1));


  lcdSetText(((FILE *)1), 0, Screen.hQuestion);

  const char
    *Prev = getOptionFromScreen(Screen, (Index - 1) % cOptions),
    *Current = getOptionFromScreen(Screen, Index & cOptions),
    *Next = getOptionFromScreen(Screen, (Index + 1) % cOptions);

  if(Prev == 
# 1056 "src/library.c" 3 4
            ((void *)0)
# 1056 "src/library.c"
                )
    Prev = "Back";
  if(Current == 
# 1058 "src/library.c" 3 4
               ((void *)0)
# 1058 "src/library.c"
                   )
    Current = "Back";
  if(Next == 
# 1060 "src/library.c" 3 4
            ((void *)0)
# 1060 "src/library.c"
                )
    Next = "Back";

  int
    CenterPosition = 7 - strlen(Current) / 2,
    LeftPosition = min(0, CenterPosition - 1 - strlen(Prev)),
    RightPosition = max(16 - strlen(Next), CenterPosition + 1 + strlen(Current));

  char Output[16];
  int i;


  for(i = LeftPosition; Prev[i] != 0 && i < LeftPosition + 8; i++)
    Output[i - LeftPosition] = Prev[i];


  if(CenterPosition > 0)
    Output[CenterPosition - 1] = 0xf7;


  for(i = 0; Current[i] != 0 && i < 16; i++)
    Output[CenterPosition + i] = Current[i];


  if(CenterPosition + strlen(Current) < 16)
    Output[CenterPosition + strlen(Current)] = 0xf6;


  for(i = RightPosition; i < 16 && Next[i - RightPosition] != 0; i++)
    Output[RightPosition] = Next[i - RightPosition];



  lcdSetText(((FILE *)1), 1, Output);
}

void runSetupQuestions() {
  struct {
    int Raw : 3;
    int Left : 2;
    int Middle : 2;
    int Right : 2;
  } Buttons;

  int iScreen = 0, Index = 0, cActualOptions, cOptions;

  getOptionCountFromScreen(aPreAutonScreens[iScreen], &cActualOptions);
  cOptions = cActualOptions;

  
# 1109 "src/library.c" 3 4
 _Bool 
# 1109 "src/library.c"
      ShowScreen = 
# 1109 "src/library.c" 3 4
                   1
# 1109 "src/library.c"
                       ;

  lcdSetBacklight(((FILE *)1), 
# 1111 "src/library.c" 3 4
                       1
# 1111 "src/library.c"
                           );

  while(iScreen < sizeof(aPreAutonScreens)) {

    if(joystickGetDigital(1, 8, 4))
      break;


    Buttons.Raw = lcdReadButtons(((FILE *)1));

    if(Buttons.Raw == 1) {
      if(Buttons.Left < 2)
        Buttons.Left++;
    } else
      Buttons.Left = 0;

    if(Buttons.Raw == 2) {
      if(Buttons.Left < 2)
        Buttons.Left++;
    } else
      Buttons.Left = 0;

    if(Buttons.Raw == 4) {
      if(Buttons.Left < 2)
        Buttons.Left++;
    } else
      Buttons.Left = 0;


    if(ShowScreen) {
      displayPreAutonScreen(aPreAutonScreens[iScreen], Index, cOptions);
      ShowScreen = 
# 1142 "src/library.c" 3 4
                  0
# 1142 "src/library.c"
                       ;
    }


    if(Buttons.Left == 1) {

      Index = (Index - 1) % cOptions;
      ShowScreen = 
# 1149 "src/library.c" 3 4
                  1
# 1149 "src/library.c"
                      ;
    } else if(Buttons.Right == 1) {

      Index = (Index + 1) % cOptions;
      ShowScreen = 
# 1153 "src/library.c" 3 4
                  1
# 1153 "src/library.c"
                      ;
    } else if(Buttons.Middle == 1) {

      if(Index == cActualOptions) {
        Index = 0;

        iScreen--;
        ShowScreen = 
# 1160 "src/library.c" 3 4
                    1
# 1160 "src/library.c"
                        ;

        getOptionCountFromScreen(aPreAutonScreens[iScreen], &cActualOptions);
        if(iScreen > 0)
          cOptions = cActualOptions + 1;
        else
          cOptions = cActualOptions;


        continue;
      }



      handleLCDOption(&iScreen, Index, aPreAutonScreens[iScreen]);


      Index = 0;

      iScreen++;
      ShowScreen = 
# 1180 "src/library.c" 3 4
                  1
# 1180 "src/library.c"
                      ;

      getOptionCountFromScreen(aPreAutonScreens[iScreen], &cActualOptions);
      cOptions = cActualOptions + 1;
    }
  }
}
