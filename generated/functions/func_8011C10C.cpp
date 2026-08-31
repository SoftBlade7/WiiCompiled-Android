#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011C10C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011C10C;

loc_8011C10C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8011C114:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011C124;
    }
}

loc_8011C11C:
{
    r3 = 0;
    goto loc_8011C1A8;
}

loc_8011C124:
{
    r12 = 0;
    r31 = 1;
    goto loc_8011C138;
}

loc_8011C130:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & -2);
    r31 = (r9 + 1);
}

loc_8011C138:
{
}

loc_8011C13C:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r4))) {
        goto loc_8011C130;
    }
}

loc_8011C140:
{
    r9 = 0;
}

loc_8011C144:
{
    r10 = MemoryInline::FlatRead32(r8);
    r11 = MemoryInline::FlatRead8(r7);
    r5_addr_2 = (r5 + r10);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
    r10 = (r10 + 1);
    r3_addr_2 = (r3 + r11);
    r11 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_8011C15C:
{
    r0 = (r11 + r0);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32(r8, r10);
    if ((static_cast<uint32_t>(r10) < static_cast<uint32_t>(r6))) {
        goto loc_8011C17C;
    }
}

loc_8011C16C:
{
    MemoryInline::FlatWrite32(r8, r9);
    r0 = MemoryInline::FlatRead8(r7);
    r0 = (r0 + r6);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
}

loc_8011C17C:
{
    r12 = (r12 + 1);
    r0 = MemoryInline::FlatRead8(r7);
}

loc_8011C188:
{
    r10 = (r31 & r0);
    if ((static_cast<uint32_t>(r12) <= static_cast<uint32_t>(11))) {
        goto loc_8011C19C;
    }
}

loc_8011C190:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r10), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r10 = (r10 - r0);
}

loc_8011C19C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(r4));
}

loc_8011C1A0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8011C144;
    }
}

loc_8011C1A4:
{
    r3 = (r10 & 255);
}

loc_8011C1A8:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001E0B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011C10C func_8011C10C preserves=true fpr_mask=0x00000000
