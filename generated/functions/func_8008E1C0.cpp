#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008E1C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008E1C0;

loc_8008E1C0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f4.d = MemoryInline::FlatReadFloat32((r2 + -28708));
}

loc_8008E1D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28712));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 48), 0, 176u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 124), r0);
    MemoryInline::WriteResolved8(guest_range_0, 80u, (r3 + 128), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 72u, (r3 + 120), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 73u, (r3 + 121), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 74u, (r3 + 122), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 75u, (r3 + 123), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 132), r0);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 136), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 88), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 92), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 96), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 100), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 104), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 108), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 112), r0);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 116), r0);
    }
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r0))) {
        goto loc_8008E21C;
    }
}

loc_8008E218:
{
    goto loc_8008E258;
}

loc_8008E21C:
{
    r4 = (r0 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -28704));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8008E258:
{
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28712));
    r4 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28708));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8008E270:
{
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 88), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 92), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 96), r4);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 100), r0);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r3 + 164), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (r3 + 176), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 168), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (r3 + 172), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r3 + 148), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r3 + 152), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 156), r0);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 160), r0);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 132u, (r3 + 180), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008E2AC;
    }
}

loc_8008E2A8:
{
    r4 = MemoryInline::FlatRead32((r5 + 52));
}

loc_8008E2AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28708));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28712));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 184), r4);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 140u, (r3 + 188), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 144u, (r3 + 192), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r3 + 196), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r3 + 200), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 156u, (r3 + 204), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 160u, (r3 + 208), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 164u, (r3 + 212), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 168u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 168u, (r3 + 216), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 172u, (r3 + 220), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 52), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 60), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 64), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 68), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 72), r0);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008E1C0 func_8008E1C0 preserves=true fpr_mask=0x00000000
