#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021EC40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;

    goto loc_8021EC40;

loc_8021EC40:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -25424), 0, 64u, true, false);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -25388));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 26), 0, 106u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 6u, (r3 + 32));
    r4 = MemoryInline::FlatRead32((r13 + -23936));
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f6.d);
}

loc_8021EC58:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8021EC64;
    }
}

loc_8021EC60:
{
    goto loc_8021EC68;
}

loc_8021EC64:
{
    f6.d = f0.d;
}

loc_8021EC68:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f2.d = (-(f6.d));
    f7.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f5.d = (-(f3.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -25396));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -25424));
    f3.d = PpcFmulsInline(f7.d, f3.d);
    f5.d = PpcFmulsInline(f6.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8021ECA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021ECAC;
    }
}

loc_8021ECA8:
{
    goto loc_8021ECC0;
}

loc_8021ECAC:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8021ECB0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021ECBC;
    }
}

loc_8021ECB4:
{
    f0.d = f1.d;
    goto loc_8021ECC0;
}

loc_8021ECBC:
{
    f0.d = f2.d;
}

loc_8021ECC0:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 10u, (r3 + 36));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -25384));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 6u, (r3 + 32));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -25388));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f7.d);
}

loc_8021ECE0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8021ECEC;
    }
}

loc_8021ECE8:
{
    goto loc_8021ECF0;
}

loc_8021ECEC:
{
    f7.d = f1.d;
}

loc_8021ECF0:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f2.d = (-(f7.d));
    f8.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f5.d = (-(f3.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -25396));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f3.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -25424));
    f3.d = PpcFmulsInline(f8.d, f3.d);
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f2.d, f6.d);
}

loc_8021ED2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021ED34;
    }
}

loc_8021ED30:
{
    goto loc_8021ED48;
}

loc_8021ED34:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8021ED38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021ED44;
    }
}

loc_8021ED3C:
{
    f6.d = f1.d;
    goto loc_8021ED48;
}

loc_8021ED44:
{
    f6.d = f2.d;
}

loc_8021ED48:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 10u, (r3 + 36));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -25384));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 6u, (r3 + 32));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -25388));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f7.d);
}

loc_8021ED68:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8021ED74;
    }
}

loc_8021ED70:
{
    goto loc_8021ED78;
}

loc_8021ED74:
{
    f7.d = f1.d;
}

loc_8021ED78:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f2.d = (-(f7.d));
    f8.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f5.d = (-(f3.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -25396));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f3.d));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -25424));
    f3.d = PpcFmulsInline(f8.d, f3.d);
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f2.d, f9.d);
}

loc_8021EDB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021EDBC;
    }
}

loc_8021EDB8:
{
    goto loc_8021EDD0;
}

loc_8021EDBC:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8021EDC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8021EDCC;
    }
}

loc_8021EDC4:
{
    f9.d = f1.d;
    goto loc_8021EDD0;
}

loc_8021EDCC:
{
    f9.d = f2.d;
}

loc_8021EDD0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -25380));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    SetCRFloatResident(cr, 0, f9.d, f1.d);
}

loc_8021EDDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8021EDE4;
    }
}

loc_8021EDE0:
{
    f9.d = f1.d;
}

loc_8021EDE4:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 102u, (r3 + 128));
    r0 = 1127219200;
    r6 = 0x80250000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = (r6 + 30340);
    r5 = (r2 + -25392);
    MemoryInline::FlatWriteFloat32((r4 + 68), f6.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -25368));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 102u, (r3 + 128));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r2 + -25376));
    MemoryInline::FlatWriteFloat32((r4 + 64), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -25384));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 102u, (r3 + 128));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -25372));
    MemoryInline::FlatWriteFloat32((r4 + 72), f9.d);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 26u, (r3 + 52));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 102u, (r3 + 128));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6_addr_0 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_0);
    MemoryInline::FlatWrite32((r4 + 88), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 22u, (r3 + 48));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 98u, (r3 + 124));
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_0);
    MemoryInline::FlatWrite8((r4 + 48), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 98u, (r3 + 124));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 18u, (r3 + 44));
    MemoryInline::FlatWriteFloat32((r4 + 60), f1.d);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 98u, (r3 + 124));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 26));
    r4 = MemoryInline::FlatRead8((r5 + 48));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f2.d = PPC_Fctiwz(f2.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    r4 = fctiwzword0;
    MemoryInline::FlatWrite8((r5 + 49), static_cast<uint8_t>(r4));
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWrite8((r5 + 50), static_cast<uint8_t>(r4));
    r0 = fctiwzword1;
    MemoryInline::FlatWrite8((r5 + 51), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 52), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 94u, (r3 + 120));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 18u, (r3 + 44));
    MemoryInline::FlatWriteFloat32((r4 + 40), f0.d);
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000201E gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x000002C7 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021EC40 func_8021EC40 preserves=true fpr_mask=0x00000000
