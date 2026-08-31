#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807180C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807180C8;

loc_807180C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    ctx->lr = 0x807180ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8021A0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808D0000u;
    r30 = 0x808D0000u;
    r3 = (r3 + -28176);
    MemoryInline::FlatWrite32(r28, r3);
    r29 = (r28 + 16);
    r30 = (r30 + -28192);
    r31 = (r28 + 256);
}

loc_80718108:
{
    r3 = r29;
    // inline leaf 0x80213E1C (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25880));
    r4 = 0x802A0000u;
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    r4 = (r4 + 10624);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
    // end of inlined leaf 0x80213E1C
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r29 + 8), r30);
    r3 = (r29 + 28);
    // inline leaf 0x80213E1C (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25880));
    r4 = 0x802A0000u;
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 12), r0);
    r4 = (r4 + 10624);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 8), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 24), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 28u, r3, r0);
    // end of inlined leaf 0x80213E1C
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r29 + 36), r30);
    r29 = (r29 + 60);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r31));
}

loc_80718128:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80718108;
    }
}

loc_8071812C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r28;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807180C8 func_807180C8 preserves=true fpr_mask=0x00000000
