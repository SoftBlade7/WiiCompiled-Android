#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80863A9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80863A9C;

loc_80863A9C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0x808B0000u;
    r30 = r3;
    r31 = (r31 + -1200);
    r5 = 0;
    r3 = (r3 + 148);
    ctx->lr = 0x80863AC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80702714u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 152));
    MemoryInline::FlatWrite32((r30 + 1728), r3);
    // inline leaf 0x80590650 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80590650
    MemoryInline::FlatWrite8((r30 + 1786), static_cast<uint8_t>(r3));
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r30 + 1728));
    r4 = MemoryInline::FlatRead32((r5 + 256));
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r30 + 1787), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8((r30 + 1788), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
}

loc_80863B14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80863B24;
    }
}

loc_80863B18:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1789), static_cast<uint8_t>(r0));
    goto loc_80863B2C;
}

loc_80863B24:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1789), static_cast<uint8_t>(r0));
}

loc_80863B2C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1788));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80863B34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80863EA0;
    }
}

loc_80863B38:
{
    r3 = MemoryInline::FlatRead32((r30 + 1728));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r30 + 156), static_cast<uint16_t>(r0));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    MemoryInline::FlatWrite8((r30 + 1772), static_cast<uint8_t>(r3));
    r0 = r3;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r4 = (r0 & 255);
    // inline leaf 0x80531F18 (5 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 45));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F18
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r30 + 1773), static_cast<uint8_t>(r3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80863B8C;
    }
}

loc_80863B78:
{
    r0 = MemoryInline::FlatRead8((r30 + 1786));
}

loc_80863B80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80863B8C;
    }
}

loc_80863B84:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1786), static_cast<uint8_t>(r0));
}

loc_80863B8C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1786));
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 1791), static_cast<uint8_t>(r3));
}

loc_80863B9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80863BEC;
    }
}

loc_80863BA0:
{
    r29 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r29 + -10456));
}

loc_80863BAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80863BEC;
    }
}

loc_80863BB0:
{
    r3 = 0x809C0000u;
    r4 = 9;
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r3 = MemoryInline::FlatRead32((r3 + 1468));
    // inline leaf 0x800A1550 (4 guest instruction(s))
    r0 = (r4 * 92);
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r3 = (r3 + r0);
    // end of inlined leaf 0x800A1550
    r3 = MemoryInline::FlatRead32((r29 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_80863BD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80863BEC;
    }
}

loc_80863BD4:
{
    r0 = MemoryInline::FlatRead8((r3 + 37));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80863BDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80863BEC;
    }
}

loc_80863BE0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1791), static_cast<uint8_t>(r0));
    goto loc_80863EA0;
}

loc_80863BEC:
{
    r29 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r30 + 1772));
    r3 = MemoryInline::FlatRead32((r29 + 18240));
    r5 = r30;
    // inline leaf 0x80869098 (4 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 16364), r5);
    // end of inlined leaf 0x80869098
    r0 = MemoryInline::FlatRead8((r30 + 1772));
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1032));
    r3 = -1;
}

loc_80863C14:
{
    MemoryInline::FlatWrite32((r30 + 284), r3);
    MemoryInline::FlatWrite32((r30 + 288), r3);
    MemoryInline::FlatWrite32((r30 + 292), r4);
    MemoryInline::FlatWrite32((r30 + 296), r4);
    MemoryInline::FlatWriteFloat32((r30 + 300), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 1764), f0.d);
    MemoryInline::FlatWrite8((r30 + 304), static_cast<uint8_t>(r4));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80863C3C;
    }
}

loc_80863C34:
{
    r3 = MemoryInline::FlatRead32((r29 + 18240));
    MemoryInline::FlatWrite32((r3 + 17056), r4);
}

loc_80863C3C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1787));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80863C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863CC8;
    }
}

loc_80863C48:
{
    r28 = MemoryInline::FlatRead8((r30 + 1786));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80863C50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863CA4;
    }
}

loc_80863C54:
{
    r29 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r30 + 1772));
    r3 = MemoryInline::FlatRead32((r29 + 18240));
    // inline leaf 0x808690FC (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 17056));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & -16);
    r0 = (r5 + 1);
    r4 = (r3 + r4);
    MemoryInline::FlatWrite32((r3 + 17056), r0);
    r3 = (r4 + 16992);
    // end of inlined leaf 0x808690FC
    r0 = MemoryInline::FlatRead32(r3);
    r4 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80863C70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80863C98;
    }
}

loc_80863C74:
{
    r29 = MemoryInline::FlatRead32((r29 + 18240));
    r3 = MemoryInline::FlatRead32((r30 + 1728));
    // inline leaf 0x807D30F4 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 256));
    r3 = MemoryInline::FlatRead32((r3 + 76));
    // end of inlined leaf 0x807D30F4
    r6 = MemoryInline::FlatRead8((r30 + 1786));
    r4 = r3;
    r3 = r29;
    r5 = (r30 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80869344u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r4 = (r30 + 288);
}

loc_80863C98:
{
    r3 = r30;
    ctx->lr = 0x80863CA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80866198u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80863CC8;
}

loc_80863CA4:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 1728));
    r29 = MemoryInline::FlatRead32((r4 + 18240));
    // inline leaf 0x807D30F4 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 256));
    r3 = MemoryInline::FlatRead32((r3 + 76));
    // end of inlined leaf 0x807D30F4
    r4 = r3;
    r3 = r29;
    r6 = r28;
    r5 = (r30 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80869344u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80863CC8:
{
    r3 = r30;
    ctx->lr = 0x80863CD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80863EB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 1786));
    r3 = 0;
    r4 = -1;
    MemoryInline::FlatWrite32((r30 + 1736), r4);
}

loc_80863CE4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 1740), 0, 53u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 1740), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 1776), r3);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 1780), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 1744), r4);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 1748), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 1752), r3);
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r30 + 1784), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 50u, (r30 + 1790), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r30 + 1785), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r30 + 1792), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80863D18;
    }
}

loc_80863D10:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1785), static_cast<uint8_t>(r0));
}

loc_80863D18:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 2);
}

loc_80863D28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80863D44;
    }
}

loc_80863D2C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1772));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
    MemoryInline::FlatWrite32((r30 + 1768), r0);
    goto loc_80863D4C;
}

loc_80863D44:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 1768), r0);
}

loc_80863D4C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1786));
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 1756), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80863D5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863D70;
    }
}

loc_80863D60:
{
    r3 = MemoryInline::FlatRead32((r30 + 1728));
    ctx->lr = 0x80863D68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80713BC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 1732), r3);
    goto loc_80863D74;
}

loc_80863D70:
{
    MemoryInline::FlatWrite32((r30 + 1732), r3);
}

loc_80863D74:
{
    r0 = MemoryInline::FlatRead8((r30 + 1787));
    r4 = -1;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 252), r4);
}

loc_80863D88:
{
    MemoryInline::FlatWrite32((r30 + 256), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80863DA0;
    }
}

loc_80863D90:
{
    r3 = 0x80860000u;
    r3 = (r3 + 14568);
    MemoryInline::FlatWrite32((r30 + 308), r3);
    goto loc_80863DB4;
}

loc_80863DA0:
{
    r0 = MemoryInline::FlatRead16((r30 + 156));
    r3 = (r31 + 200);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    MemoryInline::FlatWrite32((r30 + 308), r0);
}

loc_80863DB4:
{
    r0 = MemoryInline::FlatRead8((r30 + 1786));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80863DBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863E18;
    }
}

loc_80863DC0:
{
    r28 = r30;
    r27 = 0;
    r29 = 0x809C0000u;
}

loc_80863DCC:
{
    r3 = MemoryInline::FlatRead32((r29 + 18240));
    r5 = r27;
    r4 = MemoryInline::FlatRead16((r30 + 156));
    // inline leaf 0x80868F1C (6 guest instruction(s))
    r4 = (r4 * 144);
    r0 = (r5 * 48);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = (r3 + 9288);
    // end of inlined leaf 0x80868F1C
    r0 = MemoryInline::FlatRead8((r30 + 1789));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80863DE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863E00;
    }
}

loc_80863DE8:
{
    r3 = MemoryInline::FlatRead32((r29 + 18240));
    r5 = r27;
    r4 = MemoryInline::FlatRead8((r30 + 1772));
    // inline leaf 0x80869054 (6 guest instruction(s))
    r4 = (r4 * 12);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16216));
    // end of inlined leaf 0x80869054
    MemoryInline::FlatWrite32((r28 + 320), r3);
    goto loc_80863E08;
}

loc_80863E00:
{
    ctx->lr = 0x80863E04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80867194u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r28 + 320), r3);
}

loc_80863E08:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(3));
}

loc_80863E14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80863DCC;
    }
}

loc_80863E18:
{
    r3 = 40;
    ctx->lr = 0x80863E20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80863E24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863E34;
    }
}

loc_80863E28:
{
    r5 = (r30 + 248);
    r4 = 0;
    ctx->lr = 0x80863E34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80213F88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80863E34:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 0;
    r5 = -1;
    MemoryInline::FlatWrite32((r30 + 312), r3);
    r3 = r30;
    r4 = 1;
    MemoryInline::FlatWrite32((r30 + 264), r5);
    MemoryInline::FlatWrite32((r30 + 268), r0);
    MemoryInline::FlatWriteFloat32((r30 + 272), f0.d);
    MemoryInline::FlatWrite8((r30 + 280), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 276), r0);
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 264));
    ctr = r12;
    ctx->lr = 0x80863E70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 268));
    ctr = r12;
    ctx->lr = 0x80863E88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 1786));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80863E90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863EA0;
    }
}

loc_80863E94:
{
    r0 = MemoryInline::FlatRead32((r30 + 96));
    r0 = (r0 | 512);
    MemoryInline::FlatWrite32((r30 + 96), r0);
}

loc_80863EA0:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80863A9C func_80863A9C preserves=true fpr_mask=0x00000000
