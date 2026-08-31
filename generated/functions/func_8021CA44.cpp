#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021CA44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8021CA44;

loc_8021CA44:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 24), 0, 180u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 24));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8021CA50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8021CCA8;
    }
}

loc_8021CA54:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -25512), 0, 64u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r2 + -25476));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 56));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r2 + -25480));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r2 + -25472));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 48), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 44u, (r3 + 68));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 36u, (r3 + 60));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8021CA84:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 37u, (r3 + 61));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 38u, (r3 + 62));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 39u, (r3 + 63));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8021CAAC;
    }
}

loc_8021CAA4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_8021CAAC:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 26));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -25456));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r2 + -25468));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -25508));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 28));
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite8((r4 + 44), static_cast<uint8_t>(r0));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    r0 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite8((r4 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 10));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWrite8((r4 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    MemoryInline::FlatWrite8((r4 + 47), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r3 + 76));
    f0.d = PpcFmulsInline(f0.d, f6.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8021CB08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021CB10;
    }
}

loc_8021CB0C:
{
    goto loc_8021CB14;
}

loc_8021CB10:
{
    f3.d = f0.d;
}

loc_8021CB14:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r2 + -25472));
    r0 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r3 + 76));
    r6 = r3;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r2 + -25464));
    f2.d = PpcFmulsInline(f5.d, f3.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 40));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -25512));
    f2.d = PPC_Fctiwz(f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -25500));
    r8 = 0;
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    r7 = fctiwzword0;
    r5 = fctiwzword1;
    MemoryInline::FlatWrite8((r4 + 48), static_cast<uint8_t>(r5));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -25508));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 40));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r3 + 72));
    MemoryInline::FlatWriteFloat32((r4 + 40), f3.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 32));
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r0));
    r0 = fctiwzword2;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 32));
    MemoryInline::FlatWrite8((r4 + 48), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 32));
    MemoryInline::FlatWrite8((r4 + 49), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r4 + 50), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r4 + 51), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r4 + 52), static_cast<uint8_t>(r7));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 32));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r3 + 72));
    MemoryInline::FlatWriteFloat32((r4 + 60), f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r3 + 108));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r3 + 104));
        }
    }
    f3.d = PpcFmulsInline(f4.d, f3.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 36));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 145u, (r3 + 169));
    MemoryInline::FlatWriteFloat32((r3 + 140), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 136), f0.d);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r0));
    goto loc_8021CC44;
}

loc_8021CBD4:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 108));
    f0.d = PpcFmulsInline(f6.d, f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8021CBE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021CBE8;
    }
}

loc_8021CBE4:
{
    f0.d = f1.d;
}

loc_8021CBE8:
{
    f0.d = PpcFmulsInline(f5.d, f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 36));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r7 = (r7_rot_2 & 4080);
    r5 = (r8 + 1);
    r4 = (r0 + r7);
    r6 = (r6 + 32);
    f0.d = PPC_Fctiwz(f0.d);
    r8 = (r8 + 1);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWrite8((r4 + 49), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 50), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 51), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r3 + 104));
    r4 = (r0 + r7);
    MemoryInline::FlatWriteFloat32((r4 + 60), f0.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 26));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 36));
    r5 = (r5 * r4);
    r4 = (r0 + r7);
    MemoryInline::FlatWrite8((r4 + 48), static_cast<uint8_t>(r5));
}

loc_8021CC44:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 145u, (r3 + 169));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_8021CC4C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8021CBD4;
    }
}

loc_8021CC50:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 44));
    r5 = 0x80250000u;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 172u, (r3 + 196));
    r5 = (r5 + 30296);
    MemoryInline::FlatWriteFloat32((r4 + 60), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 44));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 176u, (r3 + 200));
    MemoryInline::FlatWriteFloat32((r4 + 80), f0.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 48));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 40u, (r3 + 64));
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 41u, (r3 + 65));
    MemoryInline::FlatWrite8((r4 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 42u, (r3 + 66));
    MemoryInline::FlatWrite8((r4 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 43u, (r3 + 67));
    MemoryInline::FlatWrite8((r4 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 144u, (r3 + 168));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 48));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_1 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_1);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8021CCA8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 24));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 28));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 1);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021CA44 func_8021CA44 preserves=true fpr_mask=0x00000000
