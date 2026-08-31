#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80819114(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_subfic_ra_0 = 0;
    uint32_t r4_subfic_ra_1 = 0;
    uint32_t r4_subfic_ra_2 = 0;
    uint32_t r4_subfic_ra_3 = 0;
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

    goto loc_80819114;

loc_80819114:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 280), 0, 36u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 304));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_80819128:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 280));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r8))) {
        goto loc_8081913C;
    }
}

loc_80819134:
{
    r6 = 0;
    goto loc_80819180;
}

loc_8081913C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 308));
}

loc_80819144:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80819150;
    }
}

loc_80819148:
{
    r6 = 1;
    goto loc_80819180;
}

loc_80819150:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 312));
}

loc_80819158:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r7))) {
        goto loc_80819164;
    }
}

loc_8081915C:
{
    r6 = 2;
    goto loc_80819180;
}

loc_80819164:
{
    r5 = 0x808D0000u;
    r6 = 4;
    r0 = MemoryInline::FlatRead32((r5 + 26376));
    r0 = (r7 + r0);
}

loc_80819178:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80819180;
    }
}

loc_8081917C:
{
    r6 = 3;
}

loc_80819180:
{
}

loc_80819184:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_8081919C;
    }
}

loc_80819188:
{
}

loc_8081918C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_808192C4;
    }
}

loc_80819190:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(4));
}

loc_80819194:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808193C8;
    }
}

loc_80819198:
{
    goto loc_808193F4;
}

loc_8081919C:
{
}

loc_808191A0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r8))) {
        goto loc_808191C0;
    }
}

loc_808191A4:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat64((r3 + -19232));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    goto loc_8081926C;
}

loc_808191C0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 308));
}

loc_808191C8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_808191EC;
    }
}

loc_808191CC:
{
    r0 = (r4 - r8);
    r3 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r3 + -19232));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    goto loc_8081926C;
}

loc_808191EC:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 312));
}

loc_808191F4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_80819218;
    }
}

loc_808191F8:
{
    r0 = (r4 - r0);
    r3 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r3 + -19232));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    goto loc_8081926C;
}

loc_80819218:
{
    r3 = 0x808D0000u;
    r6 = MemoryInline::FlatRead32((r3 + 26376));
    r0 = (r5 + r6);
}

loc_80819228:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8081924C;
    }
}

loc_8081922C:
{
    r0 = (r4 - r5);
    r3 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r3 + -19232));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    goto loc_8081926C;
}

loc_8081924C:
{
    r0 = (r4 - r5);
    r3 = 0x808B0000u;
    r0 = (r0 - r6);
    f2.d = MemoryInline::FlatReadFloat64((r3 + -19232));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
}

loc_8081926C:
{
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & -536870912);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -1);
    r3 = (r0 + r3);
    r4 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_80819294:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8081929C;
    }
}

loc_80819298:
{
    r4_subfic_ra_1 = r4;
    r4 = (4 - r4_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r4_subfic_ra_1) ? 1u : 0u) << 29);
}

loc_8081929C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = 0x808B0000u;
    r0 = (r0 + r4);
    f2.d = MemoryInline::FlatReadFloat64((r3 + -19232));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_808193F4;
}

loc_808192C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r8));
}

loc_808192C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808192E8;
    }
}

loc_808192CC:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + -19232));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    goto loc_80819394;
}

loc_808192E8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 308));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_808192F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80819314;
    }
}

loc_808192F4:
{
    r0 = (r4 - r8);
    r4 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r4 + -19232));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    goto loc_80819394;
}

loc_80819314:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 312));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r6));
}

loc_8081931C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80819340;
    }
}

loc_80819320:
{
    r0 = (r4 - r0);
    r4 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r4 + -19232));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    goto loc_80819394;
}

loc_80819340:
{
    r5 = 0x808D0000u;
    r5 = MemoryInline::FlatRead32((r5 + 26376));
    r0 = (r6 + r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80819350:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80819374;
    }
}

loc_80819354:
{
    r0 = (r4 - r6);
    r4 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r4 + -19232));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    goto loc_80819394;
}

loc_80819374:
{
    r0 = (r4 - r6);
    r4 = 0x808B0000u;
    r0 = (r0 - r5);
    f2.d = MemoryInline::FlatReadFloat64((r4 + -19232));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
}

loc_80819394:
{
    f0.d = PPC_Fctiwz(f0.d);
    r4 = 0x808B0000u;
    f3.d = MemoryInline::FlatReadFloat64((r4 + -19232));
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 300));
    r0 = fctiwzword1;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    goto loc_808193F4;
}

loc_808193C8:
{
    r5 = 0x808D0000u;
    r4 = 0x808B0000u;
    r0 = MemoryInline::FlatRead32((r5 + 26376));
    f3.d = MemoryInline::FlatReadFloat64((r4 + -19232));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 300));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_808193F4:
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80819114 func_80819114 preserves=true fpr_mask=0x00000000
