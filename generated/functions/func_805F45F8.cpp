#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F45F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F45F8;

loc_805F45F8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -288), 0, 296u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 292u, (r1 + 292), r0);
    r11 = (r1 + 288);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 260u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 264u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 268u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 268u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 272u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 276u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 276u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 280u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 284u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r4 = 0x809C0000u;
    r27 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r31 = MemoryInline::FlatRead32((r3 + 516));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805F4624:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F4630;
    }
}

loc_805F4628:
{
    r31 = 0;
    goto loc_805F4684;
}

loc_805F4630:
{
    r26 = 0x809C0000u;
    r26 = (r26 + 7336);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4680;
    }
}

loc_805F463C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805F4650u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805F4668;
}

loc_805F4654:
{
}

loc_805F4658:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r26))) {
        goto loc_805F4664;
    }
}

loc_805F465C:
{
    r0 = 1;
    goto loc_805F4674;
}

loc_805F4664:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805F4668:
{
}

loc_805F466C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805F4654;
    }
}

loc_805F4670:
{
    r0 = 0;
}

loc_805F4674:
{
}

loc_805F4678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F4680;
    }
}

loc_805F467C:
{
    goto loc_805F4684;
}

loc_805F4680:
{
    r31 = 0;
}

loc_805F4684:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805F4688:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4CE4;
    }
}

loc_805F468C:
{
    r26 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r5 = MemoryInline::FlatRead32((r26 + 7736));
    r3 = r31;
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r5 + 152));
    r5 = 0;
    r7 = (r0 + r7);
    r30 = MemoryInline::FlatRead32((r7 + 300));
    r29 = MemoryInline::FlatRead32((r7 + 316));
    ctx->lr = 0x805F46BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F59ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 376));
    r3 = 1;
    MemoryInline::FlatWrite8((r27 + 128), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_805F46CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4800;
    }
}

loc_805F46D0:
{
    r3 = MemoryInline::FlatRead32((r27 + 100));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_805F46E0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(131))) {
        goto loc_805F47D8;
    }
}

loc_805F46E4:
{
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r0 = (r4 * 12);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 92));
}

loc_805F46F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F47D8;
    }
}

loc_805F46FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805F4700:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F4704:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(36));
}

loc_805F4708:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F470C:
{
    r3 = r31;
    r5 = 1;
    r6 = 1;
    ctx->lr = 0x805F471Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F59ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6536));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F4728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F47CC;
    }
}

loc_805F472C:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F4734:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F47CC;
    }
}

loc_805F4738:
{
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 24));
}

loc_805F474C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805F4758;
    }
}

loc_805F4750:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_805F475C;
}

loc_805F4758:
{
    r0 = 0;
}

loc_805F475C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805F4760:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F47CC;
    }
}

loc_805F4764:
{
    r3 = r31;
    r5 = r30;
    ctx->lr = 0x805F4770u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F56E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r3 = r31;
    r5 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F5958u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6536));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F478C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F47CC;
    }
}

loc_805F4790:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F4798:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F47CC;
    }
}

loc_805F479C:
{
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805F47B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F47CC;
    }
}

loc_805F47B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(-1));
}

loc_805F47B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F47C0;
    }
}

loc_805F47BC:
{
    MemoryInline::FlatWrite32((r5 + 20), r29);
}

loc_805F47C0:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r5 = 3;
    ctx->lr = 0x805F47CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8082FB78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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

loc_805F47CC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 128), static_cast<uint8_t>(r0));
    goto loc_805F4BA0;
}

loc_805F47D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(131));
}

loc_805F47DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F47E0:
{
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r3 = r31;
    r5 = 1;
    r6 = 0;
    ctx->lr = 0x805F47F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F59ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 128), static_cast<uint8_t>(r0));
    goto loc_805F4BA0;
}

loc_805F4800:
{
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r3 = r31;
    r29 = -1;
    r30 = -1;
    r5 = 1;
    r6 = 1;
    ctx->lr = 0x805F481Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F59ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r26 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_805F482C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(127))) {
        goto loc_805F4838;
    }
}

loc_805F4830:
{
}

loc_805F4834:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(129))) {
        goto loc_805F4924;
    }
}

loc_805F4838:
{
}

loc_805F483C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(80))) {
        goto loc_805F4848;
    }
}

loc_805F4840:
{
}

loc_805F4844:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(78))) {
        goto loc_805F49F0;
    }
}

loc_805F4848:
{
    r25 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_805F4850:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F49F0;
    }
}

loc_805F4854:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F4860;
    }
}

loc_805F4858:
{
    r25 = 0;
    goto loc_805F48B4;
}

loc_805F4860:
{
    r26 = 0x809C0000u;
    r26 = (r26 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F48B0;
    }
}

loc_805F486C:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805F4880u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805F4898;
}

loc_805F4884:
{
}

loc_805F4888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r26))) {
        goto loc_805F4894;
    }
}

loc_805F488C:
{
    r0 = 1;
    goto loc_805F48A4;
}

loc_805F4894:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805F4898:
{
}

loc_805F489C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805F4884;
    }
}

loc_805F48A0:
{
    r0 = 0;
}

loc_805F48A4:
{
}

loc_805F48A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F48B0;
    }
}

loc_805F48AC:
{
    goto loc_805F48B4;
}

loc_805F48B0:
{
    r25 = 0;
}

loc_805F48B4:
{
    r0 = MemoryInline::FlatRead32((r25 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F48BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F49F0;
    }
}

loc_805F48C0:
{
    r4 = 0x809C0000u;
    r3 = r25;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r6 = MemoryInline::FlatRead32((r4 + 152));
    r4 = MemoryInline::FlatRead32((r6 + 964));
    r5 = MemoryInline::FlatRead32((r6 + 972));
    r6 = MemoryInline::FlatRead32((r6 + 968));
    ctx->lr = 0x805F48E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805E163Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_805F48E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805F49F0;
    }
}

loc_805F48E8:
{
    r0 = MemoryInline::FlatRead8((r27 + 372));
    r5 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r5 + -10456));
    r28 = (r3 + 24);
    r0 = (r0 * 240);
    r30 = MemoryInline::FlatRead32((r3 + 180));
    r29 = MemoryInline::FlatRead32((r3 + 176));
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 3108), r29);
    r0 = MemoryInline::FlatRead8((r27 + 372));
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3104), r30);
    goto loc_805F49F0;
}

loc_805F4924:
{
    r25 = MemoryInline::FlatRead32((r3 + 648));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_805F492C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F49F0;
    }
}

loc_805F4930:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F493C;
    }
}

loc_805F4934:
{
    r25 = 0;
    goto loc_805F4990;
}

loc_805F493C:
{
    r26 = 0x809C0000u;
    r26 = (r26 + 7236);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F498C;
    }
}

loc_805F4948:
{
    r12 = MemoryInline::FlatRead32(r25);
    r3 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805F495Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805F4974;
}

loc_805F4960:
{
}

loc_805F4964:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r26))) {
        goto loc_805F4970;
    }
}

loc_805F4968:
{
    r0 = 1;
    goto loc_805F4980;
}

loc_805F4970:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805F4974:
{
}

loc_805F4978:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805F4960;
    }
}

loc_805F497C:
{
    r0 = 0;
}

loc_805F4980:
{
}

loc_805F4984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F498C;
    }
}

loc_805F4988:
{
    goto loc_805F4990;
}

loc_805F498C:
{
    r25 = 0;
}

loc_805F4990:
{
    r4 = (r25 + 112);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r25)) + static_cast<uint64_t>(static_cast<uint32_t>(112)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805F4994:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F49F0;
    }
}

loc_805F4998:
{
    r3 = (r1 + 40);
    ctx->lr = 0x805F49A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8051C398u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r27 + 372));
    r6 = 0x809C0000u;
    r4 = 0x80520000u;
    r3 = MemoryInline::FlatRead32((r6 + -10456));
    r0 = (r0 * 240);
    r30 = MemoryInline::FlatRead32((r1 + 220));
    r29 = MemoryInline::FlatRead32((r1 + 216));
    r28 = (r1 + 64);
    r4 = (r4 + -15564);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3108), r29);
    r3 = (r1 + 144);
    r5 = 12;
    r0 = MemoryInline::FlatRead8((r27 + 372));
    r7 = MemoryInline::FlatRead32((r6 + -10456));
    r6 = 5;
    r0 = (r0 * 240);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite32((r7 + 3104), r30);
    ctx->lr = 0x805F49F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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

loc_805F49F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(-1));
}

loc_805F49F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F49F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(-1));
}

loc_805F49FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F4A00:
{
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r0 = (r4 * 12);
    r3 = (r31 + r0);
    r5 = MemoryInline::FlatRead8((r3 + 92));
}

loc_805F4A14:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_805F4AE4;
    }
}

loc_805F4A18:
{
    r0 = MemoryInline::FlatRead8((r3 + 93));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F4A20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F4AE4;
    }
}

loc_805F4A24:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 128), static_cast<uint8_t>(r0));
    r3 = r31;
    r5 = 1;
    r6 = 0;
    ctx->lr = 0x805F4A3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F59ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r3 = MemoryInline::FlatRead32((r26 + 7736));
    r5 = r28;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 392);
    ctx->lr = 0x805F4A58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805FA610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + 6536));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F4A64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4AD0;
    }
}

loc_805F4A68:
{
    r25 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_805F4A70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4AD0;
    }
}

loc_805F4A74:
{
    r3 = MemoryInline::FlatRead32((r26 + 7736));
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 392);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x805FA930
    r5 = r3;
    r3 = r25;
    r4 = r29;
    ctx->lr = 0x805F4A98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80831724u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r3 = MemoryInline::FlatRead32((r28 + 6536));
    r0 = (r4 * 12);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805F4AB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4AD0;
    }
}

loc_805F4AB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(-1));
}

loc_805F4ABC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4AC4;
    }
}

loc_805F4AC0:
{
    MemoryInline::FlatWrite32((r5 + 20), r30);
}

loc_805F4AC4:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r5 = 1;
    ctx->lr = 0x805F4AD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8082FB78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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

loc_805F4AD0:
{
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r3 = r31;
    r5 = r29;
    ctx->lr = 0x805F4AE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F570Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805F4BA0;
}

loc_805F4AE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805F4AE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F4AEC:
{
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + 6536));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F4AF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F4AFC:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F4B04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F4B08:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & 4080);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 17));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F4B18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F4B1C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 128), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r3 = r31;
    r5 = 1;
    r6 = 1;
    ctx->lr = 0x805F4B38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F59ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r3 = r31;
    r5 = r29;
    ctx->lr = 0x805F4B48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F56E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r3 = r31;
    r5 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F5958u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 6536));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F4B60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F4B64:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F4B6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F4B70:
{
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805F4B84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4BA0;
    }
}

loc_805F4B88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(-1));
}

loc_805F4B8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4B94;
    }
}

loc_805F4B90:
{
    MemoryInline::FlatWrite32((r5 + 20), r30);
}

loc_805F4B94:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r5 = 3;
    ctx->lr = 0x805F4BA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8082FB78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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

loc_805F4BA0:
{
    r4 = MemoryInline::FlatRead8((r27 + 372));
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805F5A4Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805F4BB0:
{
    r25 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4CE4;
    }
}

loc_805F4BB8:
{
    r4 = 0x80890000u;
    r3 = (r27 + 168);
    r4 = (r4 + 24484);
    r4 = (r4 + 204);
    ctx->lr = 0x805F4BCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805E8368u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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

loc_805F4BD0:
{
    r27 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F4BE0;
    }
}

loc_805F4BD8:
{
    r27 = 0;
    goto loc_805F4C30;
}

loc_805F4BE0:
{
    r26 = 0x80380000u;
    r26 = (r26 + 24952);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4C2C;
    }
}

loc_805F4BEC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x805F4BFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805F4C14;
}

loc_805F4C00:
{
}

loc_805F4C04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r26))) {
        goto loc_805F4C10;
    }
}

loc_805F4C08:
{
    r0 = 1;
    goto loc_805F4C20;
}

loc_805F4C10:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805F4C14:
{
}

loc_805F4C18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805F4C00;
    }
}

loc_805F4C1C:
{
    r0 = 0;
}

loc_805F4C20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F4C24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4C2C;
    }
}

loc_805F4C28:
{
    goto loc_805F4C30;
}

loc_805F4C2C:
{
    r27 = 0;
}

loc_805F4C30:
{
    r4 = r25;
    r3 = (r1 + 8);
    ctx->lr = 0x805F4C3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->xer = xer;
    InvokeDirectCpu<0x80082400u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r0 = MemoryInline::FlatRead32((r1 + 32));
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r3 = r27;
    r0 = (r0 & -24577);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    MemoryInline::FlatWriteRam16((r1 + 30), static_cast<uint16_t>(r4));
    r12 = MemoryInline::FlatRead32(r27);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x805F4C68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r26 = r3;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F4C74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F4C94;
    }
}

loc_805F4C78:
{
    r3 = 0x808C0000u;
    r5 = 0x808C0000u;
    r3 = (r3 + -25612);
    r4 = 136;
    r5 = (r5 + -25664);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x805F4C94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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

loc_805F4C94:
{
    r3 = r26;
    // inline leaf 0x800809A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x800809A0
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r1 + 16));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r1 + 18));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 20u, (r1 + 28));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 22u, (r1 + 30));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 32));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
}

loc_805F4CE4:
{
    r11 = (r1 + 288);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805F45F8 func_805F45F8 preserves=true fpr_mask=0x00000000
