#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808830B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r0_subfe_rb_3 = 0;
    uint32_t r0_subfe_rb_4 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_subfe_rb_0 = 0;
    uint32_t r5_subfe_rb_1 = 0;
    uint32_t r5_subfe_rb_2 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_not_0 = 0;
    uint32_t r7_subfe_rb_0 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;

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

    goto loc_808830B4;

loc_808830B4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
}

loc_808830B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_808830BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 17278));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808830C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_808830C8:
{
    r10 = (r3 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 7917));
    r7 = MemoryInline::FlatRead8((r10 + 7930));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_808830D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_808830DC:
{
    r7 = (r3 + r4);
    r9 = 0;
    r0 = MemoryInline::FlatRead8((r7 + 8016));
}

loc_808830EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80883130;
    }
}

loc_808830F0:
{
    r7 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r7 = MemoryInline::FlatRead32((r7 + -10448));
    r8 = MemoryInline::FlatRead32((r7 + 12));
    r8_addr_1 = (r8 + r0);
    r7 = MemoryInline::FlatRead32(r8_addr_1);
    r0 = MemoryInline::FlatRead32((r7 + 56));
    r0 = (r0 & 2);
}

loc_8088310C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80883130;
    }
}

loc_80883110:
{
    r0 = MemoryInline::FlatRead8((r10 + 8016));
}

loc_80883118:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80883130;
    }
}

loc_8088311C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r8_addr_2 = (r8 + r0);
    r7 = MemoryInline::FlatRead32(r8_addr_2);
    r0 = MemoryInline::FlatRead32((r7 + 56));
    r0 = (r0 & 2);
}

loc_8088312C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80883134;
    }
}

loc_80883130:
{
    r9 = 1;
}

loc_80883134:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_80883138:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8088313C:
{
    r7 = (r3 + r5);
    r0 = MemoryInline::FlatRead8((r7 + 7954));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80883148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8088314C:
{
    r0 = MemoryInline::FlatRead8((r3 + 17248));
    r7 = (r6 + -1);
    r7 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r0));
    r0 = (r7 + 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(64));
}

loc_80883160:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80883164:
{
    r7 = MemoryInline::FlatRead32((r3 + 17176));
    r8 = 64;
    r9 = (r7 + 1);
    r7 = (r7 + r0);
    r0 = (r9 - r8);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r8) ? 1u : 0u) << 29);
    r0_subfe_rb_1 = r0;
    r0_not_1 = ~(r0);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r0_subfe_rb_1);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r10 = (r7 & 63);
    r7 = (r9 & r0);
    goto loc_808831A4;
}

loc_80883188:
{
    r0 = MemoryInline::FlatRead32((r3 + 17172));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
}

loc_80883190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80883194:
{
    r7 = (r7 + 1);
    r0 = (r7 - r8);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r8) ? 1u : 0u) << 29);
    r0_subfe_rb_3 = r0;
    r0_not_3 = ~(r0);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r0_subfe_rb_3);
    r0 = (r0 + r0_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7 = (r7 & r0);
}

loc_808831A4:
{
}

loc_808831A8:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r10))) {
        goto loc_80883188;
    }
}

loc_808831AC:
{
    r10 = 64;
    r0 = 1;
    r7 = (r9 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r11 = 0;
    r7_subfe_rb_0 = r7;
    r7_not_0 = ~(r7);
    r7_ca_0 = (xer >> 29) & 1u;
    r7 = (r7_not_0 + r7_subfe_rb_0);
    r7 = (r7 + r7_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r7_subfe_rb_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r7_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r8 = 3;
    r7 = (r9 & r7);
    MemoryInline::FlatWrite32((r3 + 17176), r7);
    r9 = (r7 * 136);
    r7 = 0;
    r9 = (r3 + r9);
    MemoryInline::FlatWrite32((r9 + 8468), r0);
    r0 = MemoryInline::FlatRead32((r3 + 8436));
    MemoryInline::FlatWrite32((r9 + 8480), r0);
    MemoryInline::FlatWrite8((r9 + 8476), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r9 + 8477), static_cast<uint8_t>(r5));
    goto loc_80883244;
}

loc_808831F0:
{
    r5 = MemoryInline::FlatRead32((r3 + 17176));
    r0 = (r6 & 255);
    r9 = (r5 + 1);
    r5 = (r9 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r5_subfe_rb_2 = r5;
    r5_not_2 = ~(r5);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r5_subfe_rb_2);
    r5 = (r5 + r5_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r5_subfe_rb_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (r9 & r5);
    MemoryInline::FlatWrite32((r3 + 17176), r5);
    r5 = (r5 * 136);
    r9 = (r3 + r5);
    MemoryInline::FlatWrite32((r9 + 8468), r8);
    r5 = MemoryInline::FlatRead32((r3 + 8436));
    MemoryInline::FlatWrite32((r9 + 8480), r5);
    MemoryInline::FlatWrite8((r9 + 8484), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r9 + 8585), static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite8((r9 + 8476), static_cast<uint8_t>(r4));
    r5 = MemoryInline::FlatRead8((r3 + 17248));
}

loc_80883234:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_8088323C;
    }
}

loc_80883238:
{
    r5 = r6;
}

loc_8088323C:
{
    r6 = (r6 - r5);
    r11 = (r11 + 1);
}

loc_80883244:
{
    r0 = (r6 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80883248:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808831F0;
    }
}

loc_8088324C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FE1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808830B4 func_808830B4 preserves=true fpr_mask=0x00000000
