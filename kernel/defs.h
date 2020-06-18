// This file will be renamed to defs.h once the port is complete.

// Definitions of platform independent APIs
// (implementation could be platform dependent.)

// forward declarations
struct spinlock;

// string.c
int             memcmp(const void*, const void*, uint);
void*           memmove(void*, const void*, uint);
void*           memset(void*, int, uint);
char*           safestrcpy(char*, const char*, int);
int             strlen(const char*);
int             strncmp(const char*, const char*, uint);
char*           strncpy(char*, const char*, int);

// uart.c
void            uartinit(void);
void            uartintr(void);
void            uartputc(int);

// printf.c
void            printf(char*, ...);
void            panic(char*) __attribute__((noreturn));
void            printfinit(void);

// console.c
void            consputc(int);

// kalloc.c
void            kinit(void);
void            freerange(void*, void*);
void            kfree(void*);
void*           kalloc(void);

// arch/$ARCH/spinlock.c
void            acquire(struct spinlock*);
int             holding(struct spinlock*);
void            initlock(struct spinlock*, char*);
void            release(struct spinlock*);

// arch/$ARCH/proc64.h
int             cpuid(void);
struct cpu*     mycpu(void);
void            procinit(void);

// arch/$ARCH/vm.c
void            kvmmap(uint64, uint64, uint64, uint64);
void            kpaginginit(void);
void            loadkpml4(void);
