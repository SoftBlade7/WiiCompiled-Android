#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053DB34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8053DB34;

loc_8053DB34:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r0 = 14;
    r7 = (r1 + 4);
    MemoryInline::FlatWriteRam32((r1 + 140), r31);
    MemoryInline::FlatWriteRam32((r1 + 136), r30);
    MemoryInline::FlatWriteRam32((r1 + 132), r29);
    MemoryInline::FlatWriteRam32((r1 + 128), r28);
    r8 = MemoryInline::FlatRead32((r5 + -10456));
    r6 = (r8 + 2968);
    ctr = r0;
}

loc_8053DB68:
{
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = (r6 + 8);
    r0 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r7 + 4), r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053DB68;
    }
}

loc_8053DB7C:
{
    r0 = MemoryInline::FlatRead32((r1 + 76));
    guest_range_0 = MemoryInline::ResolveRangeHost((r8 + 2928), 0, 48u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r8 + 2974));
}

loc_8053DB88:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8053DC34;
    }
}

loc_8053DB8C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r8 + 2928));
    r29 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8053DB98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DB9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r5));
}

loc_8053DBA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DBA4:
{
    r6 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r5 + -1);
    r4 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32((r6 + 16), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8053DBBC:
{
    MemoryInline::FlatWrite32((r6 + 12), r3);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8053DBD8;
    }
}

loc_8053DBC4:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8053DBD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DBD8:
{
    r28 = 0;
    r31 = 0x809C0000u;
    r30 = 0x809C0000u;
    goto loc_8053DC1C;
}

loc_8053DBE8:
{
    r3 = MemoryInline::FlatRead32((r31 + -10448));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053DC00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DC18;
    }
}

loc_8053DC04:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r4 = 1;
    r5 = 0;
    r3_addr_3 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctx->lr = 0x8053DC18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805342E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DC18:
{
    r28 = (r28 + 1);
}

loc_8053DC1C:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = (r28 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8053DC2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053DBE8;
    }
}

loc_8053DC30:
{
    goto loc_8053DFD8;
}

loc_8053DC34:
{
    r0 = MemoryInline::FlatRead32((r1 + 72));
}

loc_8053DC3C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8053DCE4;
    }
}

loc_8053DC40:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r8 + 2928));
    r28 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8053DC4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DC50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r5));
}

loc_8053DC54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DC58:
{
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r0 = (r5 + -1);
    r3 = 1;
    MemoryInline::FlatWrite32((r4 + 16), r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8053DC6C:
{
    MemoryInline::FlatWrite32((r4 + 12), r3);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8053DC88;
    }
}

loc_8053DC74:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8053DC88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DC88:
{
    r29 = 0;
    r31 = 0x809C0000u;
    r30 = 0x809C0000u;
    goto loc_8053DCCC;
}

loc_8053DC98:
{
    r3 = MemoryInline::FlatRead32((r31 + -10448));
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r6 = (r6_rot_4 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_6 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053DCB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DCC8;
    }
}

loc_8053DCB4:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = 1;
    r5 = 0;
    r3_addr_7 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    ctx->lr = 0x8053DCC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805342E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DCC8:
{
    r29 = (r29 + 1);
}

loc_8053DCCC:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8053DCDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053DC98;
    }
}

loc_8053DCE0:
{
    goto loc_8053DFD8;
}

loc_8053DCE4:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
}

loc_8053DCEC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8053DD98;
    }
}

loc_8053DCF0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r8 + 2928));
    r28 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8053DCFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DD00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r5));
}

loc_8053DD04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DD08:
{
    r6 = MemoryInline::FlatRead32((r28 + 16));
    r0 = (r5 + -1);
    r4 = 2;
    r3 = 1;
    MemoryInline::FlatWrite32((r6 + 16), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8053DD20:
{
    MemoryInline::FlatWrite32((r6 + 12), r3);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8053DD3C;
    }
}

loc_8053DD28:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8053DD3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DD3C:
{
    r29 = 0;
    r31 = 0x809C0000u;
    r30 = 0x809C0000u;
    goto loc_8053DD80;
}

loc_8053DD4C:
{
    r3 = MemoryInline::FlatRead32((r31 + -10448));
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r6 = (r6_rot_6 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_10 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053DD64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DD7C;
    }
}

loc_8053DD68:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = 1;
    r5 = 0;
    r3_addr_11 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_11);
    ctx->lr = 0x8053DD7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805342E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DD7C:
{
    r29 = (r29 + 1);
}

loc_8053DD80:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8053DD90:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053DD4C;
    }
}

loc_8053DD94:
{
    goto loc_8053DFD8;
}

loc_8053DD98:
{
    r0 = MemoryInline::FlatRead32((r1 + 64));
}

loc_8053DDA0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8053DE4C;
    }
}

loc_8053DDA4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r8 + 2928));
    r28 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8053DDB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DDB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r5));
}

loc_8053DDB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DDBC:
{
    r6 = MemoryInline::FlatRead32((r28 + 16));
    r0 = (r5 + -1);
    r4 = 3;
    r3 = 1;
    MemoryInline::FlatWrite32((r6 + 16), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8053DDD4:
{
    MemoryInline::FlatWrite32((r6 + 12), r3);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8053DDF0;
    }
}

loc_8053DDDC:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8053DDF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DDF0:
{
    r29 = 0;
    r31 = 0x809C0000u;
    r30 = 0x809C0000u;
    goto loc_8053DE34;
}

loc_8053DE00:
{
    r3 = MemoryInline::FlatRead32((r31 + -10448));
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r6 = (r6_rot_8 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_14 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_14);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053DE18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DE30;
    }
}

loc_8053DE1C:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = 1;
    r5 = 0;
    r3_addr_15 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_15);
    ctx->lr = 0x8053DE30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805342E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DE30:
{
    r29 = (r29 + 1);
}

loc_8053DE34:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8053DE44:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053DE00;
    }
}

loc_8053DE48:
{
    goto loc_8053DFD8;
}

loc_8053DE4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 60));
}

loc_8053DE54:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8053DF00;
    }
}

loc_8053DE58:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r8 + 2928));
    r28 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8053DE64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DE68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r5));
}

loc_8053DE6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DE70:
{
    r6 = MemoryInline::FlatRead32((r28 + 16));
    r0 = (r5 + -1);
    r4 = 4;
    r3 = 1;
    MemoryInline::FlatWrite32((r6 + 16), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8053DE88:
{
    MemoryInline::FlatWrite32((r6 + 12), r3);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8053DEA4;
    }
}

loc_8053DE90:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8053DEA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DEA4:
{
    r29 = 0;
    r31 = 0x809C0000u;
    r30 = 0x809C0000u;
    goto loc_8053DEE8;
}

loc_8053DEB4:
{
    r3 = MemoryInline::FlatRead32((r31 + -10448));
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r6 = (r6_rot_10 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_18 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_18);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053DECC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DEE4;
    }
}

loc_8053DED0:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = 1;
    r5 = 0;
    r3_addr_19 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_19);
    ctx->lr = 0x8053DEE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805342E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DEE4:
{
    r29 = (r29 + 1);
}

loc_8053DEE8:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8053DEF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053DEB4;
    }
}

loc_8053DEFC:
{
    goto loc_8053DFD8;
}

loc_8053DF00:
{
    r0 = MemoryInline::FlatRead32((r1 + 56));
}

loc_8053DF08:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8053DFB4;
    }
}

loc_8053DF0C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r8 + 2928));
    r28 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8053DF18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DF1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r5));
}

loc_8053DF20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DF24:
{
    r6 = MemoryInline::FlatRead32((r28 + 16));
    r0 = (r5 + -1);
    r4 = 5;
    r3 = 1;
    MemoryInline::FlatWrite32((r6 + 16), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8053DF3C:
{
    MemoryInline::FlatWrite32((r6 + 12), r3);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8053DF58;
    }
}

loc_8053DF44:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8053DF58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DF58:
{
    r29 = 0;
    r30 = 0x809C0000u;
    r31 = 0x809C0000u;
    goto loc_8053DF9C;
}

loc_8053DF68:
{
    r3 = MemoryInline::FlatRead32((r30 + -10448));
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r6 = (r6_rot_12 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_22 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_22);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053DF80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DF98;
    }
}

loc_8053DF84:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r4 = 1;
    r5 = 0;
    r3_addr_23 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_23);
    ctx->lr = 0x8053DF98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805342E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053DF98:
{
    r29 = (r29 + 1);
}

loc_8053DF9C:
{
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r4 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8053DFAC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053DF68;
    }
}

loc_8053DFB0:
{
    goto loc_8053DFD8;
}

loc_8053DFB4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r8 + 2928));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8053DFC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DFC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r5));
}

loc_8053DFC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053DFD8;
    }
}

loc_8053DFCC:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_8053DFD8:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    r31 = MemoryInline::FlatRead32((r1 + 140));
    r30 = MemoryInline::FlatRead32((r1 + 136));
    r29 = MemoryInline::FlatRead32((r1 + 132));
    r28 = MemoryInline::FlatRead32((r1 + 128));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x8053DB34 func_8053DB34 preserves=true fpr_mask=0x00000000
