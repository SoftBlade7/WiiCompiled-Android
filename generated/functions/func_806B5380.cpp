#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B5380(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806B5380;

loc_806B5380:
{
    f9.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r7 = 0x808A0000u;
    f7.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f5.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f10.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f7.d));
    f8.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f6.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f8.d));
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f8.d));
    f4.d = MemoryInline::FlatReadFloat32((r7 + -3860));
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 120u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r1 + 104), f10.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r1 + 108), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r1 + 112), f8.d);
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r1 + 116), f7.d);
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_806B53D4:
{
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r1 + 120), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r1 + 124), f5.d);
    }
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
}

loc_806B53E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806B5490;
    }
}

loc_806B53EC:
{
    f11.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f12.d = MemoryInline::FlatReadFloat32(r6);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r1 + 80), f12.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f8.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r1 + 84), f11.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r1 + 88), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r1 + 92), f7.d);
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r1 + 96), f10.d);
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_806B5420:
{
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r1 + 100), f9.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f10.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f9.d));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f10.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r1 + 56), f12.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r1 + 60), f11.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r1 + 64), f10.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r1 + 68), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r1 + 72), f6.d);
    }
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_806B5464:
{
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r1 + 76), f5.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r4 = cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B5474:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & 1);
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B5488;
    }
}

loc_806B5480:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806B5484:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B5528;
    }
}

loc_806B5488:
{
    r3 = 1;
    goto loc_806B5528;
}

loc_806B5490:
{
    f11.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f12.d = MemoryInline::FlatReadFloat32(r6);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f7.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 32), f12.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f8.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 36), f11.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r1 + 40), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 44), f7.d);
    }
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r1 + 48), f10.d);
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_806B54C4:
{
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r1 + 52), f9.d);
    r0 = cr;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f10.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f9.d));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f10.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r1 + 8), f12.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f9.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r1 + 12), f11.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 16), f10.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 20), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 24), f6.d);
    }
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_806B5504:
{
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 28), f5.d);
    r4 = cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B5510:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 1);
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B5524;
    }
}

loc_806B551C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806B5520:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B5528;
    }
}

loc_806B5524:
{
    r3 = 1;
}

loc_806B5528:
{
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000009B gpr_return=0x00000018 fpr_read=0x00001FFF fpr_write=0x00001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806B5380 func_806B5380 preserves=true fpr_mask=0x00000000
