#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80780D88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80780D88;

loc_80780D88:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 17872);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 260), 0, 181u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 260));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 180u, (r3 + 440));
    r30 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80780DBC:
{
    r6 = MemoryInline::FlatRead32((r30 + 108));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80780E2C;
    }
}

loc_80780DC4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r3 + 416));
    r5 = 0x802A0000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r6 + 100), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r6 + 100), f0.d);
    r4 = (r5 + 16688);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 160u, (r3 + 420));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r6 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r3 + 424));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r6 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 168u, (r3 + 428));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r6 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 172u, (r3 + 432));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r6 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r3 + 436));
    r3 = r6;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r6 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16688));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r6 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r6 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r6 + 132), f0.d);
    r12 = MemoryInline::FlatRead32(r6);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80780E28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80780E84;
}

loc_80780E2C:
{
    f2.d = MemoryInline::FlatReadFloat32(r31);
    r5 = 0x802A0000u;
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + 100), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r6 + 100), f2.d);
    r4 = (r5 + 16688);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 96));
    r3 = r6;
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r6 + 104), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 100));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r6 + 108), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r6 + 112), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r6 + 116), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r6 + 120), f2.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16688));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r6 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r6 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r6 + 132), f0.d);
    r12 = MemoryInline::FlatRead32(r6);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80780E84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80780E84:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 104));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 344), f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    MemoryInline::FlatWrite8((r29 + 280), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEF8F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80780D88 func_80780D88 preserves=true fpr_mask=0x00000000
