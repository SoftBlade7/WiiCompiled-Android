#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008DA00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8008DA00;

loc_8008DA00:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_8008DA0C:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r7;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r6;
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8008DA34;
    }
}

loc_8008DA2C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r7, r0);
}

loc_8008DA34:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008DA3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008DA48;
    }
}

loc_8008DA40:
{
    r3 = 0;
    goto loc_8008DC40;
}

loc_8008DA48:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_8008DA50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8008DB08;
    }
}

loc_8008DA54:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r30 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008DA60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008DAAC;
    }
}

loc_8008DA64:
{
    r4 = r29;
    r3 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AD0E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r30;
    r3 = (r1 + 16);
    ctx->lr = 0x8008DA7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AD160u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008DA80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008DA8C;
    }
}

loc_8008DA84:
{
    r3 = 0;
    goto loc_8008DC40;
}

loc_8008DA8C:
{
    r4 = r3;
    r3 = (r1 + 12);
    // inline leaf 0x800AD1F0 (8 guest instruction(s))
}

loc_inl0_0x800AD1F0:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r5 = 0;
    MemoryInline::FlatWriteRam32(r3, r5);
    r4 = (r0 + r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800AD204:
{
    r0 = (r4 + 8);
    MemoryInline::FlatWriteRam32(r3, r0);
    goto loc_inl0_cont_800AD1F0;
}

loc_inl0_return:
{
}

loc_inl0_cont_800AD1F0:
{
    // end of inlined leaf 0x800AD1F0
    r4 = r31;
    r3 = (r1 + 12);
    r5 = 0;
    ctx->lr = 0x8008DAA8u;
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
    InvokeDirectCpu<0x800AD220u>(ctx);
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
    goto loc_8008DC40;
}

loc_8008DAAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r5 = (r3 + 8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_8008DAB8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008DAC4;
    }
}

loc_8008DABC:
{
    r3 = 0;
    goto loc_8008DC40;
}

loc_8008DAC4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 12));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl1_0x800AD0B0:
{
}

loc_inl1_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x800AD0C0;
    }
}

loc_inl1_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_return:
{
}

loc_inl1_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008DADC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008DAE8;
    }
}

loc_8008DAE0:
{
    r3 = 0;
    goto loc_8008DC40;
}

loc_8008DAE8:
{
    r4 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x800AD210 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x800AD210
    r4 = r31;
    r5 = r29;
    r3 = (r1 + 8);
    ctx->lr = 0x8008DB04u;
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
    InvokeDirectCpu<0x800AD220u>(ctx);
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
    goto loc_8008DC40;
}

loc_8008DB08:
{
}

loc_8008DB0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8008DB94;
    }
}

loc_8008DB10:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008DB18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008DB24;
    }
}

loc_8008DB1C:
{
    r3 = 0;
    goto loc_8008DC40;
}

loc_8008DB24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8008DB28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008DB30;
    }
}

loc_8008DB2C:
{
    MemoryInline::FlatWrite32(r7, r0);
}

loc_8008DB30:
{
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r0 = 13;
    r6 = (r4 + 20);
    r3 = MemoryInline::FlatRead32(r7);
    r5 = (r7 + 20);
    MemoryInline::FlatWrite32(r4, r3);
    r3 = MemoryInline::FlatRead8((r7 + 4));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r4 + 8), r3);
    r3 = MemoryInline::FlatRead32((r7 + 12));
    MemoryInline::FlatWrite32((r4 + 12), r3);
    r3 = MemoryInline::FlatRead32((r7 + 16));
    MemoryInline::FlatWrite32((r4 + 16), r3);
    r3 = MemoryInline::FlatRead32((r7 + 20));
    MemoryInline::FlatWrite32((r4 + 20), r3);
    ctr = r0;
    // nop
}

loc_8008DB78:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r5 = (r5 + 8);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8008DB78;
    }
}

loc_8008DB8C:
{
    r3 = 1;
    goto loc_8008DC40;
}

loc_8008DB94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8008DB98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008DC3C;
    }
}

loc_8008DB9C:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008DBA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008DBB0;
    }
}

loc_8008DBA8:
{
    r3 = 0;
    goto loc_8008DC40;
}

loc_8008DBB0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x8008DBC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008DBC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008DBD0;
    }
}

loc_8008DBC8:
{
    r3 = 0;
    goto loc_8008DC40;
}

loc_8008DBD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8008DBD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008DBDC;
    }
}

loc_8008DBD8:
{
    MemoryInline::FlatWrite32(r30, r3);
}

loc_8008DBDC:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = 13;
    MemoryInline::FlatWrite32(r31, r4);
    r4 = (r3 + 20);
    r5 = (r31 + 20);
    r6 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r31 + 8), r6);
    r6 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32((r31 + 12), r6);
    r6 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite32((r31 + 16), r6);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite32((r31 + 20), r3);
    ctr = r0;
    // nop
}

loc_8008DC20:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8008DC20;
    }
}

loc_8008DC34:
{
    r3 = 1;
    goto loc_8008DC40;
}

loc_8008DC3C:
{
    r3 = 0;
}

loc_8008DC40:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8008DA00 func_8008DA00 preserves=true fpr_mask=0x00000000
