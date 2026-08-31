#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A63A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A63A4;

loc_801A63A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r7;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r0 = MemoryInline::FlatRead16((r13 + -28976));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801A63D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A63E0;
    }
}

loc_801A63DC:
{
    goto loc_801A6424;
}

loc_801A63E0:
{
    r4 = 0x80000000u;
    r0 = MemoryInline::FlatRead32((r4 + 204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A63EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A63F8;
    }
}

loc_801A63F0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A640C;
    }
}

loc_801A63F4:
{
    goto loc_801A640C;
}

loc_801A63F8:
{
    r4 = -872415232;
    r0 = MemoryInline::FlatRead16((r4 + 8302));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite16((r13 + -28976), static_cast<uint16_t>(r0));
    goto loc_801A6414;
}

loc_801A640C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r13 + -28976), static_cast<uint16_t>(r0));
}

loc_801A6414:
{
    r4 = 0x801A0000u;
    r0 = (r0 & 65535);
    r4 = (r4 + 24156);
    MemoryInline::FlatWrite32((r13 + -25384), r4);
}

loc_801A6424:
{
    r12 = MemoryInline::FlatRead32((r13 + -25384));
    r4 = r3;
    r3 = (r0 & 65535);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctr = r12;
    ctx->lr = 0x801A6440u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r7 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801A6448:
{
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead16((r7 + 26));
    r4 = MemoryInline::FlatRead16((r7 + 28));
    r0 = MemoryInline::FlatRead32((r7 + 36));
    r5 = (r5 * r4);
    r4 = MemoryInline::FlatRead32((r7 + 20));
    r0 = (r7 + r0);
    r6 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r5));
    r4 = (r4 * r6);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r28, r0);
    r8 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r7 = MemoryInline::FlatRead16((r8 + 26));
    r5 = MemoryInline::FlatRead16((r8 + 28));
    r6 = (r6 * r7);
    r0 = MemoryInline::FlatRead16((r8 + 16));
    r5 = (r6 * r5);
    r5 = (r4 - r5);
    r6 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r7));
    r4 = (r6 * r7);
    r4 = (r5 - r4);
    r0 = (r4 * r0);
    MemoryInline::FlatWrite32(r29, r0);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead16((r4 + 18));
    r0 = (r6 * r0);
    MemoryInline::FlatWrite32(r30, r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A64D4;
    }
}

loc_801A64BC:
{
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead16((r5 + 34));
    r0 = (r5 + r0);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_801A64D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A63A4 func_801A63A4 preserves=true fpr_mask=0x00000000
