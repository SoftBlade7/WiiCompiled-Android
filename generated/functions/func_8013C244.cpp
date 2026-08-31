#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013C244(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013C244;

loc_8013C244:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80330000u;
    r31 = (r31 + 25208);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r31 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8013C27C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013C2A4;
    }
}

loc_8013C280:
{
    r3 = 851968;
    r4 = 0x80280000u;
    r5 = MemoryInline::FlatRead8(r28);
    r3 = (r3 + 2);
    r6 = MemoryInline::FlatRead8((r28 + 1));
    r4 = (r4 + 15468);
    r7 = MemoryInline::FlatRead8((r28 + 2));
    r8 = MemoryInline::FlatRead8((r28 + 3));
    ctx->lr = 0x8013C2A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801317A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8013C2A4:
{
    r0 = MemoryInline::FlatRead8((r31 + 6216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C2AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013C2BC;
    }
}

loc_8013C2B0:
{
    r0 = MemoryInline::FlatRead8((r31 + 6212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C2B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C2C4;
    }
}

loc_8013C2BC:
{
    r3 = 2;
    goto loc_8013C3D8;
}

loc_8013C2C4:
{
    r0 = MemoryInline::FlatRead8(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C2CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C2E0;
    }
}

loc_8013C2D0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8013C2D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C2E0;
    }
}

loc_8013C2D8:
{
    r3 = 5;
    goto loc_8013C3D8;
}

loc_8013C2E0:
{
    ctx->lr = 0x8013C2E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8013A300u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C2E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013C2F4;
    }
}

loc_8013C2EC:
{
    r3 = 6;
    goto loc_8013C3D8;
}

loc_8013C2F4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 10u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 0u, r28);
    r0 = 3;
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r28 + 1));
    r6 = 0;
    r4 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 5808), 0, 409u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 388u, (r31 + 6196), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 389u, (r31 + 6197), static_cast<uint8_t>(r3));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r28 + 2));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r28 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 390u, (r31 + 6198), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 391u, (r31 + 6199), static_cast<uint8_t>(r3));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r28 + 4));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r28 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 392u, (r31 + 6200), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 393u, (r31 + 6201), static_cast<uint8_t>(r3));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r28 + 6));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r28 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 394u, (r31 + 6202), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 395u, (r31 + 6203), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r28 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 396u, (r31 + 6204), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r28 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 397u, (r31 + 6205), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 407u, (r31 + 6215), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 5808), r30);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 5812), r29);
    }
    MemoryInline::WriteResolved8(guest_range_1, 399u, (r31 + 6207), static_cast<uint8_t>(r6));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 0u, r28);
    r3 = (r5 + -1);
    r0 = (1 - r5);
    r0 = ~(r3 | r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r3 + 2);
    MemoryInline::WriteResolved8(guest_range_1, 408u, (r31 + 6216), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r28 + 3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013C384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C398;
    }
}

loc_8013C388:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013C3B0;
    }
}

loc_8013C38C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8013C390:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8013C3B0;
    }
}

loc_8013C394:
{
    goto loc_8013C3A4;
}

loc_8013C398:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r31 + 6215), static_cast<uint8_t>(r0));
    goto loc_8013C3B8;
}

loc_8013C3A4:
{
    MemoryInline::FlatWriteRam8((r31 + 6215), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r28 + 3), static_cast<uint8_t>(r6));
    goto loc_8013C3B8;
}

loc_8013C3B0:
{
    r3 = 5;
    goto loc_8013C3D8;
}

loc_8013C3B8:
{
    r3 = MemoryInline::FlatRead8((r28 + 3));
    r4 = (r28 + 4);
    ctx->lr = 0x8013C3C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8013CC58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8013C3CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013C3D8;
    }
}

loc_8013C3D0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 6215), static_cast<uint8_t>(r0));
}

loc_8013C3D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013C244 func_8013C244 preserves=true fpr_mask=0x00000000
