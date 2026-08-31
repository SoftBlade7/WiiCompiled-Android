#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E7B40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E7B40;

loc_805E7B40:
{
    r5 = MemoryInline::FlatRead16(r4);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
}

loc_805E7B4C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_805E7B58;
    }
}

loc_805E7B50:
{
    r0 = 0;
    goto loc_805E7B68;
}

loc_805E7B58:
{
}

loc_805E7B5C:
{
    r0 = 255;
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(255))) {
        goto loc_805E7B68;
    }
}

loc_805E7B64:
{
    r0 = r5;
}

loc_805E7B68:
{
    r5 = MemoryInline::FlatRead16((r4 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_805E7B74:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_805E7B80;
    }
}

loc_805E7B78:
{
    r0 = 0;
    goto loc_805E7B90;
}

loc_805E7B80:
{
}

loc_805E7B84:
{
    r0 = 255;
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(255))) {
        goto loc_805E7B90;
    }
}

loc_805E7B8C:
{
    r0 = r5;
}

loc_805E7B90:
{
    r5 = MemoryInline::FlatRead16((r4 + 4));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
}

loc_805E7B9C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_805E7BA8;
    }
}

loc_805E7BA0:
{
    r0 = 0;
    goto loc_805E7BB8;
}

loc_805E7BA8:
{
}

loc_805E7BAC:
{
    r0 = 255;
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(255))) {
        goto loc_805E7BB8;
    }
}

loc_805E7BB4:
{
    r0 = r5;
}

loc_805E7BB8:
{
    r4 = MemoryInline::FlatRead16((r4 + 6));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805E7BC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805E7BD0;
    }
}

loc_805E7BC8:
{
    r0 = 0;
    goto loc_805E7BE0;
}

loc_805E7BD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(255));
}

loc_805E7BD4:
{
    r0 = 255;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805E7BE0;
    }
}

loc_805E7BDC:
{
    r0 = r4;
}

loc_805E7BE0:
{
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32(r3, r0);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E7B40 func_805E7B40 preserves=true fpr_mask=0x00000000
