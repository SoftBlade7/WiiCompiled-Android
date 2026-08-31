#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056058C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lbzux_80560604_loc_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8056058C;

loc_8056058C:
{
    r8 = MemoryInline::FlatRead32((r3 + 20));
    r4 = 0x80890000u;
    r9 = MemoryInline::FlatRead8((r3 + 32));
    r0 = 0;
    r7 = MemoryInline::FlatRead32((r8 + 12));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5100));
    r7_addr_0 = (r7 + r6);
    r6 = MemoryInline::FlatRead32(r7_addr_0);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & -8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 8), 0, 40u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r6 + 20));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 33), 0, 52u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 11u, (r3 + 44), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r6 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 15u, (r3 + 48), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r6 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 19u, (r3 + 52), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r6 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 23u, (r3 + 56), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r6 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 27u, (r3 + 60), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r6 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 31u, (r3 + 64), f1.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 36u, (r6 + 44));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r3 + 68), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 37u, (r6 + 45));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r3 + 69), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 38u, (r6 + 46));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r3 + 70), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 39u, (r6 + 47));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r3 + 71), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r8 + 16));
    addr_lbzux_80560604_loc_0 = (r4 + r5);
    r7 = MemoryInline::FlatRead8(addr_lbzux_80560604_loc_0);
    r4 = addr_lbzux_80560604_loc_0;
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r3 + 72), static_cast<uint8_t>(r7));
    r6 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r3 + 73), static_cast<uint8_t>(r6));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r3 + 74), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r3 + 75), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r3 + 76), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r3 + 77), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r3 + 78), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r3 + 79), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 47u, (r3 + 80), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 51u, (r3 + 84), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 7u, (r3 + 40), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 33), static_cast<uint8_t>(r9));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056058C func_8056058C preserves=true fpr_mask=0x00000000
