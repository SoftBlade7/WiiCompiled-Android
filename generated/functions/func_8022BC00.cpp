#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022BC00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8022BC50_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_rot_0 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    goto loc_8022BC00;

loc_8022BC00:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r10 = 1127219200;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 172u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 160u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 160u, (r3 + 164));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r3 + 168));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 168u, (r3 + 172));
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 4));
    MemoryInline::FlatWriteFloat32(r5, f2.d);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 132u, (r3 + 136));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    MemoryInline::FlatWriteFloat32((r5 + 4), f1.d);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 133u, (r3 + 137));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 134u, (r3 + 138));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 135u, (r3 + 139));
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 4u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r6, static_cast<uint8_t>(r9));
    r3 = MemoryInline::FlatRead32((r4 + 72));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r6 + 1), static_cast<uint8_t>(r8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25080));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r6 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r6 + 3), static_cast<uint8_t>(r5));
    addr_lfsx_8022BC50_loc_0 = (r3 + r0);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_8022BC50_loc_0);
    MemoryInline::FlatWriteRam32((r1 + 8), r10);
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_8022BC5C:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r10);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022BCEC;
    }
}

loc_8022BC64:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -25056));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f3.d = PpcFmulsInline(f1.d, f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = PPC_Fctiwz(f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    fctiwzword0 = PPC_FprLowWordInline(f3.d);
    f2.d = PpcFmulsInline(f2.d, f5.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    r5 = fctiwzword0;
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f2.d = PPC_Fctiwz(f2.d);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r6, static_cast<uint8_t>(r5));
    f1.d = PPC_Fctiwz(f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f2.d);
    fctiwzword2 = PPC_FprLowWordInline(f1.d);
    r4 = fctiwzword1;
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword2;
    r0 = fctiwzword3;
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r6 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r6 + 3), static_cast<uint8_t>(r0));
    goto loc_8022BCFC;
}

loc_8022BCEC:
{
    MemoryInline::WriteResolved8(guest_range_1, 0u, r6, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r6 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r6 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r6 + 3), static_cast<uint8_t>(r5));
}

loc_8022BCFC:
{
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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

// RECOMP_GUEST_ABI gpr_read=0x000007FE gpr_write=0x000007BB gpr_return=0x00000018 fpr_read=0x00000020 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022BC00 func_8022BC00 preserves=true fpr_mask=0x00000000
