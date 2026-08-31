#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066CBCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_not_1 = 0;
    uint32_t r4_not_2 = 0;
    uint32_t r4_not_3 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_ca_4 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_not_3 = 0;
    uint32_t r5_not_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066CBCC;

loc_8066CBCC:
{
    MemoryInline::FlatWriteRam32((r1 + -848), r1);
    r1 = (r1 + -848);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 852), r0);
    MemoryInline::FlatWriteRam32((r1 + 844), r31);
    MemoryInline::FlatWriteRam32((r1 + 840), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 836), r29);
    MemoryInline::FlatWriteRam32((r1 + 832), r28);
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066CBF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CC3C;
    }
}

loc_8066CBF8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r3 = MemoryInline::FlatRead32((r3 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8066CC14u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066CC18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CC28;
    }
}

loc_8066CC1C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_8066CC3C;
}

loc_8066CC28:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r30 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_8066CC40;
}

loc_8066CC3C:
{
    r3 = 0;
}

loc_8066CC40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066CC44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CC58;
    }
}

loc_8066CC48:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r30 + 30076), r3);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066D2DC;
}

loc_8066CC58:
{
    r3 = (r30 + 30080);
    ctx->lr = 0x8066CC60u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801DC2ECu>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r30 + 31240);
    ctx->lr = 0x8066CC68u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806724A0u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8066CC6C:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066CC90;
    }
}

loc_8066CC74:
{
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl0_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl0_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8023320C;
    }
}

loc_inl0_0x80233204:
{
}

loc_inl0_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl0_0x80233214;
    }
}

loc_inl0_0x8023320C:
{
    r3 = 1;
    goto loc_inl0_cont_802331F8;
}

loc_inl0_0x80233214:
{
    r3 = 0;
}

loc_inl0_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066CC7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CC90;
    }
}

loc_8066CC80:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 30076), r28);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066D2DC;
}

loc_8066CC90:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r3 = (r3 + 131072);
    r0 = MemoryInline::FlatRead8((r3 + 20482));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066CCA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CCB4;
    }
}

loc_8066CCA8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066D2DC;
}

loc_8066CCB4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 16884), r0);
    r3 = 2;
    ctx->lr = 0x8066CCC4u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801DD044u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8066CCC8:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066CCF8;
    }
}

loc_8066CCD0:
{
    // inline leaf 0x801DD220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24372));
    // end of inlined leaf 0x801DD220
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(-7));
}

loc_8066CCD8:
{
    MemoryInline::FlatWrite32((r30 + 28), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CCE8;
    }
}

loc_8066CCE0:
{
    r28 = 8;
    goto loc_8066CCFC;
}

loc_8066CCE8:
{
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r28 = r3;
    goto loc_8066CCFC;
}

loc_8066CCF8:
{
    r28 = 0;
}

loc_8066CCFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8066CD00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CD24;
    }
}

loc_8066CD04:
{
    r3 = r28;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl2_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl2_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl2_0x8023320C;
    }
}

loc_inl2_0x80233204:
{
}

loc_inl2_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl2_0x80233214;
    }
}

loc_inl2_0x8023320C:
{
    r3 = 1;
    goto loc_inl2_cont_802331F8;
}

loc_inl2_0x80233214:
{
    r3 = 0;
}

loc_inl2_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066CD10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CD18;
    }
}

loc_8066CD14:
{
    MemoryInline::FlatWrite32((r30 + 30076), r28);
}

loc_8066CD18:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066D2DC;
}

loc_8066CD24:
{
    r4 = MemoryInline::FlatRead32((r30 + 16880));
    r3 = r30;
    ctx->lr = 0x8066CD30u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066D35Cu>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_8066CD34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CD50;
    }
}

loc_8066CD38:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r3 = (r30 + 36);
    // inline leaf 0x80678678 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80678678
    MemoryInline::FlatWrite32((r30 + 16888), r3);
    goto loc_8066D2DC;
}

loc_8066CD50:
{
    r28 = 65536;
    r3 = MemoryInline::FlatRead32((r30 + 16880));
    r5 = (r28 + -17408);
    r4 = 0;
    ctx->lr = 0x8066CD64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808A0000u;
    r4 = MemoryInline::FlatRead32((r30 + 16880));
    r3 = (r3 + -23004);
    r5 = (r28 + -17408);
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r3 = (r30 + 36);
    r7 = 0;
    ctx->lr = 0x8066CD84u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80678850u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_8066CD88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CDA4;
    }
}

loc_8066CD8C:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r3 = (r30 + 36);
    // inline leaf 0x80678678 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80678678
    MemoryInline::FlatWrite32((r30 + 16888), r3);
    goto loc_8066D2DC;
}

loc_8066CDA4:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066CDB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CDEC;
    }
}

loc_8066CDB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8066CDBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CDF8;
    }
}

loc_8066CDC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066CDC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CE08;
    }
}

loc_8066CDC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8066CDCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CE18;
    }
}

loc_8066CDD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8066CDD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CE28;
    }
}

loc_8066CDD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8066CDDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CE38;
    }
}

loc_8066CDE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8066CDE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CE48;
    }
}

loc_8066CDE8:
{
    goto loc_8066CE58;
}

loc_8066CDEC:
{
    r28 = 0x808A0000u;
    r28 = (r28 + -21928);
    goto loc_8066CE64;
}

loc_8066CDF8:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 3);
    goto loc_8066CE64;
}

loc_8066CE08:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 6);
    goto loc_8066CE64;
}

loc_8066CE18:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 9);
    goto loc_8066CE64;
}

loc_8066CE28:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 12);
    goto loc_8066CE64;
}

loc_8066CE38:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 15);
    goto loc_8066CE64;
}

loc_8066CE48:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 18);
    goto loc_8066CE64;
}

loc_8066CE58:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 21);
}

loc_8066CE64:
{
    ctx->lr = 0x8066CE68u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80675454u>(ctx);
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808C0000u;
    r7 = r3;
    r5 = MemoryInline::FlatRead32((r4 + 3416));
    r6 = r28;
    r3 = (r1 + 84);
    r4 = 235;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8066CE88u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x808A0000u;
    r31 = 0;
    r3 = (r3 + -23052);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 48), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 56), r31);
    r29 = MemoryInline::FlatRead32((r3 + 12));
    r3 = 65536;
    r28 = 1;
    r0 = (r1 + 84);
    r12 = (r3 + 24576);
    r6 = 3;
    r11 = 360;
    r10 = 1440;
    r9 = 100;
    r8 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 52), r6);
    r3 = (r30 + 36);
    r4 = (r1 + 48);
    r5 = 2;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 48), r28);
    r6 = 0;
    r7 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 60), r29);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 64), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 68), r12);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r1 + 72), r11);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r1 + 74), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r1 + 76), r10);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r1 + 78), r9);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r1 + 80), r8);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r1 + 82), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 56), r0);
    ctx->lr = 0x8066CF08u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80678740u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066CF0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CF94;
    }
}

loc_8066CF10:
{
    r0 = MemoryInline::FlatRead32((r30 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066CF18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CF84;
    }
}

loc_8066CF1C:
{
    r3 = (r1 + 8);
    ctx->lr = 0x8066CF24u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D1298u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066CF28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CF84;
    }
}

loc_8066CF2C:
{
    r3 = (r1 + 8);
    ctx->lr = 0x8066CF34u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AB170u>(ctx);
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = 0x80000000u;
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800216F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 56));
    r5 = 131072;
    r8 = MemoryInline::FlatRead32((r30 + 52));
    r6 = (r5 + -23072);
    r7 = (r4 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r0 = (r31 ^ -2147483648);
    r4_not_1 = ~(r8);
    r4_ca_1 = (xer >> 29) & 1u;
    r4 = (r4_not_1 + r3);
    r4 = (r4 + r4_ca_1);
    r3 = (r30 + 65536);
    r5 = (r4 ^ -2147483648);
    r4 = (r6 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r5_not_1 = ~(r5);
    r5_ca_1 = (xer >> 29) & 1u;
    r5 = (r5_not_1 + r0);
    r5 = (r5 + r5_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_2 = ~(r0);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r0);
    r5 = (r5 + r5_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (0 - r5);
    MemoryInline::FlatWrite8((r3 + -30288), static_cast<uint8_t>(r5));
    goto loc_8066CFC4;
}

loc_8066CF84:
{
    r3 = (r30 + 65536);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + -30288), static_cast<uint8_t>(r0));
    goto loc_8066CFC4;
}

loc_8066CF94:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -30288), static_cast<uint8_t>(r31));
    r3 = (r30 + 36);
    // inline leaf 0x80678678 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80678678
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r29 = r3;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl6_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl6_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl6_0x8023320C;
    }
}

loc_inl6_0x80233204:
{
}

loc_inl6_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl6_0x80233214;
    }
}

loc_inl6_0x8023320C:
{
    r3 = 1;
    goto loc_inl6_cont_802331F8;
}

loc_inl6_0x80233214:
{
    r3 = 0;
}

loc_inl6_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066CFB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CFC4;
    }
}

loc_8066CFB8:
{
    MemoryInline::FlatWrite32((r30 + 30076), r29);
    MemoryInline::FlatWrite32((r30 + 20), r28);
    goto loc_8066D2DC;
}

loc_8066CFC4:
{
    r3 = (r1 + 84);
    r4 = 235;
    ctx->lr = 0x8066CFD0u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80675848u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066CFD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D084;
    }
}

loc_8066CFD8:
{
    r3 = 0x808A0000u;
    r31 = 0;
    r3 = (r3 + -23004);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 48), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 56), r31);
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r3 = 65536;
    r29 = 1;
    r10 = 1440;
    r11 = (r3 + 24576);
    r0 = (r1 + 84);
    r5 = 3;
    r9 = 100;
    r8 = 220;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 52), r5);
    r3 = (r30 + 36);
    r4 = (r1 + 48);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 48), r29);
    r5 = 1;
    r6 = 0;
    r7 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 60), r12);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 64), r31);
    }
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 68), r11);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r1 + 72), r10);
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r1 + 74), r31);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r1 + 76), r10);
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r1 + 78), r9);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_1, 32u, (r1 + 80), r8);
        MemoryInline::WriteResolved16(guest_range_1, 34u, (r1 + 82), r29);
    }
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 56), r0);
    ctx->lr = 0x8066D054u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80678740u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D058:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D084;
    }
}

loc_8066D05C:
{
    r3 = (r30 + 36);
    // inline leaf 0x80678678 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80678678
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r28 = r3;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl8_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl8_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl8_0x8023320C;
    }
}

loc_inl8_0x80233204:
{
}

loc_inl8_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl8_0x80233214;
    }
}

loc_inl8_0x8023320C:
{
    r3 = 1;
    goto loc_inl8_cont_802331F8;
}

loc_inl8_0x80233214:
{
    r3 = 0;
}

loc_inl8_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D084;
    }
}

loc_8066D078:
{
    MemoryInline::FlatWrite32((r30 + 30076), r28);
    MemoryInline::FlatWrite32((r30 + 20), r29);
    goto loc_8066D2DC;
}

loc_8066D084:
{
    r31 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + -10424));
    r3 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r3 = (r3 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 13068));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066D0A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D294;
    }
}

loc_8066D0A4:
{
    r3 = (r30 + 36);
    r4 = (r1 + 320);
    r5 = 3;
    ctx->lr = 0x8066D0B4u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80678FCCu>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8066D0B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8066D240;
    }
}

loc_8066D0BC:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066D0CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D104;
    }
}

loc_8066D0D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8066D0D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D114;
    }
}

loc_8066D0D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066D0DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D124;
    }
}

loc_8066D0E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8066D0E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D134;
    }
}

loc_8066D0E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8066D0EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D144;
    }
}

loc_8066D0F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8066D0F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D154;
    }
}

loc_8066D0F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8066D0FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D164;
    }
}

loc_8066D100:
{
    goto loc_8066D174;
}

loc_8066D104:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 24);
    goto loc_8066D180;
}

loc_8066D114:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 27);
    goto loc_8066D180;
}

loc_8066D124:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 30);
    goto loc_8066D180;
}

loc_8066D134:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 33);
    goto loc_8066D180;
}

loc_8066D144:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 36);
    goto loc_8066D180;
}

loc_8066D154:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 39);
    goto loc_8066D180;
}

loc_8066D164:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 42);
    goto loc_8066D180;
}

loc_8066D174:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r28 = (r3 + 45);
}

loc_8066D180:
{
    ctx->lr = 0x8066D184u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80675454u>(ctx);
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808C0000u;
    r7 = r3;
    r5 = MemoryInline::FlatRead32((r4 + 3428));
    r6 = r28;
    r3 = (r1 + 84);
    r4 = 235;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8066D1A4u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 65536;
    r12 = 0;
    r31 = 1;
    r10 = 1440;
    r11 = (r3 + 24576);
    r0 = (r1 + 84);
    r5 = 2;
    r9 = 100;
    r8 = 220;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 48), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 52), r5);
    r3 = (r30 + 36);
    r4 = (r1 + 48);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 48), r31);
    r5 = 3;
    r6 = 0;
    r7 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 60), r12);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 64), r12);
    }
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 68), r11);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r12)))) {
        MemoryInline::WriteResolved16(guest_range_2, 24u, (r1 + 72), r10);
        MemoryInline::WriteResolved16(guest_range_2, 26u, (r1 + 74), r12);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_2, 28u, (r1 + 76), r10);
        MemoryInline::WriteResolved16(guest_range_2, 30u, (r1 + 78), r9);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_2, 32u, (r1 + 80), r8);
        MemoryInline::WriteResolved16(guest_range_2, 34u, (r1 + 82), r31);
    }
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 56), r0);
    ctx->lr = 0x8066D210u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80678740u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D214:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D2D4;
    }
}

loc_8066D218:
{
    r3 = (r30 + 36);
    // inline leaf 0x80678678 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80678678
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r28 = r3;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl10_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl10_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl10_0x8023320C;
    }
}

loc_inl10_0x80233204:
{
}

loc_inl10_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl10_0x80233214;
    }
}

loc_inl10_0x8023320C:
{
    r3 = 1;
    goto loc_inl10_cont_802331F8;
}

loc_inl10_0x80233214:
{
    r3 = 0;
}

loc_inl10_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D230:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D2D4;
    }
}

loc_8066D234:
{
    MemoryInline::FlatWrite32((r30 + 30076), r28);
    MemoryInline::FlatWrite32((r30 + 20), r31);
    goto loc_8066D2DC;
}

loc_8066D240:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8066D244:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066D268;
    }
}

loc_8066D248:
{
    r3 = MemoryInline::FlatRead32((r31 + -10424));
    r3 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r3 = (r3 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 13068));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite32((r3 + 13068), r0);
    goto loc_8066D2D4;
}

loc_8066D268:
{
    r3 = (r30 + 36);
    // inline leaf 0x80678678 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80678678
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r28 = r3;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl12_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl12_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl12_0x8023320C;
    }
}

loc_inl12_0x80233204:
{
}

loc_inl12_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl12_0x80233214;
    }
}

loc_inl12_0x8023320C:
{
    r3 = 1;
    goto loc_inl12_cont_802331F8;
}

loc_inl12_0x80233214:
{
    r3 = 0;
}

loc_inl12_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D280:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D2D4;
    }
}

loc_8066D284:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 30076), r28);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066D2DC;
}

loc_8066D294:
{
    r3 = (r30 + 36);
    r4 = 3;
    ctx->lr = 0x8066D2A0u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80678A28u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D2A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D2D4;
    }
}

loc_8066D2A8:
{
    r3 = (r30 + 36);
    // inline leaf 0x80678678 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80678678
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r28 = r3;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl14_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl14_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl14_0x8023320C;
    }
}

loc_inl14_0x80233204:
{
}

loc_inl14_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl14_0x80233214;
    }
}

loc_inl14_0x8023320C:
{
    r3 = 1;
    goto loc_inl14_cont_802331F8;
}

loc_inl14_0x80233214:
{
    r3 = 0;
}

loc_inl14_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D2C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D2D4;
    }
}

loc_8066D2C4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 30076), r28);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066D2DC;
}

loc_8066D2D4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_8066D2DC:
{
    r0 = MemoryInline::FlatRead8((r30 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066D2E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D318;
    }
}

loc_8066D2E8:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8066D2FCu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D300:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066D310;
    }
}

loc_8066D304:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_8066D318;
}

loc_8066D310:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8066D318:
{
    ctx->lr = 0x8066D31Cu;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E5908u>(ctx);
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D320:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066D33C;
    }
}

loc_8066D324:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r28 = r3;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl15_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl15_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl15_0x8023320C;
    }
}

loc_inl15_0x80233204:
{
}

loc_inl15_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl15_0x80233214;
    }
}

loc_inl15_0x8023320C:
{
    r3 = 1;
    goto loc_inl15_cont_802331F8;
}

loc_inl15_0x80233214:
{
    r3 = 0;
}

loc_inl15_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D334:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D33C;
    }
}

loc_8066D338:
{
    MemoryInline::FlatWrite32((r30 + 30076), r28);
}

loc_8066D33C:
{
    r0 = MemoryInline::FlatRead32((r1 + 852));
    r31 = MemoryInline::FlatRead32((r1 + 844));
    r30 = MemoryInline::FlatRead32((r1 + 840));
    r29 = MemoryInline::FlatRead32((r1 + 836));
    r28 = MemoryInline::FlatRead32((r1 + 832));
    ctx->lr = r0;
    r1 = (r1 + 848);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066CBCC func_8066CBCC preserves=true fpr_mask=0x00000000
