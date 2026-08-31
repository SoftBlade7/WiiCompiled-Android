#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80517D8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80517D8C;

loc_80517D8C:
{
    r8 = 0;
    r6 = 255;
    goto loc_80517DF8;
}

loc_80517D98:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r8 & 255);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_80517DA8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80517DF4;
    }
}

loc_80517DAC:
{
    r9 = r8;
    goto loc_80517DCC;
}

loc_80517DB4:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r9 & 255);
    r9 = (r9 + 1);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_80517DCC:
{
    r5 = MemoryInline::FlatRead8((r3 + 16));
    r7 = (r9 & 255);
    r0 = (r5 + -1);
}

loc_80517DDC:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_80517DB4;
    }
}

loc_80517DE0:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r5_addr_3 = (r5 + r7);
    MemoryInline::FlatWrite8(r5_addr_3, static_cast<uint8_t>(r6));
    r5 = MemoryInline::FlatRead8((r3 + 16));
    r0 = (r5 + -1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
}

loc_80517DF4:
{
    r8 = (r8 + 1);
}

loc_80517DF8:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r5 = (r8 & 255);
}

loc_80517E04:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_80517D98;
    }
}

loc_80517E08:
{
    r8 = 0;
    r6 = 255;
    goto loc_80517E74;
}

loc_80517E14:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r8 & 255);
    r5_addr_6 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_6);
}

loc_80517E24:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80517E70;
    }
}

loc_80517E28:
{
    r9 = r8;
    goto loc_80517E48;
}

loc_80517E30:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r9 & 255);
    r9 = (r9 + 1);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_80517E48:
{
    r5 = MemoryInline::FlatRead8((r3 + 17));
    r7 = (r9 & 255);
    r0 = (r5 + -1);
}

loc_80517E58:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_80517E30;
    }
}

loc_80517E5C:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r5_addr_7 = (r5 + r7);
    MemoryInline::FlatWrite8(r5_addr_7, static_cast<uint8_t>(r6));
    r5 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r5 + -1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
}

loc_80517E70:
{
    r8 = (r8 + 1);
}

loc_80517E74:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r5 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80517E80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80517E14;
    }
}

loc_80517E84:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80517D8C func_80517D8C preserves=true fpr_mask=0x00000000
