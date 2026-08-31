#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013B848(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8013B848;

loc_8013B848:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80330000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + 25208);
    r12 = MemoryInline::FlatRead32((r4 + 1392));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8013B864:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013B9C4;
    }
}

loc_8013B868:
{
    r5 = (r3 + 2);
    r4 = 0;
    goto loc_8013B9AC;
}

loc_8013B874:
{
    r11 = MemoryInline::FlatRead8(r5);
    r4 = (r4 + 1);
    r10 = MemoryInline::FlatRead8((r5 + 1));
    r9 = MemoryInline::FlatRead8((r5 + 2));
    r8 = MemoryInline::FlatRead8((r5 + 3));
    r7 = MemoryInline::FlatRead8((r5 + 4));
    r6 = MemoryInline::FlatRead8((r5 + 5));
    r0 = MemoryInline::FlatRead8((r5 + 6));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 7));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 8));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 9));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 10));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 11));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 12));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 13));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 14));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 15));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 16));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 17));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 18));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 19));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 20));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 21));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r10));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r11));
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    MemoryInline::FlatWrite8((r5 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 12));
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8((r5 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r5 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r5 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 16));
    MemoryInline::FlatWrite8((r5 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 17));
    MemoryInline::FlatWrite8((r5 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 18));
    MemoryInline::FlatWrite8((r5 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 19));
    MemoryInline::FlatWrite8((r5 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 20));
    MemoryInline::FlatWrite8((r5 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 21));
    MemoryInline::FlatWrite8((r5 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 22));
    MemoryInline::FlatWrite8((r5 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    MemoryInline::FlatWrite8((r5 + 21), static_cast<uint8_t>(r0));
    r5 = (r5 + 22);
}

loc_8013B9AC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r6 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_8013B9B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013B874;
    }
}

loc_8013B9BC:
{
    ctr = r12;
    ctx->lr = 0x8013B9C4u;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8013B9C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013B848 func_8013B848 preserves=true fpr_mask=0x00000000
