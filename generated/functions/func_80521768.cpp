#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80521768(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80521768;

loc_80521768:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->lr = 0x80521788u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80521198u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 228));
}

loc_80521790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805217FC;
    }
}

loc_80521794:
{
    r3 = MemoryInline::FlatRead8((r30 + 60));
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -832));
    r5 = 0;
    r4 = 7;
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r3 = (r3 & -129);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r5));
    r0 = (r0 & -129);
    MemoryInline::FlatWrite16((r30 + 46), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteFloat32((r30 + 52), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    MemoryInline::FlatWrite8((r30 + 56), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 57), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 58), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r30 + 59), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r30 + 60), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r30 + 70), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    MemoryInline::FlatWrite8((r30 + 80), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 81), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r30 + 82), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r30 + 83), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
}

loc_805217FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80521800:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052182C;
    }
}

loc_80521804:
{
    r3 = MemoryInline::FlatRead32((r30 + 232));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80521810:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052182C;
    }
}

loc_80521814:
{
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r5 = MemoryInline::FlatRead8((r30 + 56));
    r6 = MemoryInline::FlatRead8((r30 + 57));
    r4 = (r0 & 31);
    r7 = MemoryInline::FlatRead8((r30 + 59));
    ctx->lr = 0x8052182Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80524E74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052182C:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80521768 func_80521768 preserves=true fpr_mask=0x00000000
