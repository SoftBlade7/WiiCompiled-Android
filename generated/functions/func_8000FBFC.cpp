#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000FBFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_10 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
    uint32_t r6_stbu_ea_4 = 0;
    uint32_t r6_stbu_ea_5 = 0;
    uint32_t r6_stbu_ea_6 = 0;
    uint32_t r6_stbu_ea_7 = 0;
    uint32_t r6_stbu_ea_8 = 0;
    uint32_t r6_stbu_ea_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000FBFC;

loc_8000FBFC:
{
}

loc_8000FC00:
{
    r8 = 0;
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r8));
    r6 = (r4 + -1);
    r7 = 0;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8000FC40;
    }
}

loc_8000FC14:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8000FC1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000FC40;
    }
}

loc_8000FC20:
{
    r0 = MemoryInline::FlatRead8((r5 + 3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000FC28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FC38;
    }
}

loc_8000FC2C:
{
    r0 = MemoryInline::FlatRead8((r5 + 5));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(111));
}

loc_8000FC34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FC40;
    }
}

loc_8000FC38:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

loc_8000FC40:
{
    r9 = MemoryInline::FlatRead8((r5 + 5));
}

loc_8000FC48:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(100))) {
        goto loc_8000FC78;
    }
}

loc_8000FC4C:
{
}

loc_8000FC50:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(105))) {
        goto loc_8000FC78;
    }
}

loc_8000FC54:
{
}

loc_8000FC58:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(111))) {
        goto loc_8000FC9C;
    }
}

loc_8000FC5C:
{
}

loc_8000FC60:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(117))) {
        goto loc_8000FCAC;
    }
}

loc_8000FC64:
{
}

loc_8000FC68:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(120))) {
        goto loc_8000FCBC;
    }
}

loc_8000FC6C:
{
}

loc_8000FC70:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(88))) {
        goto loc_8000FCBC;
    }
}

loc_8000FC74:
{
    goto loc_8000FCC8;
}

loc_8000FC78:
{
}

loc_8000FC7C:
{
    r0 = 10;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8000FCC8;
    }
}

loc_8000FC84:
{
    r8 = (r3 + -2147483648);
}

loc_8000FC8C:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(0))) {
        goto loc_8000FC94;
    }
}

loc_8000FC90:
{
    r3 = (0 - r3);
}

loc_8000FC94:
{
    r8 = 1;
    goto loc_8000FCC8;
}

loc_8000FC9C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 8;
    goto loc_8000FCC8;
}

loc_8000FCAC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 10;
    goto loc_8000FCC8;
}

loc_8000FCBC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 16;
}

loc_8000FCC8:
{
    r9 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r9 = (r9 * r0);
    r11 = (r3 - r9);
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8000FCDC:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(10))) {
        goto loc_8000FCE8;
    }
}

loc_8000FCE0:
{
    r11 = (r11 + 48);
    goto loc_8000FD00;
}

loc_8000FCE8:
{
    r9 = MemoryInline::FlatRead8((r5 + 5));
    r10 = (r11 + 55);
}

loc_8000FCF4:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(120))) {
        goto loc_8000FCFC;
    }
}

loc_8000FCF8:
{
    r10 = (r11 + 87);
}

loc_8000FCFC:
{
    r11 = r10;
}

loc_8000FD00:
{
}

loc_8000FD04:
{
    MemoryInline::FlatWrite8((r6 + -1), static_cast<uint8_t>(r11));
    r6 = (r6 + -1);
    r7 = (r7 + 1);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8000FCC8;
    }
}

loc_8000FD14:
{
}

loc_8000FD18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8000FD40;
    }
}

loc_8000FD1C:
{
    r3 = MemoryInline::FlatRead8((r5 + 3));
}

loc_8000FD24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000FD40;
    }
}

loc_8000FD28:
{
    r3 = MemoryInline::FlatRead8(r6);
}

loc_8000FD30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(48))) {
        goto loc_8000FD40;
    }
}

loc_8000FD34:
{
    r3 = 48;
    r6_stbu_ea_1 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_1, static_cast<uint8_t>(r3));
    r6 = r6_stbu_ea_1;
    r7 = (r7 + 1);
}

loc_8000FD40:
{
    r3 = MemoryInline::FlatRead8(r5);
}

loc_8000FD48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_8000FD94;
    }
}

loc_8000FD4C:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
}

loc_8000FD54:
{
    MemoryInline::FlatWrite32((r5 + 12), r3);
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8000FD68;
    }
}

loc_8000FD5C:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
}

loc_8000FD64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000FD74;
    }
}

loc_8000FD68:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r3 + -1);
    MemoryInline::FlatWrite32((r5 + 12), r3);
}

loc_8000FD74:
{
}

loc_8000FD78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_8000FD94;
    }
}

loc_8000FD7C:
{
    r3 = MemoryInline::FlatRead8((r5 + 3));
}

loc_8000FD84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000FD94;
    }
}

loc_8000FD88:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r3 + -2);
    MemoryInline::FlatWrite32((r5 + 12), r3);
}

loc_8000FD94:
{
    r9 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r4 - r6);
    r3 = (r9 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(509));
}

loc_8000FDA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000FDB0;
    }
}

loc_8000FDA8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

loc_8000FDB0:
{
    r4 = 48;
    goto loc_8000FDC0;
}

loc_8000FDB8:
{
    r6_stbu_ea_4 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_4, static_cast<uint8_t>(r4));
    r6 = r6_stbu_ea_4;
    r7 = (r7 + 1);
}

loc_8000FDC0:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8000FDC8:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r3))) {
        goto loc_8000FDB8;
    }
}

loc_8000FDCC:
{
}

loc_8000FDD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_8000FDF0;
    }
}

loc_8000FDD4:
{
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_8000FDDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000FDF0;
    }
}

loc_8000FDE0:
{
    r3 = MemoryInline::FlatRead8((r5 + 5));
    r0 = 48;
    MemoryInline::FlatWrite8((r6 + -1), static_cast<uint8_t>(r3));
    r6_stbu_ea_5 = (r6 + -2);
    MemoryInline::FlatWrite8(r6_stbu_ea_5, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_5;
}

loc_8000FDF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8000FDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000FE04;
    }
}

loc_8000FDF8:
{
    r0 = 45;
    r6_stbu_ea_7 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_7, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_7;
    goto loc_8000FE2C;
}

loc_8000FE04:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8000FE0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FE1C;
    }
}

loc_8000FE10:
{
    r0 = 43;
    r6_stbu_ea_8 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_8, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_8;
    goto loc_8000FE2C;
}

loc_8000FE1C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8000FE20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000FE2C;
    }
}

loc_8000FE24:
{
    r0 = 32;
    r6_stbu_ea_9 = (r6 + -1);
    MemoryInline::FlatWrite8(r6_stbu_ea_9, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_9;
}

loc_8000FE2C:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FD9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000FBFC func_8000FBFC preserves=true fpr_mask=0x00000000
