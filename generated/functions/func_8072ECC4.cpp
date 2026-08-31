#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072ECC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8072ECC4;

loc_8072ECC4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r12 = MemoryInline::FlatRead32((r3 + 52));
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r30 = MemoryInline::FlatRead32(r4);
    ctr = r12;
    ctx->lr = 0x8072ECF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x808A0000u;
    r4 = MemoryInline::FlatRead32((r29 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 9792));
    r31 = 0x808A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 41u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r4 + 8), f1.d);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 9796));
    r3 = r30;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r4 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r4, f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r4 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r4 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r4 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r4 + 24), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r4 + 32), f1.d);
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r4 + 36), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r4 + 37), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r4 + 38), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r4 + 39), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r4 + 40), static_cast<uint8_t>(r0));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -23660));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8072ED5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8072ED74;
    }
}

loc_8072ED60:
{
    r4 = 0x808D0000u;
    r3 = MemoryInline::FlatRead32((r29 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -23664));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    goto loc_8072ED80;
}

loc_8072ED74:
{
    r3 = MemoryInline::FlatRead32((r29 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 9796));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
}

loc_8072ED80:
{
    r12 = MemoryInline::FlatRead32((r29 + 52));
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r29 + 80));
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8072ED98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r12 = MemoryInline::FlatRead32((r29 + 52));
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r29 + 80));
    r12 = MemoryInline::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x8072EDB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072ECC4 func_8072ECC4 preserves=true fpr_mask=0x00000000
