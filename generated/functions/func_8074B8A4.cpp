#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074B8A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8074B8A4;

loc_8074B8A4:
{
    r5 = (r3 + 1);
    r9 = 1;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8074B8B0:
{
    r10 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8074B9A0;
    }
}

loc_8074B8B8:
{
}

loc_8074B8BC:
{
    r6 = (r3 + -7);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_8074B980;
    }
}

loc_8074B8C4:
{
    r7 = 0;
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8074B8E4;
    }
}

loc_8074B8D0:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_8074B8DC:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_8074B8E4;
    }
}

loc_8074B8E0:
{
    r8 = 1;
}

loc_8074B8E4:
{
}

loc_8074B8E8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8074B920;
    }
}

loc_8074B8EC:
{
    r0 = (r3 + 1);
    r4 = 1;
    r5 = (r0 & -2147483648);
    r0 = (r5 + -2147483648);
}

loc_8074B900:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_8074B914;
    }
}

loc_8074B904:
{
    r0 = (r3 & -2147483648);
}

loc_8074B90C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_8074B914;
    }
}

loc_8074B910:
{
    r4 = 0;
}

loc_8074B914:
{
}

loc_8074B918:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8074B920;
    }
}

loc_8074B91C:
{
    r7 = 1;
}

loc_8074B920:
{
}

loc_8074B924:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8074B980;
    }
}

loc_8074B928:
{
    r0 = (r6 + 6);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8074B938:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(1))) {
        goto loc_8074B980;
    }
}

loc_8074B93C:
{
    r9 = (r9 * r10);
    r0 = (r10 + 1);
    r8 = (r10 + 2);
    r7 = (r10 + 3);
    r6 = (r10 + 4);
    r5 = (r10 + 5);
    r9 = (r9 * r0);
    r4 = (r10 + 6);
    r0 = (r10 + 7);
    r10 = (r10 + 8);
    r9 = (r9 * r8);
    r9 = (r9 * r7);
    r9 = (r9 * r6);
    r9 = (r9 * r5);
    r9 = (r9 * r4);
    r9 = (r9 * r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8074B93C;
    }
}

loc_8074B980:
{
    r3 = (r3 + 1);
    r0 = (r3 - r10);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r3));
}

loc_8074B990:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074B9A0;
    }
}

loc_8074B994:
{
    r9 = (r9 * r10);
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8074B994;
    }
}

loc_8074B9A0:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8074B8A4 func_8074B8A4 preserves=true fpr_mask=0x00000000
