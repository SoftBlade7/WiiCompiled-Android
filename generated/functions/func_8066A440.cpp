#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066A440(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066A440;

loc_8066A440:
{
    r4 = 0x808B0000u;
    r0 = 0;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r0));
    r28 = 0;
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    MemoryInline::FlatWriteRam32((r1 + 364), r4);
    MemoryInline::FlatWriteRam16((r1 + 368), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 370), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 372), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 374), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8066A474:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8066A494;
    }
}

loc_8066A478:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r3 + r0);
    r6 = (r4 + 56);
    goto loc_8066A498;
}

loc_8066A494:
{
    r6 = 0;
}

loc_8066A498:
{
    r0 = MemoryInline::FlatRead32((r27 + 16884));
}

loc_8066A4A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066A4E0;
    }
}

loc_8066A4A4:
{
    r4 = (r27 + 65536);
    r0 = MemoryInline::FlatRead32((r27 + 88));
    r4 = MemoryInline::FlatRead32((r4 + -29952));
}

loc_8066A4B4:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_8066A4E0;
    }
}

loc_8066A4B8:
{
    r0 = MemoryInline::FlatRead8((r27 + 85));
}

loc_8066A4C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8066A4D0;
    }
}

loc_8066A4C4:
{
}

loc_8066A4C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8066A4D8;
    }
}

loc_8066A4CC:
{
    goto loc_8066A4E0;
}

loc_8066A4D0:
{
    r0 = 1;
    goto loc_8066A4E4;
}

loc_8066A4D8:
{
    r0 = 2;
    goto loc_8066A4E4;
}

loc_8066A4E0:
{
    r0 = 3;
}

loc_8066A4E4:
{
}

loc_8066A4E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8066A5C8;
    }
}

loc_8066A4EC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 22820), 0, 24u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r6 + 22840));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r27 + 88));
}

loc_8066A4FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8066A510;
    }
}

loc_8066A500:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r6 + 22826));
}

loc_8066A508:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066A510;
    }
}

loc_8066A50C:
{
    r5 = 1;
}

loc_8066A510:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8066A514:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A5BC;
    }
}

loc_8066A518:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r6 + 22820));
    r4 = 65536;
    MemoryInline::FlatWriteRam16((r1 + 368), static_cast<uint16_t>(r0));
    r0 = (r4 + -27664);
    r4 = (r1 + 14);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r6 + 22822));
    MemoryInline::FlatWriteRam8((r1 + 370), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r6 + 22824));
    MemoryInline::FlatWriteRam16((r1 + 372), static_cast<uint16_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r6 + 22826));
    MemoryInline::FlatWriteRam8((r1 + 374), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r6 + 22828));
    MemoryInline::FlatWriteRam32((r1 + 376), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 22832));
    MemoryInline::FlatWriteRam32((r1 + 380), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r6 + 22836));
    MemoryInline::FlatWriteRam32((r1 + 384), r5);
    r5 = MemoryInline::FlatRead16((r3 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 & 255);
    r0 = (r0 * r5);
    r3 = (r3 + r0);
    r26 = (r3 + 78);
    r3 = r26;
    ctx->lr = 0x8066A578u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C75F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A57C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A594;
    }
}

loc_8066A580:
{
    r5 = MemoryInline::FlatRead16((r1 + 14));
    r3 = (r1 + 288);
    r4 = 0;
    ctx->lr = 0x8066A590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8066A5D0;
}

loc_8066A594:
{
    r3 = r26;
    r4 = (r1 + 14);
    ctx->lr = 0x8066A5A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A5A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A5D0;
    }
}

loc_8066A5A8:
{
    r5 = MemoryInline::FlatRead16((r1 + 14));
    r3 = (r1 + 288);
    r4 = 6;
    ctx->lr = 0x8066A5B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8066A5D0;
}

loc_8066A5BC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 374), static_cast<uint8_t>(r0));
    goto loc_8066A5D0;
}

loc_8066A5C8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 374), static_cast<uint8_t>(r0));
}

loc_8066A5D0:
{
    r0 = MemoryInline::FlatRead8((r1 + 374));
}

loc_8066A5D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066A6E4;
    }
}

loc_8066A5DC:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -27752));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066A5E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A6E4;
    }
}

loc_8066A5EC:
{
    r3 = r27;
    r4 = (r1 + 36);
    ctx->lr = 0x8066A5F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066A5FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066A6E4;
    }
}

loc_8066A600:
{
    r0 = MemoryInline::FlatRead32((r1 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8066A608:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066A6E4;
    }
}

loc_8066A60C:
{
    r3 = 0x808B0000u;
    r0 = 0;
    r3 = (r3 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 36);
    r4 = (r1 + 24);
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 32), static_cast<uint16_t>(r0));
    ctx->lr = 0x8066A638u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80510AB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead8((r1 + 34));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
}

loc_8066A644:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8066A664;
    }
}

loc_8066A648:
{
    r4 = MemoryInline::FlatRead16((r1 + 28));
    r3 = 999;
    r0 = (r4 + -999);
    r3 = (r4 | ~r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r28 = (r28_rot_2 & 1);
}

loc_8066A664:
{
}

loc_8066A668:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8066A6E4;
    }
}

loc_8066A66C:
{
    r0 = MemoryInline::FlatRead8((r1 + 374));
}

loc_8066A674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8066A680;
    }
}

loc_8066A678:
{
    r28 = 0;
    goto loc_8066A6E4;
}

loc_8066A680:
{
}

loc_8066A684:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8066A690;
    }
}

loc_8066A688:
{
    r28 = 1;
    goto loc_8066A6E4;
}

loc_8066A690:
{
    r0 = MemoryInline::FlatRead16((r1 + 28));
    r3 = MemoryInline::FlatRead16((r1 + 368));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8066A69C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066A6A8;
    }
}

loc_8066A6A0:
{
    r28 = 1;
    goto loc_8066A6E4;
}

loc_8066A6A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066A6E0;
    }
}

loc_8066A6AC:
{
    r0 = MemoryInline::FlatRead8((r1 + 30));
    r3 = MemoryInline::FlatRead8((r1 + 370));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8066A6B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066A6C4;
    }
}

loc_8066A6BC:
{
    r28 = 1;
    goto loc_8066A6E4;
}

loc_8066A6C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066A6E0;
    }
}

loc_8066A6C8:
{
    r3 = MemoryInline::FlatRead16((r1 + 372));
    r0 = MemoryInline::FlatRead16((r1 + 32));
}

loc_8066A6D4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8066A6E0;
    }
}

loc_8066A6D8:
{
    r28 = 1;
    goto loc_8066A6E4;
}

loc_8066A6E0:
{
    r28 = 0;
}

loc_8066A6E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8066A6E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A794;
    }
}

loc_8066A6EC:
{
    r0 = MemoryInline::FlatRead32((r27 + 16884));
}

loc_8066A6F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066A750;
    }
}

loc_8066A6F8:
{
    r0 = MemoryInline::FlatRead16((r1 + 368));
    r5 = MemoryInline::FlatRead32((r27 + 16848));
    r0 = (r0 * 60);
    r3 = MemoryInline::FlatRead8((r1 + 370));
}

loc_8066A70C:
{
    r4 = MemoryInline::FlatRead16((r1 + 372));
    r0 = (r3 + r0);
    r0 = (r0 * 1000);
    r3 = (r4 + r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8066A72C;
    }
}

loc_8066A720:
{
    r4 = MemoryInline::FlatRead32((r27 + 16624));
}

loc_8066A728:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8066A734;
    }
}

loc_8066A72C:
{
    r0 = 1;
    goto loc_8066A754;
}

loc_8066A734:
{
}

loc_8066A738:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r3))) {
        goto loc_8066A748;
    }
}

loc_8066A740:
{
}

loc_8066A744:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r3))) {
        goto loc_8066A754;
    }
}

loc_8066A748:
{
    r0 = 1;
    goto loc_8066A754;
}

loc_8066A750:
{
    r0 = 1;
}

loc_8066A754:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066A758:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A788;
    }
}

loc_8066A75C:
{
    r3 = 0x809C0000u;
    r4 = 5;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621C3C (15 guest instruction(s))
}

loc_inl0_0x80621C3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621C44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621C48:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621C50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621C54:
{
    r8 = 1;
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r3 + 252), r0);
    MemoryInline::FlatWrite32((r3 + 256), r4);
    MemoryInline::FlatWrite8((r3 + 260), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 264), r6);
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r7));
    goto loc_inl0_cont_80621C3C;
}

loc_inl0_return:
{
}

loc_inl0_cont_80621C3C:
{
    // end of inlined leaf 0x80621C3C
    r0 = 9;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A788:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A794:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8512));
    ctx->lr = 0x8066A7A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067721Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
}

loc_8066AD88:
{
    r26 = MemoryInline::FlatRead32((r1 + 600));
    r27 = MemoryInline::FlatRead32((r1 + 604));
    r28 = MemoryInline::FlatRead32((r1 + 608));
    r29 = MemoryInline::FlatRead32((r1 + 612));
    r30 = MemoryInline::FlatRead32((r1 + 616));
    r31 = MemoryInline::FlatRead32((r1 + 620));
    r0 = MemoryInline::FlatRead32((r1 + 628));
    ctx->lr = r0;
    r1 = (r1 + 624);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066A440 func_8066A440 preserves=true fpr_mask=0x00000000
