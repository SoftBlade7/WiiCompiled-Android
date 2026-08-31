#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80809CDC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80809CDC;

loc_80809CDC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r7 = 1127219200;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 272), 0, 24u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 292));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 280));
    r5 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r6));
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    r5 = (r5 * r6);
    r7 = (r4 - r5);
}

loc_80809D04:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r0))) {
        goto loc_80809D10;
    }
}

loc_80809D08:
{
    r5 = 0;
    goto loc_80809D40;
}

loc_80809D10:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 284));
    r4 = (r0 + r6);
}

loc_80809D1C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_80809D28;
    }
}

loc_80809D20:
{
    r5 = 1;
    goto loc_80809D40;
}

loc_80809D28:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r5 = 3;
    r4 = (r4 + r6);
}

loc_80809D38:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_80809D40;
    }
}

loc_80809D3C:
{
    r5 = 2;
}

loc_80809D40:
{
}

loc_80809D44:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_80809D64;
    }
}

loc_80809D48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_80809D4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80809D9C;
    }
}

loc_80809D50:
{
}

loc_80809D54:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80809DA8;
    }
}

loc_80809D58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_80809D5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80809EAC;
    }
}

loc_80809D60:
{
    goto loc_80809FB4;
}

loc_80809D64:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 272));
    r4 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80809D70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80809D78;
    }
}

loc_80809D74:
{
    r4 = -1;
}

loc_80809D78:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 0x808B0000u;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 276));
    f2.d = MemoryInline::FlatReadFloat64((r4 + -20360));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_80809FBC;
}

loc_80809D9C:
{
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -20376));
    goto loc_80809FBC;
}

loc_80809DA8:
{
}

loc_80809DAC:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r0))) {
        goto loc_80809DCC;
    }
}

loc_80809DB0:
{
    r4 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -20360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80809E50;
}

loc_80809DCC:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 284));
    r8 = (r0 + r6);
}

loc_80809DD8:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r8))) {
        goto loc_80809DFC;
    }
}

loc_80809DDC:
{
    r4 = (r7 - r0);
    r5 = 0x808B0000u;
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = MemoryInline::FlatReadFloat64((r5 + -20360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80809E50;
}

loc_80809DFC:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
    r4 = (r5 + r6);
}

loc_80809E08:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_80809E2C;
    }
}

loc_80809E0C:
{
    r4 = (r7 - r8);
    r5 = 0x808B0000u;
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f1.d = MemoryInline::FlatReadFloat64((r5 + -20360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80809E50;
}

loc_80809E2C:
{
    r5 = (0 - r5);
    r4 = 0x808B0000u;
    r5 = (r5 - r6);
    f1.d = MemoryInline::FlatReadFloat64((r4 + -20360));
    r4 = (r5 + r7);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_80809E50:
{
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 272));
    r5 = 1;
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80809E64:
{
    r4 = MemoryInline::FlatRead32((r1 + 28));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80809E70;
    }
}

loc_80809E6C:
{
    r5 = -1;
}

loc_80809E70:
{
    r5 = (r4 * r5);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r4 + -20360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_80809FBC;
}

loc_80809EAC:
{
}

loc_80809EB0:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r0))) {
        goto loc_80809ED0;
    }
}

loc_80809EB4:
{
    r4 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -20360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80809F54;
}

loc_80809ED0:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 284));
    r8 = (r0 + r6);
}

loc_80809EDC:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r8))) {
        goto loc_80809F00;
    }
}

loc_80809EE0:
{
    r4 = (r7 - r0);
    r5 = 0x808B0000u;
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = MemoryInline::FlatReadFloat64((r5 + -20360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80809F54;
}

loc_80809F00:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r4 = (r5 + r6);
}

loc_80809F0C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_80809F30;
    }
}

loc_80809F10:
{
    r4 = (r7 - r8);
    r5 = 0x808B0000u;
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f1.d = MemoryInline::FlatReadFloat64((r5 + -20360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80809F54;
}

loc_80809F30:
{
    r5 = (0 - r5);
    r4 = 0x808B0000u;
    r5 = (r5 - r6);
    f1.d = MemoryInline::FlatReadFloat64((r4 + -20360));
    r4 = (r5 + r7);
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_80809F54:
{
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 272));
    r6 = 1;
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80809F68:
{
    r4 = MemoryInline::FlatRead32((r1 + 28));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80809F74;
    }
}

loc_80809F70:
{
    r6 = -1;
}

loc_80809F74:
{
    r5 = (r0 - r4);
    r0 = (r0 ^ -2147483648);
    r5 = (r6 * r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 0x808B0000u;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 276));
    f3.d = MemoryInline::FlatReadFloat64((r4 + -20360));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_80809FBC;
}

loc_80809FB4:
{
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -20376));
}

loc_80809FBC:
{
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x0000000D fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80809CDC func_80809CDC preserves=true fpr_mask=0x00000000
