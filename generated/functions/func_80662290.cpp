#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80662290(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r29_rot_5 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r30_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80662290;

loc_80662290:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r0 = 255;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r31 = r4;
    r4 = (r1 + 8);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r1 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r1 + 13), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r1 + 15), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r1 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r1 + 17), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r1 + 19), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->lr = 0x806622F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065FB6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r7 = 12;
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r0 = 0;
    r12 = 1;
    r11 = 0x809C0000u;
    ctr = r7;
}

loc_80662314:
{
    r28 = MemoryInline::FlatRead32((r11 + 8408));
    r7 = MemoryInline::FlatRead8(r3);
    r8 = MemoryInline::FlatRead32((r28 + 10524));
    r9 = PPC_Slw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r7));
    r10 = (r8 * 88);
    r30 = (r28 + r10);
    r8 = MemoryInline::FlatRead32((r30 + 72));
    r8 = (r9 & r8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066256C;
    }
}

loc_80662338:
{
    r8 = MemoryInline::FlatRead32((r30 + 64));
    r6 = (r6 + 1);
}

loc_80662344:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r8))) {
        goto loc_806623FC;
    }
}

loc_80662348:
{
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r29 = (r29_rot_2 & 510);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r30 = (r30_rot_2 & 1020);
    r27 = 0;
    goto loc_806623C0;
}

loc_80662358:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_8066235C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8066237C;
    }
}

loc_80662360:
{
    r9 = MemoryInline::FlatRead32(r31);
    r8 = PPC_Slw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r29));
    r0 = 0;
    r5 = (r5 + 1);
    r8 = (r9 | r8);
    MemoryInline::FlatWrite32(r31, r8);
    goto loc_806623B8;
}

loc_8066237C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066238C;
    }
}

loc_80662380:
{
    r0 = 1;
    r4 = (r4 + 1);
    goto loc_806623B8;
}

loc_8066238C:
{
}

loc_80662390:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806623A0;
    }
}

loc_80662394:
{
    r0 = 1;
    r4 = (r4 + 1);
    goto loc_806623B8;
}

loc_806623A0:
{
    r9 = MemoryInline::FlatRead32(r31);
    r8 = PPC_Slw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r29));
    r0 = 0;
    r5 = (r5 + 1);
    r8 = (r9 | r8);
    MemoryInline::FlatWrite32(r31, r8);
}

loc_806623B8:
{
    r29 = (r29 + 1);
    r27 = (r27 + 1);
}

loc_806623C0:
{
    r28 = MemoryInline::FlatRead32((r11 + 8408));
    r8 = MemoryInline::FlatRead32((r28 + 10524));
    r10 = (r8 * 88);
    r9 = (r28 + r10);
    r8 = MemoryInline::FlatRead8((r9 + 89));
}

loc_806623D8:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r8))) {
        goto loc_806623EC;
    }
}

loc_806623DC:
{
    r8 = (r30 + r28);
    r8 = (r10 + r8);
    r8 = MemoryInline::FlatRead8((r8 + 91));
    goto loc_806623F0;
}

loc_806623EC:
{
    r8 = MemoryInline::FlatRead8((r9 + 88));
}

loc_806623F0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r8));
}

loc_806623F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80662358;
    }
}

loc_806623F8:
{
    goto loc_8066256C;
}

loc_806623FC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_80662400:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80662470;
    }
}

loc_80662404:
{
    r29_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r29 = (r29_rot_3 & 510);
    r30_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r30 = (r30_rot_3 & 1020);
    r27 = 0;
    goto loc_80662434;
}

loc_80662414:
{
    r8 = MemoryInline::FlatRead32(r31);
    r0 = PPC_Slw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r29));
    r29 = (r29 + 1);
    r27 = (r27 + 1);
    r0 = (r8 | r0);
    MemoryInline::FlatWrite32(r31, r0);
    r0 = 0;
    r5 = (r5 + 1);
}

loc_80662434:
{
    r28 = MemoryInline::FlatRead32((r11 + 8408));
    r8 = MemoryInline::FlatRead32((r28 + 10524));
    r10 = (r8 * 88);
    r9 = (r28 + r10);
    r8 = MemoryInline::FlatRead8((r9 + 89));
}

loc_8066244C:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r8))) {
        goto loc_80662460;
    }
}

loc_80662450:
{
    r8 = (r30 + r28);
    r8 = (r10 + r8);
    r8 = MemoryInline::FlatRead8((r8 + 91));
    goto loc_80662464;
}

loc_80662460:
{
    r8 = MemoryInline::FlatRead8((r9 + 88));
}

loc_80662464:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r8));
}

loc_80662468:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80662414;
    }
}

loc_8066246C:
{
    goto loc_8066256C;
}

loc_80662470:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806624B8;
    }
}

loc_80662474:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & 1020);
    r29 = MemoryInline::FlatRead8((r30 + 89));
    r8 = (r8 + r28);
    r27 = 0;
    r8 = (r10 + r8);
    goto loc_80662498;
}

loc_8066248C:
{
    r0 = 1;
    r27 = (r27 + 1);
    r4 = (r4 + 1);
}

loc_80662498:
{
}

loc_8066249C:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r29))) {
        goto loc_806624A8;
    }
}

loc_806624A0:
{
    r9 = MemoryInline::FlatRead8((r8 + 91));
    goto loc_806624AC;
}

loc_806624A8:
{
    r9 = MemoryInline::FlatRead8((r30 + 88));
}

loc_806624AC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r9));
}

loc_806624B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066248C;
    }
}

loc_806624B4:
{
    goto loc_8066256C;
}

loc_806624B8:
{
}

loc_806624BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80662504;
    }
}

loc_806624C0:
{
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & 1020);
    r29 = MemoryInline::FlatRead8((r30 + 89));
    r8 = (r8 + r28);
    r27 = 0;
    r8 = (r10 + r8);
    goto loc_806624E4;
}

loc_806624D8:
{
    r0 = 1;
    r27 = (r27 + 1);
    r4 = (r4 + 1);
}

loc_806624E4:
{
}

loc_806624E8:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r29))) {
        goto loc_806624F4;
    }
}

loc_806624EC:
{
    r9 = MemoryInline::FlatRead8((r8 + 91));
    goto loc_806624F8;
}

loc_806624F4:
{
    r9 = MemoryInline::FlatRead8((r30 + 88));
}

loc_806624F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r9));
}

loc_806624FC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806624D8;
    }
}

loc_80662500:
{
    goto loc_8066256C;
}

loc_80662504:
{
    r30_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r30 = (r30_rot_4 & 510);
    r29_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r29 = (r29_rot_4 & 1020);
    r27 = 0;
    goto loc_80662534;
}

loc_80662514:
{
    r8 = MemoryInline::FlatRead32(r31);
    r0 = PPC_Slw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r30));
    r30 = (r30 + 1);
    r27 = (r27 + 1);
    r0 = (r8 | r0);
    MemoryInline::FlatWrite32(r31, r0);
    r0 = 0;
    r5 = (r5 + 1);
}

loc_80662534:
{
    r28 = MemoryInline::FlatRead32((r11 + 8408));
    r8 = MemoryInline::FlatRead32((r28 + 10524));
    r10 = (r8 * 88);
    r9 = (r28 + r10);
    r8 = MemoryInline::FlatRead8((r9 + 89));
}

loc_8066254C:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r8))) {
        goto loc_80662560;
    }
}

loc_80662550:
{
    r8 = (r29 + r28);
    r8 = (r10 + r8);
    r8 = MemoryInline::FlatRead8((r8 + 91));
    goto loc_80662564;
}

loc_80662560:
{
    r8 = MemoryInline::FlatRead8((r9 + 88));
}

loc_80662564:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r8));
}

loc_80662568:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80662514;
    }
}

loc_8066256C:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80662314;
    }
}

loc_80662574:
{
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF801FFB gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80662290 func_80662290 preserves=true fpr_mask=0x00000000
