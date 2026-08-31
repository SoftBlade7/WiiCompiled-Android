#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80865138(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80865138;

loc_80865138:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = MemoryInline::FlatRead8((r3 + 1791));
    r28 = 0x808B0000u;
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086515C:
{
    r28 = (r28 + -1200);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086516C;
    }
}

loc_80865164:
{
    r3 = 0;
    goto loc_80865378;
}

loc_8086516C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1786));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80865174:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80865180;
    }
}

loc_80865178:
{
    r3 = 0;
    goto loc_80865378;
}

loc_80865180:
{
    r27 = 0;
    r26 = 0;
    r29 = 1;
    r30 = 4;
    goto loc_80865278;
}

loc_80865194:
{
    r3 = MemoryInline::FlatRead32((r31 + 1728));
    r4 = r26;
    ctx->lr = 0x808651A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80591138u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = 0;
    r5 = 0;
    ctr = r30;
}

loc_808651AC:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r5));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808651BC;
    }
}

loc_808651B8:
{
    r4 = r5;
}

loc_808651BC:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r5));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808651D0;
    }
}

loc_808651CC:
{
    r4 = r5;
}

loc_808651D0:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r5));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808651E4;
    }
}

loc_808651E0:
{
    r4 = r5;
}

loc_808651E4:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r5));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808651F8;
    }
}

loc_808651F4:
{
    r4 = r5;
}

loc_808651F8:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r5));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8086520C;
    }
}

loc_80865208:
{
    r4 = r5;
}

loc_8086520C:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r5));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80865220;
    }
}

loc_8086521C:
{
    r4 = r5;
}

loc_80865220:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r5));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80865234;
    }
}

loc_80865230:
{
    r4 = r5;
}

loc_80865234:
{
    r5 = (r5 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r5));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80865248;
    }
}

loc_80865244:
{
    r4 = r5;
}

loc_80865248:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808651AC;
    }
}

loc_80865250:
{
}

loc_80865254:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(8))) {
        goto loc_80865274;
    }
}

loc_80865258:
{
    r3 = MemoryInline::FlatRead32((r31 + 1728));
    r4 = r26;
    ctx->lr = 0x80865264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80591170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
}

loc_80865268:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80865274;
    }
}

loc_8086526C:
{
    r27 = 1;
    goto loc_8086528C;
}

loc_80865274:
{
    r26 = (r26 + 1);
}

loc_80865278:
{
    r3 = MemoryInline::FlatRead32((r31 + 1728));
    // inline leaf 0x805902EC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r3 + 14));
    // end of inlined leaf 0x805902EC
    r0 = (r3 & 65535);
}

loc_80865288:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_80865194;
    }
}

loc_8086528C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80865290:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086529C;
    }
}

loc_80865294:
{
    r3 = 0;
    goto loc_80865378;
}

loc_8086529C:
{
    r3 = MemoryInline::FlatRead32((r31 + 152));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 716));
    f2.d = MemoryInline::FlatReadFloat64((r28 + 1080));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1064));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808652C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808652D4;
    }
}

loc_808652CC:
{
    r3 = 0;
    goto loc_80865378;
}

loc_808652D4:
{
    r3 = MemoryInline::FlatRead32((r31 + 1736));
    r4 = 13;
    r0 = (r3 + -22);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_808652E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086530C;
    }
}

loc_808652E8:
{
    r0 = (r3 + -26);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_808652F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8086530C;
    }
}

loc_808652F4:
{
    r0 = (r3 + -9);
}

loc_808652FC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80865314;
    }
}

loc_80865300:
{
}

loc_80865304:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(12))) {
        goto loc_80865314;
    }
}

loc_80865308:
{
    goto loc_8086532C;
}

loc_8086530C:
{
    r3 = 0;
    goto loc_80865378;
}

loc_80865314:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1068));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8086531C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80865354;
    }
}

loc_80865324:
{
    r4 = 14;
    goto loc_80865354;
}

loc_8086532C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1068));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80865334:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80865340;
    }
}

loc_80865338:
{
    r3 = 0;
    goto loc_80865378;
}

loc_80865340:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1072));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80865348:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80865354;
    }
}

loc_80865350:
{
    r4 = 14;
}

loc_80865354:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(13));
}

loc_80865358:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80865370;
    }
}

loc_8086535C:
{
    r0 = MemoryInline::FlatRead32((r31 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80865364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865370;
    }
}

loc_80865368:
{
    r3 = 0;
    goto loc_80865378;
}

loc_80865370:
{
    r3 = r31;
    ctx->lr = 0x80865378u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80864914u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80865378:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80865138 func_80865138 preserves=true fpr_mask=0x00000000
