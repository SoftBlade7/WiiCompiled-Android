#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80639D6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80639D6C;

loc_80639D6C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r3 = 75;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    ctx->lr = 0x80639D90u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80842354u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r3 + 1732));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80639D98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063A188;
    }
}

loc_80639D9C:
{
    r0 = MemoryInline::FlatRead32((r31 + 6280));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80639DA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80639DBC;
    }
}

loc_80639DA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80639DAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80639F04;
    }
}

loc_80639DB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_80639DB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063A078;
    }
}

loc_80639DB8:
{
    goto loc_8063A188;
}

loc_80639DBC:
{
    r6 = 2;
    r5 = 0x809C0000u;
    r7 = (r6 * 240);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + -10456), 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r4 = 5;
    r6 = 7;
    r3 = (r0 + r7);
    MemoryInline::FlatWrite32((r3 + 3112), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r7);
    MemoryInline::FlatWrite32((r3 + 3352), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r7);
    MemoryInline::FlatWrite32((r3 + 3592), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r7);
    MemoryInline::FlatWrite32((r3 + 3832), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r7);
    MemoryInline::FlatWrite32((r3 + 4072), r4);
    r7 = (r6 * 240);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r7);
    MemoryInline::FlatWrite32((r3 + 3112), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r7);
    MemoryInline::FlatWrite32((r3 + 3352), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r7);
    MemoryInline::FlatWrite32((r3 + 3592), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r7);
    MemoryInline::FlatWrite32((r3 + 3832), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + -10456));
    r3 = (r0 + r7);
    MemoryInline::FlatWrite32((r3 + 4072), r4);
    r3 = MemoryInline::FlatRead32((r31 + 6424));
    r4 = MemoryInline::FlatRead32((r31 + 6428));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E2588u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80639E6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80639E78;
    }
}

loc_80639E70:
{
    r29 = 0;
    goto loc_80639ECC;
}

loc_80639E78:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80639EC8;
    }
}

loc_80639E84:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80639E98u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80639EB0;
}

loc_80639E9C:
{
}

loc_80639EA0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80639EAC;
    }
}

loc_80639EA4:
{
    r0 = 1;
    goto loc_80639EBC;
}

loc_80639EAC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80639EB0:
{
}

loc_80639EB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80639E9C;
    }
}

loc_80639EB8:
{
    r0 = 0;
}

loc_80639EBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80639EC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80639EC8;
    }
}

loc_80639EC4:
{
    goto loc_80639ECC;
}

loc_80639EC8:
{
    r29 = 0;
}

loc_80639ECC:
{
    r3 = r29;
    r4 = 0;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E1748u>(ctx);
    r0 = ctx->gpr[0];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r12 = MemoryInline::FlatRead32(r31);
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -30688));
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r4 = 31;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x80639F00u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8063A188;
}

loc_80639F04:
{
    r6 = 1;
    r5 = 0x809C0000u;
    r7 = (r6 * 240);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + -10456), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + -10456));
    r0 = 11;
    r4 = 5;
    r3 = (r3 + r7);
    r6 = 6;
    MemoryInline::FlatWrite32((r3 + 3112), r4);
    r0 = (r0 * 240);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + -10456));
    r3 = (r3 + r7);
    MemoryInline::FlatWrite32((r3 + 3352), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + -10456));
    r3 = (r3 + r7);
    MemoryInline::FlatWrite32((r3 + 3592), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + -10456));
    r3 = (r3 + r7);
    MemoryInline::FlatWrite32((r3 + 3832), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + -10456));
    r3 = (r3 + r7);
    MemoryInline::FlatWrite32((r3 + 4072), r4);
    r7 = (r6 * 240);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + -10456));
    r3 = (r3 + r7);
    MemoryInline::FlatWrite32((r3 + 3112), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + -10456));
    r3 = (r3 + r7);
    MemoryInline::FlatWrite32((r3 + 3352), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + -10456));
    r3 = (r3 + r7);
    MemoryInline::FlatWrite32((r3 + 3592), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + -10456));
    r3 = (r3 + r7);
    MemoryInline::FlatWrite32((r3 + 3832), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + -10456));
    r3 = (r3 + r7);
    MemoryInline::FlatWrite32((r3 + 4072), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r5 + -10456));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r4);
    r3 = MemoryInline::FlatRead32((r31 + 6424));
    r4 = MemoryInline::FlatRead32((r31 + 6428));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E2588u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80639FC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80639FD4;
    }
}

loc_80639FCC:
{
    r29 = 0;
    goto loc_8063A028;
}

loc_80639FD4:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063A024;
    }
}

loc_80639FE0:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80639FF4u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8063A00C;
}

loc_80639FF8:
{
}

loc_80639FFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_8063A008;
    }
}

loc_8063A000:
{
    r0 = 1;
    goto loc_8063A018;
}

loc_8063A008:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8063A00C:
{
}

loc_8063A010:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80639FF8;
    }
}

loc_8063A014:
{
    r0 = 0;
}

loc_8063A018:
{
}

loc_8063A01C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8063A024;
    }
}

loc_8063A020:
{
    goto loc_8063A028;
}

loc_8063A024:
{
    r29 = 0;
}

loc_8063A028:
{
    r3 = r29;
    // inline leaf 0x805E17CC (13 guest instruction(s))
}

loc_inl0_0x805E17CC:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r4 = MemoryInline::FlatRead32((r4 + 964));
    r0 = (r4 + -37);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_inl0_0x805E17E4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl0_0x805E17F4;
    }
}

loc_inl0_0x805E17E8:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 156), r0);
    goto loc_inl0_cont_805E17CC;
}

loc_inl0_0x805E17F4:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r3 + 156), r0);
}

loc_inl0_cont_805E17CC:
{
    // end of inlined leaf 0x805E17CC
    r3 = 0x809C0000u;
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r6 = 2;
    r4 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r4 + 392);
    r4 = (r4 + 568);
    ctx->lr = 0x8063A050u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805FAF34u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -30688));
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r4 = 52;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8063A074u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8063A188;
}

loc_8063A078:
{
    r12 = 1;
    r6 = 0x809C0000u;
    r29 = (r12 * 240);
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + -10456), 0, 4u, true, false);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r4 = 11;
    r3 = 0x808A0000u;
    r11 = (r11 + r29);
    r0 = 5;
    MemoryInline::FlatWrite32((r11 + 3112), r0);
    r7 = (r4 * 240);
    f1.d = MemoryInline::FlatReadFloat32((r3 + -30688));
    r12 = 6;
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r10 = 0x809C0000u;
    r9 = 0;
    r11 = (r11 + r29);
    r8 = 0x809C0000u;
    MemoryInline::FlatWrite32((r11 + 3352), r0);
    r3 = r31;
    r4 = 31;
    r5 = 0;
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r11 = (r11 + r29);
    MemoryInline::FlatWrite32((r11 + 3592), r0);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r11 = (r11 + r29);
    MemoryInline::FlatWrite32((r11 + 3832), r0);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r11 = (r11 + r29);
    MemoryInline::FlatWrite32((r11 + 4072), r0);
    r29 = (r12 * 240);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r11 = (r11 + r29);
    MemoryInline::FlatWrite32((r11 + 3112), r0);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r11 = (r11 + r29);
    MemoryInline::FlatWrite32((r11 + 3352), r0);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r11 = (r11 + r29);
    MemoryInline::FlatWrite32((r11 + 3592), r0);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r11 = (r11 + r29);
    MemoryInline::FlatWrite32((r11 + 3832), r0);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r11 = (r11 + r29);
    MemoryInline::FlatWrite32((r11 + 4072), r0);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r7 = (r11 + r7);
    MemoryInline::FlatWrite32((r7 + 3112), r0);
    r7 = MemoryInline::FlatRead32((r10 + 7736));
    r7 = MemoryInline::FlatRead32((r7 + 152));
    MemoryInline::FlatWrite32((r7 + 964), r9);
    r7 = MemoryInline::FlatRead32((r10 + 7736));
    r9 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    r7 = MemoryInline::FlatRead32((r7 + 152));
    r9 = MemoryInline::FlatRead32((r9 + 5976));
    MemoryInline::FlatWrite32((r7 + 968), r9);
    r7 = MemoryInline::FlatRead32((r10 + 7736));
    r8 = MemoryInline::FlatRead32((r8 + -10424));
    r7 = MemoryInline::FlatRead32((r7 + 152));
    r8 = MemoryInline::FlatRead16((r8 + 54));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::FlatWrite32((r7 + 972), r8);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -10456));
    MemoryInline::FlatWrite32((r6 + 3352), r0);
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x8063A188u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8063A188:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80639D6C func_80639D6C preserves=true fpr_mask=0x00000000
