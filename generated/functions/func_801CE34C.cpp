#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CE34C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801CE34C;

loc_801CE34C:
{
    MemoryInline::FlatWriteRam32((r1 + -528), r1);
    r1 = (r1 + -528);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CE358:
{
    MemoryInline::FlatWriteRam32((r1 + 532), r0);
    MemoryInline::FlatWriteRam32((r1 + 524), r31);
    MemoryInline::FlatWriteRam32((r1 + 520), r30);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CE558;
    }
}

loc_801CE368:
{
    r4 = MemoryInline::FlatRead32((r13 + -24456));
    r0 = MemoryInline::FlatRead32((r13 + -24452));
}

loc_801CE374:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_801CE3F4;
    }
}

loc_801CE378:
{
    r3 = 0x802A0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead8((r3 + 1096));
    r0 = 19;
    MemoryInline::FlatWrite8((r13 + -24463), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(19));
}

loc_801CE390:
{
    MemoryInline::FlatWrite8((r13 + -24462), static_cast<uint8_t>(r3));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CE39C;
    }
}

loc_801CE398:
{
    r0 = r3;
}

loc_801CE39C:
{
    r31 = (r0 & 255);
    r4 = 0x802A0000u;
    r30 = (r31 * 13);
    MemoryInline::FlatWriteRam8((r1 + 264), static_cast<uint8_t>(r0));
    r4 = (r4 + 1096);
    r3 = (r1 + 265);
    r5 = r30;
    r4 = (r4 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r13 + -24463));
    r3 = 65536;
    r3 = (r3 + -945);
    r6 = 0x801D0000u;
    r4 = (r4 + r31);
    r0 = (r30 + 1);
    MemoryInline::FlatWrite8((r13 + -24463), static_cast<uint8_t>(r4));
    r3 = (r3 & 65535);
    r4 = (r0 & 255);
    r5 = (r1 + 264);
    r6 = (r6 + -6788);
    ctx->lr = 0x801CE3F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013B1B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801CE564;
}

loc_801CE3F4:
{
    r0 = (r0 - r4);
    r3 = 251;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(251));
}

loc_801CE400:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CE408;
    }
}

loc_801CE404:
{
    r3 = r0;
}

loc_801CE408:
{
    r0 = MemoryInline::FlatRead32((r13 + -24460));
    r3 = (r3 & 255);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CE414:
{
    r6 = 0;
    r0 = (r0 + r4);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5 = (r5_rot_1 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4 = (r4_rot_1 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    if (((cr & 0x04000000u) == 0)) {
        goto loc_801CE524;
    }
}

loc_801CE43C:
{
}

loc_801CE440:
{
    r7 = (r3 + -8);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_801CE4E4;
    }
}

loc_801CE448:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801CE464;
    }
}

loc_801CE450:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_801CE45C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_801CE464;
    }
}

loc_801CE460:
{
    r5 = 1;
}

loc_801CE464:
{
}

loc_801CE468:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801CE4E4;
    }
}

loc_801CE46C:
{
    r0 = (r7 + 7);
    r4 = 0x802A0000u;
    r5 = MemoryInline::FlatRead32((r13 + -24456));
    r4 = (r4 + 908);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    r8 = (r1 + 8);
    r9 = (r4 + r5);
    ctr = r0;
}

loc_801CE490:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_801CE4E4;
    }
}

loc_801CE494:
{
    r5 = (r9 + r6);
    r6 = (r6 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 8u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r5 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 9));
    guest_range_1 = MemoryInline::ResolveRangeHost((r8 + 4), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r8 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r5 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r8 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r5 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r8 + 6), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r5 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r8 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r5 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r8 + 8), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r5 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r8 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r5 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r8 + 10), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r8 + 11), static_cast<uint8_t>(r0));
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801CE494;
    }
}

loc_801CE4E4:
{
    r4 = 0x802A0000u;
    r5 = MemoryInline::FlatRead32((r13 + -24456));
    r7 = (r1 + 8);
    r0 = (r3 - r6);
    r4 = (r4 + 908);
    r7 = (r7 + r6);
    r5 = (r4 + r5);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r3));
}

loc_801CE508:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CE524;
    }
}

loc_801CE50C:
{
    r4 = (r5 + r6);
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801CE50C;
    }
}

loc_801CE524:
{
    r5 = MemoryInline::FlatRead32((r13 + -24456));
    r4 = 65536;
    r0 = (r3 + 4);
    r6 = 0x801D0000u;
    r3 = (r5 + r3);
    r4 = (r4 + -948);
    MemoryInline::FlatWrite32((r13 + -24456), r3);
    r3 = (r4 & 65535);
    r4 = (r0 & 255);
    r5 = (r1 + 8);
    r6 = (r6 + -7348);
    ctx->lr = 0x801CE554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013B1B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801CE564;
}

loc_801CE558:
{
    r3 = 0x801D0000u;
    r3 = (r3 + -7728);
    ctx->lr = 0x801CE564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013A1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801CE564:
{
    r0 = MemoryInline::FlatRead32((r1 + 532));
    r31 = MemoryInline::FlatRead32((r1 + 524));
    r30 = MemoryInline::FlatRead32((r1 + 520));
    ctx->lr = r0;
    r1 = (r1 + 528);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801CE34C func_801CE34C preserves=true fpr_mask=0x00000000
