#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F1E14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F1E14;

loc_805F1E14:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0;
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead8((r3 + 13));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1E50;
    }
}

loc_805F1E4C:
{
    r6 = 1;
}

loc_805F1E50:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1E64;
    }
}

loc_805F1E60:
{
    r6 = (r6 + 1);
}

loc_805F1E64:
{
    r0 = 2;
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1E78;
    }
}

loc_805F1E74:
{
    r6 = (r6 + 1);
}

loc_805F1E78:
{
    r0 = 3;
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1E8C;
    }
}

loc_805F1E88:
{
    r6 = (r6 + 1);
}

loc_805F1E8C:
{
    r0 = 4;
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F1EA0;
    }
}

loc_805F1E9C:
{
    r6 = (r6 + 1);
}

loc_805F1EA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_805F1EA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F1EAC;
    }
}

loc_805F1EA8:
{
    r5 = 1;
}

loc_805F1EAC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r31 = (r3 + 92);
    r30 = 0;
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r5));
}

loc_805F1EC0:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805F1ED4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
    r31 = (r31 + 92);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(5));
}

loc_805F1EE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F1EC0;
    }
}

loc_805F1EE4:
{
    r3 = (r1 + 8);
    r4 = (r29 + 16);
    // inline leaf 0x8022F7EC (6 guest instruction(s))
    r5 = 0x802A0000u;
    r5 = (r5 + 12720);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    // end of inlined leaf 0x8022F7EC
    goto loc_805F1F14;
}

loc_805F1EF4:
{
    r3 = (r1 + 8);
    // inline leaf 0x8022F804 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x8022F804
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805EFEF4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_805F1F08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805F1F14;
    }
}

loc_805F1F0C:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_805F1F14:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F1F1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F1EF4;
    }
}

loc_805F1F20:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805F1E14 func_805F1E14 preserves=true fpr_mask=0x00000000
