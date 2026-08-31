#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B1DB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
    uint32_t r9_addr_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807B1DB4;

loc_807B1DB4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B1DCC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807B1ED8;
    }
}

loc_807B1DD0:
{
    r0 = 159;
    MemoryInline::FlatWrite32(r3, r0);
    r5 = 0x809C0000u;
    r6 = 0x809C0000u;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r4));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r9 = (r9_rot_1 & 1020);
    r0 = (r4 * 240);
    r4 = 0;
    r7 = MemoryInline::FlatRead32((r5 + -10448));
    r11 = 0;
    r29 = MemoryInline::FlatRead8((r6 + 14520));
    r12 = 1;
    r6 = MemoryInline::FlatRead32((r7 + 12));
    r10 = 0x809C0000u;
    r7 = 0x809C0000u;
    r8 = 0x809C0000u;
    r6_addr_1 = (r6 + r9);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    r31 = MemoryInline::FlatRead8((r6 + 32));
    ctr = r29;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807B1E20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B1ED0;
    }
}

loc_807B1E24:
{
    r29 = (r3 + r4);
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r12));
    r6 = MemoryInline::FlatRead8((r3 + 8));
}

loc_807B1E34:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r6))) {
        goto loc_807B1E3C;
    }
}

loc_807B1E38:
{
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r11));
}

loc_807B1E3C:
{
    r6 = MemoryInline::FlatRead8((r10 + 14523));
}

loc_807B1E44:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_807B1E68;
    }
}

loc_807B1E48:
{
    r9 = MemoryInline::FlatRead32((r5 + -10448));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 1020);
    r9 = MemoryInline::FlatRead32((r9 + 12));
    r9_addr_2 = (r9 + r6);
    r6 = MemoryInline::FlatRead32(r9_addr_2);
    r6 = MemoryInline::FlatRead8((r6 + 32));
}

loc_807B1E60:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r31))) {
        goto loc_807B1E68;
    }
}

loc_807B1E64:
{
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r11));
}

loc_807B1E68:
{
    r6 = MemoryInline::FlatRead8((r8 + 14525));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_807B1E70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B1EC8;
    }
}

loc_807B1E74:
{
    r6 = (r4 & 255);
    r9 = MemoryInline::FlatRead32((r7 + -10456));
    r6 = (r6 * 240);
    r6 = (r9 + r6);
    r30 = MemoryInline::FlatRead32((r6 + 244));
}

loc_807B1E8C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(2))) {
        goto loc_807B1E98;
    }
}

loc_807B1E90:
{
    r6 = 0;
    goto loc_807B1EBC;
}

loc_807B1E98:
{
    r6 = (r9 + r0);
    r6 = MemoryInline::FlatRead32((r6 + 244));
}

loc_807B1EA4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(2))) {
        goto loc_807B1EB0;
    }
}

loc_807B1EA8:
{
    r6 = 0;
    goto loc_807B1EBC;
}

loc_807B1EB0:
{
    r6 = (r6 - r30);
    r6 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r6 = (r6_rot_4 & 134217727);
}

loc_807B1EBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_807B1EC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B1EC8;
    }
}

loc_807B1EC4:
{
    MemoryInline::FlatWrite8((r29 + 9), static_cast<uint8_t>(r11));
}

loc_807B1EC8:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807B1E24;
    }
}

loc_807B1ED0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
}

loc_807B1ED8:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r1 = (r1 + 32);
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B1DB4 func_807B1DB4 preserves=true fpr_mask=0x00000000
