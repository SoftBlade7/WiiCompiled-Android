#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FAE60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_806FAED0_loc_0 = 0;
    uint32_t addr_lfsx_806FAEE0_loc_0 = 0;
    uint32_t addr_lfsx_806FAEE4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    uint32_t cr = ctx->cr;

    goto loc_806FAE60;

loc_806FAE60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 4344);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 104), 0, 32u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 104));
    MemoryInline::FlatWrite32((r3 + 80), r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 220));
    MemoryInline::FlatWrite32((r3 + 84), r0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FAE98:
{
    r0 = MemoryInline::FlatRead16((r4 + 156));
    MemoryInline::FlatWrite32(r3, r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FAF18;
    }
}

loc_806FAEA4:
{
    r4 = 0x809C0000u;
    r5 = 0x808A0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = (r0 * 12);
    r5 = (r5 + 4528);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 108));
    r7 = MemoryInline::FlatRead32((r6 + 2924));
    r4 = (r31 + 0);
    r6 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    addr_lfsx_806FAED0_loc_0 = (r4 + r0);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_806FAED0_loc_0);
    r5 = (r31 + 12);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    r4 = (r31 + 24);
    addr_lfsx_806FAEE0_loc_0 = (r5 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_806FAEE0_loc_0);
    addr_lfsx_806FAEE4_loc_0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_806FAEE4_loc_0);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 112));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
}

loc_806FAF18:
{
    r3 = MemoryInline::FlatRead32((r3 + 84));
    // inline leaf 0x805910B0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    // end of inlined leaf 0x805910B0
    f3.d = MemoryInline::FlatReadFloat32((r30 + 8));
    r0 = 0;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 108));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 116));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 24), 0, 53u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r30 + 64), f1.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f10.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 104));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 120));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 128));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 132));
        }
    }
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d / f10.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r30 + 24), f9.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r30 + 52), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r30 + 48), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r30 + 60), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r30 + 56), f4.d);
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f7.d / f10.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r30 + 28), f8.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r30 + 36), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r30 + 40), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r30 + 44), f2.d);
    MemoryInline::WriteResolved8(guest_range_1, 52u, (r30 + 76), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r30 + 32), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r30 + 72), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FA gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806FAE60 func_806FAE60 preserves=true fpr_mask=0x00000000
