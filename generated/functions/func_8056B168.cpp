#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056B168(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8056B1A4_loc_0 = 0;
    uint32_t addr_lfsx_8056B1B0_loc_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_8056B168;

loc_8056B168:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r6 = (r3 + 16);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 1);
    r5 = 0x808B0000u;
    r3 = (0 - r0);
    f8.d = MemoryInline::FlatReadFloat32((r6 + 28));
    r0 = 3;
    r5 = (r5 + 20656);
    r0 = (r0 & ~r3);
    r3 = 0x808B0000u;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r7 = (r7_rot_0 & -4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r6, r0);
    r3 = (r3 + 20672);
    f5.d = MemoryInline::FlatReadFloat32((r6 + 32));
    r4 = (r6 + r7);
    addr_lfsx_8056B1A4_loc_0 = (r3 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8056B1A4_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 64));
    r3 = 0x80890000u;
    addr_lfsx_8056B1B0_loc_0 = (r5 + r7);
    f9.d = MemoryInline::FlatReadFloat32(addr_lfsx_8056B1B0_loc_0);
    r0 = 1;
    f3.d = MemoryInline::FlatReadFloat32((r6 + 36));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f8.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 5688));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r6 + 44), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f7.d));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r6 + 40), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r6 + 16), f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r6 + 20), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r6 + 24), f0.d);
    f2.d = PpcFmulsInline(f6.d, f9.d);
    f1.d = PpcFmulsInline(f4.d, f9.d);
    f0.d = PpcFmulsInline(f0.d, f9.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r6 + 4), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r6 + 8), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r6 + 12), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056B168 func_8056B168 preserves=true fpr_mask=0x00000000
