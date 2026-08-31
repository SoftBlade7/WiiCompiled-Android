#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006A120(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006A120;

loc_8006A120:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8006A134:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A234;
    }
}

loc_8006A13C:
{
    r0 = 33;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 112), 0, 156u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 112), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -29424), 0, 40u, true, false);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -29424));
    r0 = 0;
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 116), f7.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -29420));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 120), f7.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -29416));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 124), f0.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -29412));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 128), f7.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -29408));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 132), f6.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -29404));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 136), f7.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -29400));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 140), f7.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -29392));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 144), f7.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -29396));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 148), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 152), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 156), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 160), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 164), f7.d);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 168), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 172), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 176), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 180), f1.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 184), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 188), f7.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 192), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 196), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 200), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 204), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 208), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r3 + 212), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r3 + 216), f0.d);
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r3 + 220), f7.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r3 + 224), f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r3 + 228), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 232), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (r3 + 236), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (r3 + 240), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 244), r0);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 248), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 252), r4);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 256), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 260), r0);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r3 + 264), r0);
    }
}

loc_8006A234:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006A120 func_8006A120 preserves=true fpr_mask=0x00000000
