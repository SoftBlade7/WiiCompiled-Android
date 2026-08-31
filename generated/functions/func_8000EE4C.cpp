#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000EE4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8000EE4C;

loc_8000EE4C:
{
    r6 = 0x80270000u;
    r6 = (r6 + 4424);
    r6 = MemoryInline::FlatRead32((r6 + 56));
    ctr = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000EE60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000EEFC;
    }
}

loc_8000EE64:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = 1;
    r3 = (r3 + 1);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8000EE78:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(255))) {
        goto loc_8000EE80;
    }
}

loc_8000EE7C:
{
    r5 = 0;
}

loc_8000EE80:
{
}

loc_8000EE84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8000EE8C;
    }
}

loc_8000EE88:
{
    goto loc_8000EE94;
}

loc_8000EE8C:
{
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r5_addr_2 = (r5 + r7);
    r7 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_8000EE94:
{
    r0 = MemoryInline::FlatRead8(r4);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r5 = 1;
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8000EEAC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_8000EEB4;
    }
}

loc_8000EEB0:
{
    r5 = 0;
}

loc_8000EEB4:
{
}

loc_8000EEB8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8000EEC0;
    }
}

loc_8000EEBC:
{
    goto loc_8000EEC8;
}

loc_8000EEC0:
{
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r5_addr_4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_4);
}

loc_8000EEC8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_8000EED0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8000EEDC;
    }
}

loc_8000EED4:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8000EEDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000EEE8;
    }
}

loc_8000EEE0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8000EEE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8000EEEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000EEF8;
    }
}

loc_8000EEF0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8000EEF8:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000EE64;
    }
}

loc_8000EEFC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000EE4C func_8000EE4C preserves=true fpr_mask=0x00000000
