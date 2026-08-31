#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80110494(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80110494;

loc_80110494:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r26 = 0;
    ctx->lr = 0x801104BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 272));
    r27 = r3;
    r6 = -1;
    r7 = 0;
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801104D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110540;
    }
}

loc_801104D4:
{
    r3 = (r1 + 28);
    r4 = (r13 + -30428);
    r5 = 0;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801104E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 1400));
    r27 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80110500:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(r3))) {
        goto loc_80110508;
    }
}

loc_80110504:
{
    r27 = r3;
}

loc_80110508:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8011050C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80110538;
    }
}

loc_80110510:
{
    r5 = r27;
    r3 = (r30 + r0);
    r4 = (r1 + 28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 1400));
    r0 = 0;
    r3 = (r3 + r27);
    MemoryInline::FlatWrite32((r30 + 1400), r3);
    r3 = (r3 + r30);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r0));
}

loc_80110538:
{
    r3 = 1;
    goto loc_80110708;
}

loc_80110540:
{
    r0 = 50;
    r4 = r29;
    r5 = MemoryInline::FlatRead32((r31 + 4));
    ctr = r0;
}

loc_80110550:
{
}

loc_80110554:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(-1))) {
        goto loc_80110568;
    }
}

loc_80110558:
{
    r0 = MemoryInline::FlatRead32((r4 + 280));
}

loc_80110560:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80110568;
    }
}

loc_80110564:
{
    r6 = r26;
}

loc_80110568:
{
    r0 = MemoryInline::FlatRead32((r4 + 280));
}

loc_80110570:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80110588;
    }
}

loc_80110574:
{
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r0 = MemoryInline::FlatRead16((r4 + 278));
}

loc_80110580:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80110588;
    }
}

loc_80110584:
{
    r7 = (r7 + 1);
}

loc_80110588:
{
}

loc_8011058C:
{
    r26 = (r26 + 1);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(-1))) {
        goto loc_801105A4;
    }
}

loc_80110594:
{
    r0 = MemoryInline::FlatRead32((r4 + 296));
}

loc_8011059C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801105A4;
    }
}

loc_801105A0:
{
    r6 = r26;
}

loc_801105A4:
{
    r0 = MemoryInline::FlatRead32((r4 + 296));
}

loc_801105AC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_801105C4;
    }
}

loc_801105B0:
{
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r0 = MemoryInline::FlatRead16((r4 + 294));
}

loc_801105BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801105C4;
    }
}

loc_801105C0:
{
    r7 = (r7 + 1);
}

loc_801105C4:
{
}

loc_801105C8:
{
    r26 = (r26 + 1);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(-1))) {
        goto loc_801105E0;
    }
}

loc_801105D0:
{
    r0 = MemoryInline::FlatRead32((r4 + 312));
}

loc_801105D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801105E0;
    }
}

loc_801105DC:
{
    r6 = r26;
}

loc_801105E0:
{
    r0 = MemoryInline::FlatRead32((r4 + 312));
}

loc_801105E8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_80110600;
    }
}

loc_801105EC:
{
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r0 = MemoryInline::FlatRead16((r4 + 310));
}

loc_801105F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80110600;
    }
}

loc_801105FC:
{
    r7 = (r7 + 1);
}

loc_80110600:
{
}

loc_80110604:
{
    r26 = (r26 + 1);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(-1))) {
        goto loc_8011061C;
    }
}

loc_8011060C:
{
    r0 = MemoryInline::FlatRead32((r4 + 328));
}

loc_80110614:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011061C;
    }
}

loc_80110618:
{
    r6 = r26;
}

loc_8011061C:
{
    r0 = MemoryInline::FlatRead32((r4 + 328));
}

loc_80110624:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8011063C;
    }
}

loc_80110628:
{
    r3 = MemoryInline::FlatRead16((r31 + 2));
    r0 = MemoryInline::FlatRead16((r4 + 326));
}

loc_80110634:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8011063C;
    }
}

loc_80110638:
{
    r7 = (r7 + 1);
}

loc_8011063C:
{
    r4 = (r4 + 64);
    r26 = (r26 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80110550;
    }
}

loc_80110648:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(5));
}

loc_8011064C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80110658;
    }
}

loc_80110650:
{
    r3 = 0;
    goto loc_80110708;
}

loc_80110658:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(-1));
}

loc_8011065C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110668;
    }
}

loc_80110660:
{
    r3 = 0;
    goto loc_80110708;
}

loc_80110668:
{
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r26 = (r26_rot_1 & -16);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r28 = (r29 + r26);
    MemoryInline::FlatWrite32((r28 + 276), r3);
    MemoryInline::FlatWrite32((r28 + 280), r0);
    // inline leaf 0x80011C70 (8 guest instruction(s))
    r3 = 1103495168;
    r4 = MemoryInline::FlatRead32((r13 + -32712));
    r0 = (r3 + 20077);
    r3 = (r4 * r0);
    r0 = (r3 + 12345);
    MemoryInline::FlatWrite32((r13 + -32712), r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 32767);
    // end of inlined leaf 0x80011C70
    r31 = r3;
    // inline leaf 0x80011C70 (8 guest instruction(s))
    r3 = 1103495168;
    r4 = MemoryInline::FlatRead32((r13 + -32712));
    r0 = (r3 + 20077);
    r3 = (r4 * r0);
    r0 = (r3 + 12345);
    MemoryInline::FlatWrite32((r13 + -32712), r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_2 & 32767);
    // end of inlined leaf 0x80011C70
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r3 = (r0 | r31);
    // inline leaf 0x801ED998 (1 guest instruction(s))
    // end of inlined leaf 0x801ED998
    MemoryInline::FlatWrite32((r28 + 284), r3);
    r3 = (r1 + 8);
    r4 = (r13 + -30428);
    MemoryInline::FlatWrite32((r28 + 288), r27);
    r5 = MemoryInline::FlatRead32((r28 + 284));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801106B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r30 + 1400));
    r27 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_801106CC:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(r3))) {
        goto loc_801106D4;
    }
}

loc_801106D0:
{
    r27 = r3;
}

loc_801106D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_801106D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80110704;
    }
}

loc_801106DC:
{
    r5 = r27;
    r3 = (r30 + r0);
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 1400));
    r0 = 0;
    r3 = (r3 + r27);
    MemoryInline::FlatWrite32((r30 + 1400), r3);
    r3 = (r3 + r30);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r0));
}

loc_80110704:
{
    r3 = 1;
}

loc_80110708:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80110494 func_80110494 preserves=true fpr_mask=0x00000000
