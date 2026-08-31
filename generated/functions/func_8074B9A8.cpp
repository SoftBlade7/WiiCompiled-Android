#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074B9A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8074B9A8;

loc_8074B9A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r7 = (r3 + 1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_8074B9B4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r12 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8074BAAC;
    }
}

loc_8074B9C4:
{
}

loc_8074B9C8:
{
    r8 = (r3 + -7);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_8074BA8C;
    }
}

loc_8074B9D0:
{
    r9 = 0;
    r10 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8074B9F0;
    }
}

loc_8074B9DC:
{
    r6 = 0x80000000u;
    r6 = (r6 + -2);
}

loc_8074B9E8:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r6))) {
        goto loc_8074B9F0;
    }
}

loc_8074B9EC:
{
    r10 = 1;
}

loc_8074B9F0:
{
}

loc_8074B9F4:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8074BA2C;
    }
}

loc_8074B9F8:
{
    r6 = (r3 + 1);
    r7 = 1;
    r10 = (r6 & -2147483648);
    r6 = (r10 + -2147483648);
}

loc_8074BA0C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(0))) {
        goto loc_8074BA20;
    }
}

loc_8074BA10:
{
    r6 = (r3 & -2147483648);
}

loc_8074BA18:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(r6))) {
        goto loc_8074BA20;
    }
}

loc_8074BA1C:
{
    r7 = 0;
}

loc_8074BA20:
{
}

loc_8074BA24:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8074BA2C;
    }
}

loc_8074BA28:
{
    r9 = 1;
}

loc_8074BA2C:
{
}

loc_8074BA30:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8074BA8C;
    }
}

loc_8074BA34:
{
    r6 = (r8 + 6);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_1 & 536870911);
    ctr = r6;
}

loc_8074BA44:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(1))) {
        goto loc_8074BA8C;
    }
}

loc_8074BA48:
{
    r0 = (r0 * r12);
    r6 = (r12 + 1);
    r11 = (r12 + 2);
    r10 = (r12 + 3);
    r9 = (r12 + 4);
    r8 = (r12 + 5);
    r0 = (r0 * r6);
    r7 = (r12 + 6);
    r6 = (r12 + 7);
    r12 = (r12 + 8);
    r0 = (r0 * r11);
    r0 = (r0 * r10);
    r0 = (r0 * r9);
    r0 = (r0 * r8);
    r0 = (r0 * r7);
    r0 = (r0 * r6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8074BA48;
    }
}

loc_8074BA8C:
{
    r7 = (r3 + 1);
    r6 = (r7 - r12);
    ctr = r6;
}

loc_8074BA9C:
{
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(r7))) {
        goto loc_8074BAAC;
    }
}

loc_8074BAA0:
{
    r0 = (r0 * r12);
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8074BAA0;
    }
}

loc_8074BAAC:
{
    r9 = 0;
    r10 = 0;
    r7 = 1;
    goto loc_8074BB20;
}

loc_8074BABC:
{
    r6 = (r3 - r10);
    r12 = 0;
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r6));
    r31 = 0;
    r11 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r0));
    ctr = r3;
}

loc_8074BAD8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8074BB10;
    }
}

loc_8074BADC:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r31));
    r6 = (r9 & r8);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8074BB08;
    }
}

loc_8074BAE8:
{
}

loc_8074BAEC:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(r11))) {
        goto loc_8074BB04;
    }
}

loc_8074BAF0:
{
    r6 = (r31 + 1);
    MemoryInline::FlatWrite32(r5, r6);
    r9 = (r9 | r8);
    r5 = (r5 + 4);
    goto loc_8074BB10;
}

loc_8074BB04:
{
    r12 = (r12 + 1);
}

loc_8074BB08:
{
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8074BADC;
    }
}

loc_8074BB10:
{
    r6 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r0));
    r10 = (r10 + 1);
    r6 = (r6 * r0);
    r4 = (r4 - r6);
}

loc_8074BB20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r3));
}

loc_8074BB24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8074BABC;
    }
}

loc_8074BB28:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8074B9A8 func_8074B9A8 preserves=true fpr_mask=0x00000000
