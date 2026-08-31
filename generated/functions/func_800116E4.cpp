#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800116E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800116E4;

loc_800116E4:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    MemoryInline::FlatWriteRam32((r1 + 120), r30);
    r30 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80011720;
    }
}

loc_80011700:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 0u, (r1 + 40), f1.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 8u, (r1 + 48), f2.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 16u, (r1 + 56), f3.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 24u, (r1 + 64), f4.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 72), f5.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r1 + 80), f6.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 88), f7.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 56u, (r1 + 96), f8.d);
}

loc_80011720:
{
    r31 = 0x80270000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r4);
    r31 = (r31 + 3312);
    r4 = -1;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r3);
    r3 = (r31 + 80);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r7);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r10);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800155D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80011758:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80011764;
    }
}

loc_8001175C:
{
    r3 = -1;
    goto loc_80011798;
}

loc_80011764:
{
    r4 = (r1 + 136);
    r0 = (r1 + 8);
    r5 = 16777216;
    r3 = 0x80010000u;
    MemoryInline::FlatWriteRam32((r1 + 104), r5);
    r6 = (r1 + 104);
    r5 = r30;
    r3 = (r3 + 5664);
    MemoryInline::FlatWriteRam32((r1 + 108), r4);
    r4 = (r31 + 80);
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    ctx->lr = 0x80011798u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80010D74u>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80011798:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800116E4 func_800116E4 preserves=true fpr_mask=0x00000000
