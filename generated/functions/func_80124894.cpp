#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80124894(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_10 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_addr_3 = 0;
    uint32_t r10_addr_4 = 0;
    uint32_t r10_addr_5 = 0;
    uint32_t r10_addr_6 = 0;
    uint32_t r10_addr_7 = 0;
    uint32_t r10_addr_8 = 0;
    uint32_t r10_addr_9 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r11_addr_4 = 0;
    uint32_t r11_addr_5 = 0;
    uint32_t r11_addr_6 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;

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
    uint32_t xer = ctx->xer;

    goto loc_80124894;

loc_80124894:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r5 = 0x80270000u;
    r5 = (r5 + 4424);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r8 = MemoryInline::FlatRead32((r3 + 24));
    r9 = MemoryInline::FlatRead32((r3 + 4));
    r6 = MemoryInline::FlatRead32((r5 + 56));
}

loc_801248B4:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801248C8;
    }
}

loc_801248C0:
{
    r3 = r8;
    goto loc_80124AE8;
}

loc_801248C8:
{
}

loc_801248CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_801248DC;
    }
}

loc_801248D0:
{
    r8 = 0;
    r4 = (r4 + 1);
    goto loc_801248B4;
}

loc_801248DC:
{
}

loc_801248E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_80124950;
    }
}

loc_801248E4:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801248F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_80124930;
    }
}

loc_801248F4:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80124900:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_80124918;
    }
}

loc_80124904:
{
    r0 = (r8 * 12);
    r4 = (r4 + 3);
    r5 = (r9 + r0);
    r8 = MemoryInline::FlatRead32((r5 + 4));
    goto loc_801248B4;
}

loc_80124918:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012491C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124950;
    }
}

loc_80124920:
{
    r0 = (r8 * 12);
    r3 = (r9 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_80124AE8;
}

loc_80124930:
{
}

loc_80124934:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_80124940;
    }
}

loc_80124938:
{
    r4 = (r4 + 2);
    goto loc_801248B4;
}

loc_80124940:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80124944:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124950;
    }
}

loc_80124948:
{
    r3 = r8;
    goto loc_80124AE8;
}

loc_80124950:
{
    r7 = r4;
    goto loc_8012495C;
}

loc_80124958:
{
    r7 = (r7 + 1);
}

loc_8012495C:
{
    r5 = MemoryInline::FlatRead8(r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80124970;
    }
}

loc_80124968:
{
}

loc_8012496C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_80124958;
    }
}

loc_80124970:
{
    r0 = (r8 * 12);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r7 = (r7 - r4);
    r10 = (0 - r11);
    r5 = (r9 + r0);
    r8 = (r8 + 1);
    r0 = (r10 | r11);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    goto loc_80124ABC;
}

loc_80124998:
{
    r10 = (r8 * 12);
    r12 = (r9 + r10);
}

loc_801249A0:
{
    r31 = MemoryInline::FlatRead32(r12);
    r10 = (r31 & -16777216);
}

loc_801249A8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_801249B4;
    }
}

loc_801249AC:
{
}

loc_801249B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80124A9C;
    }
}

loc_801249B4:
{
    r11 = MemoryInline::FlatRead32((r3 + 16));
    r10 = (r31 & 16777215);
    r30 = (r11 + r10);
    r11_addr_4 = (r11 + r10);
    r10 = MemoryInline::FlatRead8(r11_addr_4);
}

loc_801249C8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(46))) {
        goto loc_801249E4;
    }
}

loc_801249CC:
{
    r10 = MemoryInline::FlatRead8((r30 + 1));
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_801249E4;
    }
}

loc_801249D8:
{
    r12 = (r12 + 12);
    r8 = (r8 + 1);
    goto loc_801249A0;
}

loc_801249E4:
{
    r12 = r4;
    goto loc_80124A64;
}

loc_801249EC:
{
    r11 = MemoryInline::FlatRead8(r30);
    r10 = 0;
    r30 = (r30 + 1);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(0))) {
        goto loc_80124A08;
    }
}

loc_80124A00:
{
}

loc_80124A04:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(256))) {
        goto loc_80124A0C;
    }
}

loc_80124A08:
{
    r10 = 1;
}

loc_80124A0C:
{
}

loc_80124A10:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80124A18;
    }
}

loc_80124A14:
{
    goto loc_80124A20;
}

loc_80124A18:
{
    r10 = MemoryInline::FlatRead32((r6 + 16));
    r10_addr_4 = (r10 + r31);
    r31 = MemoryInline::FlatRead8(r10_addr_4);
}

loc_80124A20:
{
    r11 = MemoryInline::FlatRead8(r12);
    r10 = 0;
    r12 = (r12 + 1);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(0))) {
        goto loc_80124A3C;
    }
}

loc_80124A34:
{
}

loc_80124A38:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(256))) {
        goto loc_80124A40;
    }
}

loc_80124A3C:
{
    r10 = 1;
}

loc_80124A40:
{
}

loc_80124A44:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80124A4C;
    }
}

loc_80124A48:
{
    goto loc_80124A54;
}

loc_80124A4C:
{
    r10 = MemoryInline::FlatRead32((r6 + 16));
    r10_addr_6 = (r10 + r11);
    r11 = MemoryInline::FlatRead8(r10_addr_6);
}

loc_80124A54:
{
}

loc_80124A58:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(r31))) {
        goto loc_80124A64;
    }
}

loc_80124A5C:
{
    r10 = 0;
    goto loc_80124A94;
}

loc_80124A64:
{
    r10 = MemoryInline::FlatRead8(r30);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_801249EC;
    }
}

loc_80124A70:
{
    r10 = MemoryInline::FlatRead8(r12);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
}

loc_80124A7C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(47))) {
        goto loc_80124A88;
    }
}

loc_80124A80:
{
}

loc_80124A84:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80124A90;
    }
}

loc_80124A88:
{
    r10 = 1;
    goto loc_80124A94;
}

loc_80124A90:
{
    r10 = 0;
}

loc_80124A94:
{
}

loc_80124A98:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(1))) {
        goto loc_80124ACC;
    }
}

loc_80124A9C:
{
    r10 = (r8 * 12);
    r11 = (r9 + r10);
    r9_addr_3 = (r9 + r10);
    r10 = MemoryInline::FlatRead32(r9_addr_3);
    r10 = (r10 & -16777216);
}

loc_80124AAC:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80124AB8;
    }
}

loc_80124AB0:
{
    r8 = MemoryInline::FlatRead32((r11 + 8));
    goto loc_80124ABC;
}

loc_80124AB8:
{
    r8 = (r8 + 1);
}

loc_80124ABC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r5));
}

loc_80124AC0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80124998;
    }
}

loc_80124AC4:
{
    r3 = -1;
    goto loc_80124AE8;
}

loc_80124ACC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80124AD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80124ADC;
    }
}

loc_80124AD4:
{
    r3 = r8;
    goto loc_80124AE8;
}

loc_80124ADC:
{
    r4 = (r7 + r4);
    r4 = (r4 + 1);
    goto loc_801248B4;
}

loc_80124AE8:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80124894 func_80124894 preserves=true fpr_mask=0x00000000
