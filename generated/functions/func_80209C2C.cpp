#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80209C2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80209C2C;

loc_80209C2C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -24224));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80209C5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80209C78;
    }
}

loc_80209C60:
{
    r4 = MemoryInline::FlatRead32((r13 + -24208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80209C68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80209C78;
    }
}

loc_80209C6C:
{
    r0 = (r3 * 320);
    r31 = (r4 + r0);
    goto loc_80209C7C;
}

loc_80209C78:
{
    r31 = 0;
}

loc_80209C7C:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80209C80:
{
    if (((cr & 0x00000020u) != 0)) {
        goto loc_80209C90;
    }
}

loc_80209C84:
{
    r0 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80209C8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80209C9C;
    }
}

loc_80209C90:
{
    r3 = 65536;
    r3 = (r3 + -20477);
    goto loc_80209ECC;
}

loc_80209C9C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80209CA4:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80209CB4;
    }
}

loc_80209CA8:
{
    r3 = 65536;
    r3 = (r3 + -20477);
    goto loc_80209ECC;
}

loc_80209CB4:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80209CBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80209CCC;
    }
}

loc_80209CC0:
{
    r3 = 65536;
    r3 = (r3 + -20475);
    goto loc_80209ECC;
}

loc_80209CCC:
{
    if (((cr & 0x00000020u) != 0)) {
        goto loc_80209CDC;
    }
}

loc_80209CD0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80209CDC;
    }
}

loc_80209CD4:
{
    r4 = 0;
    ctx->lr = 0x80209CDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80209CDC:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r0 = 1;
    r5 = (r31 + 24);
    r4 = 0;
    MemoryInline::FlatWrite32((r31 + 44), r3);
    r3 = MemoryInline::FlatRead32((r31 + 40));
    MemoryInline::FlatWrite32((r31 + 48), r3);
    r3 = MemoryInline::FlatRead32((r31 + 32));
    MemoryInline::FlatWrite16((r31 + 52), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 32));
    MemoryInline::FlatWrite16((r31 + 54), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r31 + 56), r0);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    ctx->lr = 0x80209D14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F4624u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80209D18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80209EC8;
    }
}

loc_80209D1C:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r0 = (r31 + 44);
    MemoryInline::FlatWrite32((r31 + 12), r3);
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80209D38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80209DD8;
    }
}

loc_80209D3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80209D50;
    }
}

loc_80209D40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80209D44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80209D64;
    }
}

loc_80209D48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80209D5C;
    }
}

loc_80209D4C:
{
    goto loc_80209E4C;
}

loc_80209D50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80209D54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80209E4C;
    }
}

loc_80209D58:
{
    goto loc_80209EA4;
}

loc_80209D5C:
{
    MemoryInline::FlatWrite32((r31 + 4), r30);
    goto loc_80209EA4;
}

loc_80209D64:
{
    r4 = 0x80380000u;
    r30 = (r31 + 64);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = 255;
    r4 = (r4 + 11192);
    r3 = r30;
    r4_addr_1 = (r4 + r0);
    r6 = MemoryInline::FlatRead32(r4_addr_1);
    r4 = 0;
    r0 = (r6 + 16);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = 0;
    r3 = 47;
    goto loc_80209DC0;
}

loc_80209D9C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80209DA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_80209DB0;
    }
}

loc_80209DA8:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r3));
    goto loc_80209DB4;
}

loc_80209DB0:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r5));
}

loc_80209DB4:
{
    r29 = (r29 + 1);
    r30 = (r30 + 1);
    r4 = (r4 + 1);
}

loc_80209DC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(255));
}

loc_80209DC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80209EA4;
    }
}

loc_80209DC8:
{
    r5 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80209D9C;
    }
}

loc_80209DD4:
{
    goto loc_80209EA4;
}

loc_80209DD8:
{
    r4 = 0x80380000u;
    r30 = (r31 + 64);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = 255;
    r4 = (r4 + 11192);
    r3 = r30;
    r4_addr_2 = (r4 + r0);
    r6 = MemoryInline::FlatRead32(r4_addr_2);
    r4 = 0;
    r0 = (r6 + 16);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = 0;
    r3 = 92;
    goto loc_80209E34;
}

loc_80209E10:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80209E18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_80209E24;
    }
}

loc_80209E1C:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r3));
    goto loc_80209E28;
}

loc_80209E24:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r5));
}

loc_80209E28:
{
    r29 = (r29 + 1);
    r30 = (r30 + 1);
    r4 = (r4 + 1);
}

loc_80209E34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(255));
}

loc_80209E38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80209EA4;
    }
}

loc_80209E3C:
{
    r5 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80209E10;
    }
}

loc_80209E48:
{
    goto loc_80209EA4;
}

loc_80209E4C:
{
    r28 = (r31 + 64);
    r4 = 0;
    r3 = r28;
    r5 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801EF500u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r4 = 0;
    r3 = 92;
    goto loc_80209E90;
}

loc_80209E6C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80209E74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_80209E80;
    }
}

loc_80209E78:
{
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r3));
    goto loc_80209E84;
}

loc_80209E80:
{
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r5));
}

loc_80209E84:
{
    r29 = (r29 + 1);
    r28 = (r28 + 1);
    r4 = (r4 + 1);
}

loc_80209E90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(255));
}

loc_80209E94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80209EA4;
    }
}

loc_80209E98:
{
    r5 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80209E6C;
    }
}

loc_80209EA4:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = 0;
    ctx->lr = 0x80209EB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = 131072;
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r4 + -28672);
    ctx->lr = 0x80209EC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C2D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = 0;
    goto loc_80209ECC;
}

loc_80209EC8:
{
    ctx->lr = 0x80209ECCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802079F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80209ECC:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0003FFB gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x43 cr_write=0x43 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80209C2C func_80209C2C preserves=true fpr_mask=0x00000000
