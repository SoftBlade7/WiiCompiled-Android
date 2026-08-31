#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023D2B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023D2B4;

loc_8023D2B4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x802A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -25240), 0, 816u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 800u, (r2 + -24440));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    r5 = (r5 + 16104);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 808u, (r2 + -24432));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 812u, (r2 + -24428));
    r4 = MemoryInline::FlatRead32((r13 + -23792));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r6 = (r4 * 12);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r4 = (r5 + r6);
    r5_addr_0 = (r5 + r6);
    r0 = MemoryInline::FlatRead16(r5_addr_0);
    r4 = MemoryInline::FlatRead16((r4 + 2));
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r4 = 1;
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    // inline leaf 0x802276C0 (25 guest instruction(s))
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -25240));
    r8 = 0x802A0000u;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -25228));
    r8 = (r8 + 12416);
    r7 = MemoryInline::FlatRead32(r5);
    r0 = 1;
    r5 = MemoryInline::FlatRead32((r5 + 4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -25236));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -25232));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 56), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r3 + 48), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 52u, (r3 + 52), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802276C0
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 792u, (r2 + -24448));
    r3 = 0x802A0000u;
    r3 = (r3 + 16140);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 56), r3);
    MemoryInline::FlatWrite32((r31 + 60), r0);
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    r3 = MemoryInline::FlatRead32((r13 + -23788));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8023D354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023D368;
    }
}

loc_8023D358:
{
    r0 = MemoryInline::FlatRead16((r31 + 52));
    MemoryInline::FlatWrite32((r31 + 60), r3);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r31 + 52), static_cast<uint16_t>(r0));
}

loc_8023D368:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000200F gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023D2B4 func_8023D2B4 preserves=true fpr_mask=0x00000000
