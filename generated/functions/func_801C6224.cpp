#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C6224(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C6224;

loc_801C6224:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0x80350000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801C6234:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = (r6 + 2352);
    r9 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r5;
    r6_addr_0 = (r6 + r0);
    r31 = MemoryInline::FlatRead32(r6_addr_0);
    r4 = MemoryInline::FlatRead32((r31 + 2420));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C639C;
    }
}

loc_801C625C:
{
    r0 = 2;
    r8 = 0;
    ctr = r0;
}

loc_801C6268:
{
    r7 = (r4 + r8);
    r4_addr_2 = (r4 + r8);
    r6 = MemoryInline::FlatRead8(r4_addr_2);
    r3 = MemoryInline::FlatRead8((r7 + 1));
    r8 = (r8 + 7);
    r9 = (r9 + r6);
    r0 = MemoryInline::FlatRead8((r7 + 2));
    r9 = (r9 + r3);
    r3 = MemoryInline::FlatRead8((r7 + 3));
    r9 = (r9 + r0);
    r0 = MemoryInline::FlatRead8((r7 + 4));
    r9 = (r9 + r3);
    r3 = MemoryInline::FlatRead8((r7 + 5));
    r9 = (r9 + r0);
    r0 = MemoryInline::FlatRead8((r7 + 6));
    r9 = (r9 + r3);
    r7 = (r4 + r8);
    r4_addr_3 = (r4 + r8);
    r6 = MemoryInline::FlatRead8(r4_addr_3);
    r9 = (r9 + r0);
    r3 = MemoryInline::FlatRead8((r7 + 1));
    r8 = (r8 + 7);
    r9 = (r9 + r6);
    r0 = MemoryInline::FlatRead8((r7 + 2));
    r9 = (r9 + r3);
    r3 = MemoryInline::FlatRead8((r7 + 3));
    r9 = (r9 + r0);
    r0 = MemoryInline::FlatRead8((r7 + 4));
    r9 = (r9 + r3);
    r3 = MemoryInline::FlatRead8((r7 + 5));
    r9 = (r9 + r0);
    r0 = MemoryInline::FlatRead8((r7 + 6));
    r9 = (r9 + r3);
    r7 = (r4 + r8);
    r4_addr_4 = (r4 + r8);
    r6 = MemoryInline::FlatRead8(r4_addr_4);
    r9 = (r9 + r0);
    r3 = MemoryInline::FlatRead8((r7 + 1));
    r8 = (r8 + 7);
    r9 = (r9 + r6);
    r0 = MemoryInline::FlatRead8((r7 + 2));
    r9 = (r9 + r3);
    r3 = MemoryInline::FlatRead8((r7 + 3));
    r9 = (r9 + r0);
    r0 = MemoryInline::FlatRead8((r7 + 4));
    r9 = (r9 + r3);
    r3 = MemoryInline::FlatRead8((r7 + 5));
    r9 = (r9 + r0);
    r0 = MemoryInline::FlatRead8((r7 + 6));
    r9 = (r9 + r3);
    r9 = (r9 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C6268;
    }
}

loc_801C632C:
{
    r6 = (r8 + r4);
    r4_addr_5 = (r4 + r8);
    r0 = MemoryInline::FlatRead8(r4_addr_5);
    r3 = MemoryInline::FlatRead8((r6 + 1));
    r9 = (r9 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 2));
    r9 = (r9 + r3);
    r3 = MemoryInline::FlatRead8((r6 + 3));
    r9 = (r9 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 4));
    r9 = (r9 + r3);
    r3 = MemoryInline::FlatRead8((r4 + 47));
    r9 = (r9 + r0);
    r0 = (r9 + 85);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801C6368:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C638C;
    }
}

loc_801C636C:
{
    r3 = r31;
    r5 = 56;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r4 = 0;
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 56), r4);
    goto loc_801C639C;
}

loc_801C638C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r4 = -4;
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 56), r4);
}

loc_801C639C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00003FB gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C6224 func_801C6224 preserves=true fpr_mask=0x00000000
