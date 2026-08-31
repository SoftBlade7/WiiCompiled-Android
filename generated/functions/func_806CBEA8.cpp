#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CBEA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;

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

    goto loc_806CBEA8;

loc_806CBEA8:
{
    r11 = 0;
    r10 = 0;
    r6 = 0;
    r5 = 0x808C0000u;
    r4 = 255;
    r8 = 0x808C0000u;
    goto loc_806CBF08;
}

loc_806CBEC4:
{
    r9 = MemoryInline::FlatRead32((r3 + 224));
    r7 = MemoryInline::FlatRead8((r8 + 17268));
    r9_addr_2 = (r9 + r10);
    r9 = MemoryInline::FlatRead32(r9_addr_2);
    r0 = MemoryInline::FlatRead32((r9 + 196));
}

loc_806CBED8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_806CBF00;
    }
}

loc_806CBEDC:
{
    r0 = MemoryInline::FlatRead8((r3 + 314));
}

loc_806CBEE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806CBF00;
    }
}

loc_806CBEE8:
{
    MemoryInline::FlatWrite16((r9 + 220), static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead8((r5 + 17180));
    MemoryInline::FlatWrite8((r9 + 212), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r9 + 213), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r9 + 214), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r9 + 215), static_cast<uint8_t>(r4));
}

loc_806CBF00:
{
    r10 = (r10 + 4);
    r11 = (r11 + 1);
}

loc_806CBF08:
{
    r0 = MemoryInline::FlatRead8((r3 + 208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r0));
}

loc_806CBF10:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806CBEC4;
    }
}

loc_806CBF14:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806CBEA8 func_806CBEA8 preserves=true fpr_mask=0x00000000
