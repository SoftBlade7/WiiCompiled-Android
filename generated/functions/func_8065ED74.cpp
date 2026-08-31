#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065ED74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065ED74;

loc_8065ED74:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r3));
}

loc_8065EDAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EDC4;
    }
}

loc_8065EDB0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r3));
}

loc_8065EDC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065EDE4;
    }
}

loc_8065EDC4:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065EDD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead8((r3 + 4));
    goto loc_8065EE10;
}

loc_8065EDE4:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065EDF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EE0C;
    }
}

loc_8065EDFC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r29 + r0);
    r28 = MemoryInline::FlatRead8((r3 + 20));
    goto loc_8065EE10;
}

loc_8065EE0C:
{
    r28 = 0;
}

loc_8065EE10:
{
    r31 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r3));
}

loc_8065EE24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065EE3C;
    }
}

loc_8065EE28:
{
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r3));
}

loc_8065EE38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065EE5C;
    }
}

loc_8065EE3C:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065EE4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r29 + r0);
    r5 = MemoryInline::FlatRead8((r3 + 2));
    goto loc_8065EE88;
}

loc_8065EE5C:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_8065EE70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065EE84;
    }
}

loc_8065EE74:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3 = (r29 + r0);
    r5 = MemoryInline::FlatRead8((r3 + 18));
    goto loc_8065EE88;
}

loc_8065EE84:
{
    r5 = 20;
}

loc_8065EE88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_8065EE8C:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r28));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_7 & 134217727);
    r31 = 8;
    r6 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065EEAC;
    }
}

loc_8065EEA0:
{
}

loc_8065EEA4:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(3))) {
        goto loc_8065EEAC;
    }
}

loc_8065EEA8:
{
    r6 = 1;
}

loc_8065EEAC:
{
}

loc_8065EEB0:
{
    r7 = 0;
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(5))) {
        goto loc_8065EEC4;
    }
}

loc_8065EEB8:
{
}

loc_8065EEBC:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(7))) {
        goto loc_8065EEC4;
    }
}

loc_8065EEC0:
{
    r7 = 1;
}

loc_8065EEC4:
{
}

loc_8065EEC8:
{
    r8 = 1;
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8065EEDC;
    }
}

loc_8065EED0:
{
}

loc_8065EED4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8065EEDC;
    }
}

loc_8065EED8:
{
    r8 = 0;
}

loc_8065EEDC:
{
}

loc_8065EEE0:
{
    r9 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8065EEF4;
    }
}

loc_8065EEE8:
{
}

loc_8065EEEC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8065EEF4;
    }
}

loc_8065EEF0:
{
    r9 = 0;
}

loc_8065EEF4:
{
    r3 = 0x809C0000u;
    r0 = (r30 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = (r0 * 584);
    r10 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r3 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 200));
}

loc_8065EF1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_8065EF30;
    }
}

loc_8065EF20:
{
    r0 = MemoryInline::FlatRead8((r4 + 520));
}

loc_8065EF28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8065EF30;
    }
}

loc_8065EF2C:
{
    r3 = 1;
}

loc_8065EF30:
{
}

loc_8065EF34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065F004;
    }
}

loc_8065EF38:
{
}

loc_8065EF3C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8065EF50;
    }
}

loc_8065EF40:
{
    r0 = MemoryInline::FlatRead32((r4 + 204));
}

loc_8065EF48:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_8065EF50;
    }
}

loc_8065EF4C:
{
    r10 = 1;
}

loc_8065EF50:
{
    r0 = MemoryInline::FlatRead32((r4 + 260));
}

loc_8065EF58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8065EF70;
    }
}

loc_8065EF5C:
{
}

loc_8065EF60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8065EFA0;
    }
}

loc_8065EF64:
{
}

loc_8065EF68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8065EFD0;
    }
}

loc_8065EF6C:
{
    goto loc_8065EFFC;
}

loc_8065EF70:
{
}

loc_8065EF74:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8065EF8C;
    }
}

loc_8065EF78:
{
}

loc_8065EF7C:
{
    r31 = 3;
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8065EFFC;
    }
}

loc_8065EF84:
{
    r31 = 7;
    goto loc_8065EFFC;
}

loc_8065EF8C:
{
}

loc_8065EF90:
{
    r31 = 7;
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8065EFFC;
    }
}

loc_8065EF98:
{
    r31 = 3;
    goto loc_8065EFFC;
}

loc_8065EFA0:
{
}

loc_8065EFA4:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8065EFBC;
    }
}

loc_8065EFA8:
{
}

loc_8065EFAC:
{
    r31 = 2;
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8065EFFC;
    }
}

loc_8065EFB4:
{
    r31 = 6;
    goto loc_8065EFFC;
}

loc_8065EFBC:
{
}

loc_8065EFC0:
{
    r31 = 6;
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8065EFFC;
    }
}

loc_8065EFC8:
{
    r31 = 2;
    goto loc_8065EFFC;
}

loc_8065EFD0:
{
}

loc_8065EFD4:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8065EFEC;
    }
}

loc_8065EFD8:
{
}

loc_8065EFDC:
{
    r31 = 1;
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8065EFFC;
    }
}

loc_8065EFE4:
{
    r31 = 5;
    goto loc_8065EFFC;
}

loc_8065EFEC:
{
}

loc_8065EFF0:
{
    r31 = 5;
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8065EFFC;
    }
}

loc_8065EFF8:
{
    r31 = 1;
}

loc_8065EFFC:
{
    r28 = MemoryInline::FlatRead32((r4 + 204));
    goto loc_8065F020;
}

loc_8065F004:
{
}

loc_8065F008:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8065F010;
    }
}

loc_8065F00C:
{
    r31 = 4;
}

loc_8065F010:
{
}

loc_8065F014:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8065F01C;
    }
}

loc_8065F018:
{
    r31 = 0;
}

loc_8065F01C:
{
    r28 = 20;
}

loc_8065F020:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(8));
}

loc_8065F024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065F048;
    }
}

loc_8065F028:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065F038u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r31));
}

loc_8065F048:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00007FB gpr_write=0xF00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065ED74 func_8065ED74 preserves=true fpr_mask=0x00000000
