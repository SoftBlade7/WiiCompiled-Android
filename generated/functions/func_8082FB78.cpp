#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082FB78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
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
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8082FB78;

loc_8082FB78:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -13952);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8082FBB0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_8082FC60;
    }
}

loc_8082FBB4:
{
}

loc_8082FBB8:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(1))) {
        goto loc_8082FC10;
    }
}

loc_8082FBBC:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8082FBC4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8082FBE4;
    }
}

loc_8082FBC8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8082FBD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FBE4;
    }
}

loc_8082FBD8:
{
    r5 = 1;
    ctx->lr = 0x8082FBE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055F7D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082FBEC;
}

loc_8082FBE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8082FBE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FEEC;
    }
}

loc_8082FBEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8082FBF0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8082FC60;
    }
}

loc_8082FBF4:
{
    r3 = 0x809C0000u;
    r4 = (r28 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 6536));
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 24));
    ctx->lr = 0x8082FC0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x808333ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082FC60;
}

loc_8082FC10:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8082FC18:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8082FC38;
    }
}

loc_8082FC1C:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8082FC28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FC38;
    }
}

loc_8082FC2C:
{
    r5 = 1;
    ctx->lr = 0x8082FC34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055F7D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082FC40;
}

loc_8082FC38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8082FC3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FEEC;
    }
}

loc_8082FC40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8082FC44:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8082FC60;
    }
}

loc_8082FC48:
{
    r3 = 0x809C0000u;
    r4 = (r28 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 6536));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 24));
    ctx->lr = 0x8082FC60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x808333ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082FC60:
{
    r0 = (r30 + -2);
}

loc_8082FC68:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8082FDF4;
    }
}

loc_8082FC6C:
{
}

loc_8082FC70:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8082FC80;
    }
}

loc_8082FC74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_8082FC78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FD4C;
    }
}

loc_8082FC7C:
{
    goto loc_8082FEE8;
}

loc_8082FC80:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_8082FC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FEEC;
    }
}

loc_8082FC8C:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8082FC94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8082FC9C;
    }
}

loc_8082FC98:
{
    goto loc_8082FEEC;
}

loc_8082FC9C:
{
    r28 = 0;
}

loc_8082FCA0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 & 65535);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8082FCB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8082FD3C;
    }
}

loc_8082FCBC:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082FCC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FD24;
    }
}

loc_8082FCCC:
{
    r4 = 0;
    // inline leaf 0x80557360 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x80557360
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082FCD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FD24;
    }
}

loc_8082FCDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8082FCE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8082FD24;
    }
}

loc_8082FCE4:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8082FCEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8082FD24;
    }
}

loc_8082FCF0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x8055586C (9 guest instruction(s))
}

loc_inl1_0x8055586C:
{
    r3 = MemoryInline::FlatRead32((r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x80555874:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80555878:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x80555884:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80555888:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    goto loc_inl1_cont_8055586C;
}

loc_inl1_return:
{
}

loc_inl1_cont_8055586C:
{
    // end of inlined leaf 0x8055586C
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 & 65535);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    ctx->lr = 0x8082FD20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082FD3C;
}

loc_8082FD24:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 & 65535);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    ctx->lr = 0x8082FD3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082FD3C:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_8082FD44:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8082FCA0;
    }
}

loc_8082FD48:
{
    goto loc_8082FEE8;
}

loc_8082FD4C:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8082FD54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FEEC;
    }
}

loc_8082FD58:
{
    r28 = 3;
}

loc_8082FD5C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 & 65535);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8082FD74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8082FDE4;
    }
}

loc_8082FD78:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082FD84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FDCC;
    }
}

loc_8082FD88:
{
    r4 = 0;
    // inline leaf 0x80557360 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80557360
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082FD94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FDCC;
    }
}

loc_8082FD98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_8082FD9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8082FDCC;
    }
}

loc_8082FDA0:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8082FDA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8082FDCC;
    }
}

loc_8082FDAC:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 & 65535);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    ctx->lr = 0x8082FDC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8082FDE4;
}

loc_8082FDCC:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 & 65535);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    ctx->lr = 0x8082FDE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082FDE4:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(6));
}

loc_8082FDEC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8082FD5C;
    }
}

loc_8082FDF0:
{
    goto loc_8082FEE8;
}

loc_8082FDF4:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8082FDFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FEEC;
    }
}

loc_8082FE00:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(18));
}

loc_8082FE08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8082FE14;
    }
}

loc_8082FE0C:
{
    r28 = 1;
    goto loc_8082FE4C;
}

loc_8082FE14:
{
    r0 = (r3 + -34);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8082FE1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8082FE40;
    }
}

loc_8082FE20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(22));
}

loc_8082FE24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FE40;
    }
}

loc_8082FE28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(31));
}

loc_8082FE2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FE40;
    }
}

loc_8082FE30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(26));
}

loc_8082FE34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FE40;
    }
}

loc_8082FE38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(29));
}

loc_8082FE3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8082FE48;
    }
}

loc_8082FE40:
{
    r28 = 3;
    goto loc_8082FE4C;
}

loc_8082FE48:
{
    r28 = 2;
}

loc_8082FE4C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = r28;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8082FE64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FEB4;
    }
}

loc_8082FE68:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557360 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3_addr_12 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_12);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x80557360
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082FE7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FE9C;
    }
}

loc_8082FE80:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3_addr_13 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_13);
    // end of inlined leaf 0x80557340
    r0 = MemoryInline::FlatRead16((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_8082FE98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FEB4;
    }
}

loc_8082FE9C:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = r28;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    ctx->lr = 0x8082FEB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082FEB4:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8082FECC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082FEE8;
    }
}

loc_8082FED0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    ctx->lr = 0x8082FEE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8082FEE8:
{
    MemoryInline::FlatWrite32((r29 + 8), r30);
}

loc_8082FEEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8082FB78 func_8082FB78 preserves=true fpr_mask=0x00000000
