#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80855B30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80855B30;

loc_80855B30:
{
    MemoryInline::FlatWriteRam32((r1 + -544), r1);
    r1 = (r1 + -544);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 548), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 524), r27);
    MemoryInline::FlatWriteRam32((r1 + 528), r28);
    MemoryInline::FlatWriteRam32((r1 + 532), r29);
    MemoryInline::FlatWriteRam32((r1 + 536), r30);
    MemoryInline::FlatWriteRam32((r1 + 540), r31);
    r29 = r3;
    r31 = 0;
    r27 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite8((r3 + 976), static_cast<uint8_t>(r6));
    r3 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 984), static_cast<uint8_t>(r6));
    r3 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 980), r0);
    goto loc_80855C14;
}

loc_80855B80:
{
    r4 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80855B84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80855BC4;
    }
}

loc_80855B88:
{
    r3 = MemoryInline::FlatRead32((r27 + -10448));
    r28 = (r4 * 12);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r29 + r28);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 64));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r4 + 428), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite8((r4 + 430), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite16((r4 + 432), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 10));
    MemoryInline::FlatWrite8((r4 + 434), static_cast<uint8_t>(r0));
    goto loc_80855BE0;
}

loc_80855BC4:
{
    r3 = MemoryInline::FlatRead32((r27 + -10448));
    r28 = (r4 * 12);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r5 = (r29 + r28);
    r3 = MemoryInline::FlatRead32(r3);
    r5 = (r5 + 424);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    InvokeDirectCpu<0x8053572Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
}

loc_80855BE0:
{
    r3 = MemoryInline::FlatRead32((r29 + 68));
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r30 = (r30_rot_2 & 1020);
    r4 = (r29 + r28);
    r3_addr_2 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r4 = (r4 + 424);
    ctx->lr = 0x80855BF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F84C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 68));
    r3_addr_3 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x80855C10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = (r31 + 1);
}

loc_80855C14:
{
    r0 = MemoryInline::FlatRead8((r29 + 72));
    r3 = (r31 & 255);
}

loc_80855C20:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80855B80;
    }
}

loc_80855C24:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80855C34:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80855C54;
    }
}

loc_80855C38:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r31 = (r3 + 56);
    goto loc_80855C58;
}

loc_80855C54:
{
    r31 = 0;
}

loc_80855C58:
{
    r28 = 0x809C0000u;
    r3 = r31;
    r5 = MemoryInline::FlatRead32((r28 + -10456));
    r4 = (r29 + 424);
    r5 = MemoryInline::FlatRead32((r5 + 2920));
    ctx->lr = 0x80855C70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805490F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r27 = 0x809C0000u;
}

loc_80855C78:
{
    r4 = MemoryInline::FlatRead32((r27 + 7736));
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 1204), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80855D64;
    }
}

loc_80855C8C:
{
    r3 = 0x808B0000u;
    r0 = 0;
    r3 = (r3 + 11588);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 272), 0, 20u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 272), r3);
    r3 = MemoryInline::FlatRead32((r27 + 7736));
    r4 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r1 + 276), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r28 + -10456));
    r3 = (r3 + 52);
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r1 + 278), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 280), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 282), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 428));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r1 + 276), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 430));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r1 + 278), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 432));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 280), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 434));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 282), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 52));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 284), r0);
    r0 = MemoryInline::FlatRead32((r5 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 288), r0);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl0_0x8061B358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl0_0x8061B35C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x8061B368;
    }
}

loc_inl0_0x8061B360:
{
    r3 = 0;
    goto loc_inl0_cont_8061B358;
}

loc_inl0_0x8061B368:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061BFACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 292), r3);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r27 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 392);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x805FA930
    r4 = r3;
    r3 = (r1 + 120);
    r4 = (r4 + 148);
    ctx->lr = 0x80855D1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052758Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 9;
    r5 = (r1 + 192);
    r4 = (r1 + 116);
    ctr = r0;
}

loc_80855D2C:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80855D2C;
    }
}

loc_80855D40:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r6 = 0x809C0000u;
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r3 = r31;
    r5 = r30;
    r4 = (r1 + 196);
    r6 = MemoryInline::FlatRead32((r6 + -10456));
    r6 = MemoryInline::FlatRead32((r6 + 2920));
    ctx->lr = 0x80855D64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80548F84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80855D64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80855D68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80855E0C;
    }
}

loc_80855D6C:
{
    r12 = MemoryInline::FlatRead32((r29 + 472));
    r3 = (r29 + 472);
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x80855D80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 600), static_cast<uint8_t>(r0));
    r3 = 0x809C0000u;
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 7736));
    r0 = 1;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite8((r4 + 984), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = MemoryInline::FlatRead32((r3 + 236));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80855DB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80855DDC;
    }
}

loc_80855DB8:
{
    r3 = MemoryInline::FlatRead16((r29 + 428));
    r0 = 99;
}

loc_80855DC4:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(99))) {
        goto loc_80855DCC;
    }
}

loc_80855DC8:
{
    r0 = r3;
}

loc_80855DCC:
{
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_80855DD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80855DDC;
    }
}

loc_80855DD8:
{
    r5 = 1;
}

loc_80855DDC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 976), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r29 + 68));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x80855DF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F8878u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r4 = 221;
    r5 = -1;
    ctx->lr = 0x80855E08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80602CF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80855E34;
}

loc_80855E0C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 600), static_cast<uint8_t>(r0));
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 984), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 976), static_cast<uint8_t>(r0));
}

loc_80855E34:
{
    r5 = MemoryInline::FlatRead16((r29 + 440));
    r6 = 0x808B0000u;
    r4 = MemoryInline::FlatRead8((r29 + 442));
    r6 = (r6 + 11588);
    r3 = MemoryInline::FlatRead16((r29 + 444));
    r7 = (r29 + 24);
    r0 = MemoryInline::FlatRead8((r29 + 446));
    r30 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r6 = 2;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    goto loc_80855F20;
}

loc_80855E70:
{
    r0 = MemoryInline::FlatRead8((r7 + 434));
}

loc_80855E78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80855E84;
    }
}

loc_80855E7C:
{
    r0 = 0;
    goto loc_80855EEC;
}

loc_80855E84:
{
    r0 = MemoryInline::FlatRead8((r1 + 18));
}

loc_80855E8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80855E98;
    }
}

loc_80855E90:
{
    r0 = 1;
    goto loc_80855EEC;
}

loc_80855E98:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r3 = MemoryInline::FlatRead16((r7 + 428));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80855EA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80855EB0;
    }
}

loc_80855EA8:
{
    r0 = 1;
    goto loc_80855EEC;
}

loc_80855EB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80855EE8;
    }
}

loc_80855EB4:
{
    r0 = MemoryInline::FlatRead8((r1 + 14));
    r3 = MemoryInline::FlatRead8((r7 + 430));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80855EC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80855ECC;
    }
}

loc_80855EC4:
{
    r0 = 1;
    goto loc_80855EEC;
}

loc_80855ECC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80855EE8;
    }
}

loc_80855ED0:
{
    r3 = MemoryInline::FlatRead16((r7 + 432));
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_80855EDC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80855EE8;
    }
}

loc_80855EE0:
{
    r0 = 1;
    goto loc_80855EEC;
}

loc_80855EE8:
{
    r0 = 0;
}

loc_80855EEC:
{
}

loc_80855EF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80855F18;
    }
}

loc_80855EF4:
{
    r5 = MemoryInline::FlatRead16((r7 + 428));
    r30 = r6;
    r4 = MemoryInline::FlatRead8((r7 + 430));
    r3 = MemoryInline::FlatRead16((r7 + 432));
    r0 = MemoryInline::FlatRead8((r7 + 434));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
}

loc_80855F18:
{
    r7 = (r7 + 12);
    r6 = (r6 + 1);
}

loc_80855F20:
{
    r0 = MemoryInline::FlatRead8((r29 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_80855F28:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80855E70;
    }
}

loc_80855F2C:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r5 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = 5;
    r5 = MemoryInline::FlatRead32((r5 + 2920));
    ctx->lr = 0x80855F44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80548E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_80855F48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80855FDC;
    }
}

loc_80855F4C:
{
    r0 = MemoryInline::FlatRead8((r3 + 86));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80855F54:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80855FDC;
    }
}

loc_80855F58:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80855FDC;
    }
}

loc_80855F5C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80856090;
    }
}

loc_80855F60:
{
    r0 = MemoryInline::FlatRead8((r1 + 18));
}

loc_80855F68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80855F74;
    }
}

loc_80855F6C:
{
    r0 = 0;
    goto loc_80855FD4;
}

loc_80855F74:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80855F80;
    }
}

loc_80855F78:
{
    r0 = 1;
    goto loc_80855FD4;
}

loc_80855F80:
{
    r0 = MemoryInline::FlatRead16((r3 + 80));
    r4 = MemoryInline::FlatRead16((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80855F8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80855F98;
    }
}

loc_80855F90:
{
    r0 = 1;
    goto loc_80855FD4;
}

loc_80855F98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80855FD0;
    }
}

loc_80855F9C:
{
    r0 = MemoryInline::FlatRead8((r3 + 82));
    r4 = MemoryInline::FlatRead8((r1 + 14));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80855FA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80855FB4;
    }
}

loc_80855FAC:
{
    r0 = 1;
    goto loc_80855FD4;
}

loc_80855FB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80855FD0;
    }
}

loc_80855FB8:
{
    r4 = MemoryInline::FlatRead16((r1 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 84));
}

loc_80855FC4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80855FD0;
    }
}

loc_80855FC8:
{
    r0 = 1;
    goto loc_80855FD4;
}

loc_80855FD0:
{
    r0 = 0;
}

loc_80855FD4:
{
}

loc_80855FD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80856090;
    }
}

loc_80855FDC:
{
    r4 = (r30 * 12);
    r0 = 0;
    r3 = 0x808B0000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 96), 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 100), static_cast<uint16_t>(r0));
    r27 = 0x809C0000u;
    r3 = (r3 + 11588);
    r6 = (r29 + r4);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 96), r3);
    r28 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r27 + -10456));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 102), static_cast<uint8_t>(r0));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r28 + 7736));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 104), static_cast<uint16_t>(r0));
    r3 = (r3 + 52);
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r1 + 106), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 428));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 100), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 430));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 102), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 432));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 104), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + 434));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r1 + 106), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 108), r0);
    r0 = MemoryInline::FlatRead32((r5 + 48));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 112), r0);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl2_0x8061B358:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl2_0x8061B35C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x8061B368;
    }
}

loc_inl2_0x8061B360:
{
    r3 = 0;
    goto loc_inl2_cont_8061B358;
}

loc_inl2_0x8061B368:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8061BFACu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 116), r3);
    r3 = r31;
    r6 = MemoryInline::FlatRead32((r27 + -10456));
    r4 = (r1 + 20);
    r5 = 5;
    r6 = MemoryInline::FlatRead32((r6 + 2920));
    ctx->lr = 0x80856070u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80548E90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r28 + 7736));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 980), r30);
    r3 = MemoryInline::FlatRead32((r29 + 68));
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    ctx->lr = 0x8085608Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807F8878u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808560A4;
}

loc_80856090:
{
    r3 = 0x809C0000u;
    r0 = -1;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 980), r0);
}

loc_808560A4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead8((r3 + 976));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808560B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80856148;
    }
}

loc_808560BC:
{
    r3 = (r1 + 296);
    ctx->lr = 0x808560C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 296);
    r4 = 0;
    ctx->lr = 0x808560D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051CB1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 296));
    r3 = 0;
}

loc_808560DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808560F0;
    }
}

loc_808560E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 508));
}

loc_808560E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808560F0;
    }
}

loc_808560EC:
{
    r3 = 1;
}

loc_808560F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808560F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80856130;
    }
}

loc_808560F8:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r4 + -10456));
    r6 = (r1 + 296);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r5 + 2920));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r5 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80621484u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r29 + 880);
    r4 = 1115;
    r5 = 0;
    ctx->lr = 0x80856130u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80856130:
{
    r4 = 0x80520000u;
    r3 = (r1 + 400);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x80856148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80856148:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl3_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_80621410;
}

loc_inl3_return:
{
}

loc_inl3_cont_80621410:
{
    // end of inlined leaf 0x80621410
    r27 = MemoryInline::FlatRead32((r1 + 524));
    r28 = MemoryInline::FlatRead32((r1 + 528));
    r29 = MemoryInline::FlatRead32((r1 + 532));
    r30 = MemoryInline::FlatRead32((r1 + 536));
    r31 = MemoryInline::FlatRead32((r1 + 540));
    r0 = MemoryInline::FlatRead32((r1 + 548));
    ctx->lr = r0;
    r1 = (r1 + 544);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80855B30 func_80855B30 preserves=true fpr_mask=0x00000000
