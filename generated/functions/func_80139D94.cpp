#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80139D94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80139D94;

loc_80139D94:
{
    r4 = 0x80330000u;
    r0 = 4;
    r4 = (r4 + 25208);
    r5 = 0;
    r4 = (r4 + 7984);
    ctr = r0;
}

loc_80139DAC:
{
    r0 = MemoryInline::FlatRead8((r4 + 118));
    r0 = (r0 & 128);
}

loc_80139DB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139DCC;
    }
}

loc_80139DB8:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80139DC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80139DCC;
    }
}

loc_80139DC4:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80139DCC:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
}

loc_80139DD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139DF0;
    }
}

loc_80139DDC:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80139DE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80139DF0;
    }
}

loc_80139DE8:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80139DF0:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
}

loc_80139DFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139E14;
    }
}

loc_80139E00:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80139E08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80139E14;
    }
}

loc_80139E0C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80139E14:
{
    r0 = MemoryInline::FlatRead8((r4 + 254));
    r4 = (r4 + 136);
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80139E20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80139E38;
    }
}

loc_80139E24:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80139E2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80139E38;
    }
}

loc_80139E30:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80139E38:
{
    r5 = (r5 + 3);
    r4 = (r4 + 136);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80139DAC;
    }
}

loc_80139E44:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80139D94 func_80139D94 preserves=true fpr_mask=0x00000000
