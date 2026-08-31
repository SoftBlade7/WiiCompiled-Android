#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807805D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_807805D0;

loc_807805D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = (r7 + 11760);
    r6 = (r7 + 64);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r5 = (r7 + 40);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r31 = (r31 + 17872);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 260));
    guest_range_1 = MemoryInline::ResolveRangeHost((r7 + 16), 0, 60u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r7 + 64));
    r30 = MemoryInline::FlatRead32((r4 + 16));
    r4 = (r7 + 16);
    r8 = MemoryInline::FlatRead32((r30 + 108));
    guest_range_0 = MemoryInline::ResolveRangeHost((r8 + 100), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r8 + 124), f0.d);
    r3 = r8;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r6 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r8 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 56u, (r6 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r8 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r7 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r8 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r8 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r8 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r7 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r8 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r8 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r8 + 108), f0.d);
    r12 = MemoryInline::FlatRead32(r8);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80780670u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 12));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8078067C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807806B0;
    }
}

loc_80780680:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r4 = (r1 + 12);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 16), f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
}

loc_807806B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 316));
    r4 = 0x802A0000u;
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    r3 = (r4 + 16664);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 320));
    MemoryInline::FlatWriteFloat32((r30 + 44), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 324));
    MemoryInline::FlatWriteFloat32((r30 + 48), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 16664));
    MemoryInline::FlatWriteFloat32((r29 + 264), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 268), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 272), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 276), f0.d);
    MemoryInline::FlatWrite8((r29 + 280), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEE3E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807805D0 func_807805D0 preserves=true fpr_mask=0x00000000
