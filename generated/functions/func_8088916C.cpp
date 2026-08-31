#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088916C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_addr_4 = 0;
    uint32_t r12_addr_5 = 0;
    uint32_t r12_addr_6 = 0;
    uint32_t r31_stbu_ea_0 = 0;
    uint32_t r31_stbu_ea_1 = 0;
    uint32_t r31_stbu_ea_2 = 0;
    uint32_t r31_stbu_ea_3 = 0;
    uint32_t r31_stbu_ea_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8088916C;

loc_8088916C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = 0x809C0000u;
    r5 = 0x809C0000u;
    r9 = 4;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r10 = (r4 + 18920);
    r12 = (r5 + 18960);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r7 = 0;
    r6 = 10;
    r5 = 10;
    r0 = MemoryInline::FlatRead8((r3 + 220));
}

loc_808891A0:
{
    r11 = MemoryInline::FlatRead8((r3 + 221));
    r8 = (r0 & 255);
}

loc_808891AC:
{
    if ((static_cast<uint32_t>(r11) > static_cast<uint32_t>(r8))) {
        goto loc_808891C8;
    }
}

loc_808891B0:
{
    r8 = (r4 & 255);
    r31 = (r3 + r8);
    r31_stbu_ea_2 = (r31 + 222);
    MemoryInline::FlatWrite8(r31_stbu_ea_2, static_cast<uint8_t>(r11));
    r31 = r31_stbu_ea_2;
    r8 = MemoryInline::FlatRead8((r3 + 221));
    r0 = (r0 - r8);
    goto loc_808891D8;
}

loc_808891C8:
{
    r8 = (r4 & 255);
    r31 = (r3 + r8);
    r31_stbu_ea_3 = (r31 + 222);
    MemoryInline::FlatWrite8(r31_stbu_ea_3, static_cast<uint8_t>(r0));
    r31 = r31_stbu_ea_3;
    r0 = 0;
}

loc_808891D8:
{
    r8 = (r4 & 255);
}

loc_808891E0:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(1))) {
        goto loc_80889294;
    }
}

loc_808891E4:
{
    r11 = MemoryInline::FlatRead8(r31);
}

loc_808891EC:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80889244;
    }
}

loc_808891F0:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & 1020);
    r31 = (r3 + r8);
    r8 = MemoryInline::FlatRead32((r31 + 180));
}

loc_80889200:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80889244;
    }
}

loc_80889204:
{
    r30 = 0;
    ctr = r6;
}

loc_8088920C:
{
    r11 = (r30 & 255);
    r12_addr_3 = (r12 + r11);
    r8 = MemoryInline::FlatRead8(r12_addr_3);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
}

loc_8088921C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(4))) {
        goto loc_80889238;
    }
}

loc_80889220:
{
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & 1020);
    r10_addr_2 = (r10 + r8);
    r8 = MemoryInline::FlatRead32(r10_addr_2);
    MemoryInline::FlatWrite32((r31 + 180), r8);
    r8 = MemoryInline::FlatRead8((r3 + 176));
    r12_addr_4 = (r12 + r11);
    MemoryInline::FlatWrite8(r12_addr_4, static_cast<uint8_t>(r8));
    goto loc_80889294;
}

loc_80889238:
{
    r30 = (r30 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088920C;
    }
}

loc_80889240:
{
    goto loc_80889294;
}

loc_80889244:
{
}

loc_80889248:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_80889294;
    }
}

loc_8088924C:
{
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r8 = (r8_rot_5 & 1020);
    r31 = (r3 + r8);
    r8 = MemoryInline::FlatRead32((r31 + 180));
}

loc_8088925C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80889294;
    }
}

loc_80889260:
{
    r30 = 0;
    ctr = r5;
}

loc_80889268:
{
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r8 = (r8_rot_7 & 1020);
    r11 = MemoryInline::FlatRead32((r31 + 180));
    r10_addr_4 = (r10 + r8);
    r8 = MemoryInline::FlatRead32(r10_addr_4);
}

loc_80889278:
{
    if ((static_cast<uint32_t>(r11) != static_cast<uint32_t>(r8))) {
        goto loc_8088928C;
    }
}

loc_8088927C:
{
    r8 = (r30 & 255);
    r12_addr_5 = (r12 + r8);
    MemoryInline::FlatWrite8(r12_addr_5, static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite32((r31 + 180), r7);
    goto loc_80889294;
}

loc_8088928C:
{
    r30 = (r30 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80889268;
    }
}

loc_80889294:
{
    r4 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
}

loc_8088929C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808891A0;
    }
}

loc_808892A0:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8088916C func_8088916C preserves=true fpr_mask=0x00000000
