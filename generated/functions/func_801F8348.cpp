#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F8348(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F8348;

loc_801F8348:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801F8354:
{
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r7;
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 64), r28);
    r28 = r3;
    MemoryInline::FlatWrite32((r3 + 552), r31);
    MemoryInline::FlatWrite8((r3 + 540), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 556), r8);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F83E8;
    }
}

loc_801F8388:
{
    r3 = (r1 + 24);
    r4 = (r1 + 32);
    ctx->lr = 0x801F8394u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80207D0Cu>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r1 + 24));
    r4 = MemoryInline::FlatRead16((r1 + 28));
    r3 = (r3 + -1980);
    r0 = MemoryInline::FlatRead16((r1 + 26));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r5 = (r5_rot_0 & 65024);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r5_mrot_0 = (r5_rot_1 & 480);
    r5_mdest_0 = (r5 & -481);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r5_mrot_1 = (r4 & 31);
    r5_mdest_1 = (r5 & -32);
    r5 = (r5_mdest_1 | r5_mrot_1);
    MemoryInline::FlatWrite16((r28 + 544), static_cast<uint16_t>(r5));
    r3 = MemoryInline::FlatRead16((r1 + 32));
    r4 = MemoryInline::FlatRead16((r1 + 36));
    r0 = MemoryInline::FlatRead16((r1 + 34));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r3 = (r3_rot_0 & 63488);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r3_mrot_0 = (r3_rot_1 & 2016);
    r3_mdest_0 = (r3 & -2017);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r3_mrot_1 = (r3_rot_2 & 31);
    r3_mdest_1 = (r3 & -32);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite16((r28 + 542), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r1 + 38));
    MemoryInline::FlatWrite8((r28 + 541), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r28 + 546), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r28 + 548), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r28 + 550), static_cast<uint16_t>(r5));
    goto loc_801F8414;
}

loc_801F83E8:
{
    r3 = (r1 + 8);
    r4 = (r1 + 16);
    ctx->lr = 0x801F83F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80207D0Cu>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r1 + 8));
    r4 = MemoryInline::FlatRead16((r1 + 12));
    r0 = (r3 + -1980);
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r0 = (r0_rot_1 & 65024);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0_mrot_1 = (r0_rot_2 & 480);
    r0_mdest_1 = (r0 & -481);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_mrot_2 = (r4 & 31);
    r0_mdest_2 = (r0 & -32);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite16((r28 + 546), static_cast<uint16_t>(r0));
}

loc_801F8414:
{
    r0 = 0;
    r4 = r29;
    MemoryInline::FlatWrite8((r28 + 539), static_cast<uint8_t>(r0));
    r3 = (r28 + 526);
    ctx->lr = 0x801F8428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80203EA0u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r28 + 526));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F8558;
    }
}

loc_801F8434:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F8438:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F8540;
    }
}

loc_801F843C:
{
    r0 = MemoryInline::FlatRead8((r28 + 539));
    r0 = (r0 & 24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F8444:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F8540;
    }
}

loc_801F8448:
{
    r3 = r30;
    r4 = (r28 + 526);
    ctx->lr = 0x801F8454u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F8070u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F8458:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F855C;
    }
}

loc_801F8460:
{
    r3 = (r1 + 40);
    r4 = (r28 + 526);
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80203644u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 11;
    r6 = (r1 + 40);
    r4 = 0;
    r7 = 0;
    ctr = r0;
}

loc_801F8484:
{
    r3 = (r7 & 65535);
    r0 = (r4 & 1);
    r6_addr_2 = (r6 + r3);
    r5 = MemoryInline::FlatRead8(r6_addr_2);
    r0 = (0 - r0);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_2 & 127);
    r7 = (r7 + 1);
    r3 = (r0 & 128);
    r0 = (r5 + r4);
    r0 = (r3 + r0);
    r4 = (r0 & 255);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F8484;
    }
}

loc_801F84B0:
{
    MemoryInline::FlatWrite8((r28 + 524), static_cast<uint8_t>(r4));
    r3 = r29;
    // inline leaf 0x801EF7FC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x801EF7FC
}

loc_801F84C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F84E0;
    }
}

loc_801F84C4:
{
    r3 = r29;
    r4 = 1;
    // inline leaf 0x801EF804 (6 guest instruction(s))
}

loc_inl1_0x801EF804:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_inl1_0x801EF808:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_0x801EF814;
    }
}

loc_inl1_0x801EF80C:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_801EF804;
}

loc_inl1_0x801EF814:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_801EF804:
{
    // end of inlined leaf 0x801EF804
    r4 = r3;
    r3 = r28;
    ctx->lr = 0x801F84DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80203E08u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801F84F8;
}

loc_801F84E0:
{
    r3 = r29;
    r4 = 1;
    // inline leaf 0x801EF804 (6 guest instruction(s))
}

loc_inl2_0x801EF804:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_inl2_0x801EF808:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x801EF814;
    }
}

loc_inl2_0x801EF80C:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_801EF804;
}

loc_inl2_0x801EF814:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_801EF804:
{
    // end of inlined leaf 0x801EF804
    r4 = r3;
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EFD4Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_801F84F8:
{
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x801F8504u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801EF9BCu>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    r4 = 1321533440;
    MemoryInline::FlatWrite8((r28 + 523), static_cast<uint8_t>(r0));
    r3 = (r3 & 65535);
    r0 = (r4 + -5041);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r4 = (r4_rot_3 & 1073741823);
    r0 = (r4 * 13);
    r3 = (r3 - r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite8((r28 + 522), static_cast<uint8_t>(r0));
    goto loc_801F855C;
}

loc_801F8540:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 522), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r28 + 524), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 523), static_cast<uint8_t>(r0));
    goto loc_801F855C;
}

loc_801F8558:
{
    r31 = 1;
}

loc_801F855C:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F8348 func_801F8348 preserves=true fpr_mask=0x00000000
