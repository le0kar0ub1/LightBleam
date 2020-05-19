#include "target/x86/i386/memory/vmm.h"
#include "target/x86/common/memory/kalloc.h"

/*
** If there is no recursive mapping all these functions will fucked up.
** Assuming that's not the case.
** This functions are usable only in this file.
*/

static inline struct pml4_t *get_pml4(void)
{
    return (
        (struct pml4_t *)0xfffffffff000ul
    );
}

static inline struct pml4_t *get_pdp(uint pdp)
{
    return (
        (struct pml4_t *)(0xffffffE00000ul | 
        ((pdp & 0x1FF) << 30)
    ));
}

static inline struct pml4_t *get_pd(uint pdp, uint pd)
{
    return (
        (struct pml4_t *)(0xffffC0000000ul | 
        ((pdp & 0x1FF) << 30) |
        ((pd & 0x1FF) << 21)
    ));
}

static inline struct pml4_t *get_pt(uint pdp, uint pd, uint pt)
{
    return (
        (struct pml4_t *)(0xff8000000000ul | 
        ((pdp & 0x1FF) << 30) | 
        ((pd & 0x1FF) << 21) |
        ((pt & 0x1FF) << 12)
    ));
}

/*
** VMM can't be initcall()
** The PMM is handle by a boot_initcall() and is totaly shared
*/