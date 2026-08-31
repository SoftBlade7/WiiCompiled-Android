#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015B92C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015B92C;

loc_8015B92C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
}

loc_8015B938:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BA08;
    }
}

loc_8015B960:
{
}

loc_8015B964:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_8015B998;
    }
}

loc_8015B968:
{
    r4 = MemoryInline::FlatRead8(r3);
    r6 = 0;
    r0 = MemoryInline::FlatRead8(r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8015B978:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015B990;
    }
}

loc_8015B97C:
{
    r3 = MemoryInline::FlatRead8((r3 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8015B988:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015B990;
    }
}

loc_8015B98C:
{
    r6 = 1;
}

loc_8015B990:
{
    r3 = r6;
    goto loc_8015BB80;
}

loc_8015B998:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
}

loc_8015B99C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015B9EC;
    }
}

loc_8015B9A0:
{
    r4 = MemoryInline::FlatRead8(r3);
    r6 = 0;
    r0 = MemoryInline::FlatRead8(r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8015B9B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BA00;
    }
}

loc_8015B9B4:
{
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8015B9C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BA00;
    }
}

loc_8015B9C4:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8015B9D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BA00;
    }
}

loc_8015B9D4:
{
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8015B9E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BA00;
    }
}

loc_8015B9E4:
{
    r6 = 1;
    goto loc_8015BA00;
}

loc_8015B9EC:
{
    r4 = r30;
    r5 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r6 = (r6_rot_1 & 255);
}

loc_8015BA00:
{
    r3 = r6;
    goto loc_8015BB80;
}

loc_8015BA08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8015BAC8;
    }
}

loc_8015BA0C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
}

loc_8015BA10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BA5C;
    }
}

loc_8015BA14:
{
    r0 = MemoryInline::FlatRead8(r3);
    r6 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015BA20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BA54;
    }
}

loc_8015BA24:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015BA2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BA54;
    }
}

loc_8015BA30:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = MemoryInline::FlatRead8(r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8015BA3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BA54;
    }
}

loc_8015BA40:
{
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r0 = MemoryInline::FlatRead8((r5 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8015BA4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BA54;
    }
}

loc_8015BA50:
{
    r6 = 1;
}

loc_8015BA54:
{
    r3 = r6;
    goto loc_8015BB80;
}

loc_8015BA5C:
{
    r4 = r28;
    r3 = (r1 + 24);
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80250000u;
    r3 = (r1 + 8);
    r4 = (r4 + -13496);
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
}

loc_8015BA84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BA9C;
    }
}

loc_8015BA88:
{
    r4 = r30;
    r5 = r31;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8015BAAC;
}

loc_8015BA9C:
{
    r4 = r30;
    r5 = r31;
    r3 = (r1 + 10);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8015BAAC:
{
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 255);
    goto loc_8015BB80;
}

loc_8015BAC8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
}

loc_8015BACC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BB18;
    }
}

loc_8015BAD0:
{
    r0 = MemoryInline::FlatRead8(r5);
    r6 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015BADC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BB10;
    }
}

loc_8015BAE0:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015BAE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BB10;
    }
}

loc_8015BAEC:
{
    r4 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8015BAF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BB10;
    }
}

loc_8015BAFC:
{
    r4 = MemoryInline::FlatRead8((r5 + 3));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8015BB08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BB10;
    }
}

loc_8015BB0C:
{
    r6 = 1;
}

loc_8015BB10:
{
    r3 = r6;
    goto loc_8015BB80;
}

loc_8015BB18:
{
    r4 = r30;
    r3 = (r1 + 8);
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80250000u;
    r3 = (r1 + 24);
    r4 = (r4 + -13496);
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(4));
}

loc_8015BB40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015BB58;
    }
}

loc_8015BB44:
{
    r4 = r28;
    r5 = r29;
    r3 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8015BB68;
}

loc_8015BB58:
{
    r4 = r28;
    r5 = r29;
    r3 = (r1 + 26);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8015BB68:
{
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 255);
}

loc_8015BB80:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8015B92C func_8015B92C preserves=true fpr_mask=0x00000000
