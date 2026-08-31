#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80078030(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80078030;

loc_80078030:
{
    r7 = MemoryInline::FlatRead32(r3);
    r6 = 0;
}

loc_8007803C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80078050;
    }
}

loc_80078040:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80078048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078050;
    }
}

loc_8007804C:
{
    r6 = 1;
}

loc_80078050:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80078054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80078098;
    }
}

loc_80078058:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
}

loc_8007805C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80078098;
    }
}

loc_80078060:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80078064:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007807C;
    }
}

loc_80078068:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = -1;
    r3 = 1;
    r5_addr_0 = (r5 + r4);
    MemoryInline::FlatWrite8(r5_addr_0, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_8007807C:
{
    r0 = MemoryInline::FlatRead16(r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80078084:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80078098;
    }
}

loc_80078088:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 1;
    r6_addr_0 = (r6 + r4);
    MemoryInline::FlatWrite8(r6_addr_0, static_cast<uint8_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80078098:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80078030 func_80078030 preserves=true fpr_mask=0x00000000
