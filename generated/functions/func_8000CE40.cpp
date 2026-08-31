#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000CE40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000CE40;

loc_8000CE40:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r5));
    r7 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_8000CE6C;
}

loc_8000CE54:
{
    r6 = MemoryInline::FlatRead8(r4);
    r5 = (r3 + r7);
    r4 = (r4 + 1);
    r7 = (r7 + 1);
    r0 = (r6 + -48);
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r0));
}

loc_8000CE6C:
{
}

loc_8000CE70:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(36))) {
        goto loc_8000CE80;
    }
}

loc_8000CE74:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000CE54;
    }
}

loc_8000CE80:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8000CE90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8000CE94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_8000CE98:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8000CED0;
    }
}

loc_8000CE9C:
{
    r5 = (r4 + 1);
    goto loc_8000CEB4;
}

loc_8000CEA4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8000CEAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(48))) {
        goto loc_8000CED0;
    }
}

loc_8000CEB0:
{
    r5 = (r5 + 1);
}

loc_8000CEB4:
{
    r4 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000CEA4;
    }
}

loc_8000CEC0:
{
    r4 = (r7 + r3);
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000CECC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8000CED0:
{
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r6 = (r3 + 5);
    r0 = 0;
    r5 = (r6 + r4);
    r5 = (r5 + -1);
}

loc_8000CEE4:
{
    r4 = MemoryInline::FlatRead8(r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
}

loc_8000CEEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8000CEFC;
    }
}

loc_8000CEF0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8000CEFC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_8000CF00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000CF1C;
    }
}

loc_8000CF04:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead16((r3 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8000CF1C:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + -1);
    goto loc_8000CEE4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000CE40 func_8000CE40 preserves=true fpr_mask=0x00000000
