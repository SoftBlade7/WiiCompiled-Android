#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8080DA30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8080DA30;

loc_8080DA30:
{
    r4 = 0x809C0000u;
    r5 = 0x808D0000u;
    r0 = MemoryInline::FlatRead8((r4 + 17160));
    r5 = (r5 + 24136);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8080DA44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8080DA54;
    }
}

loc_8080DA48:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17156));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8080DA54:
{
    r6 = MemoryInline::FlatRead16(r5);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = MemoryInline::FlatRead16((r5 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r5 = (r6 + r4);
    r4 = (r0 + r5);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r3 = (r3 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r6));
}

loc_8080DA78:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_8080DA7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r5));
}

loc_8080DA80:
{
    r0 = (r3 - r5);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8080DA8C;
    }
}

loc_8080DA88:
{
    r0 = (r3 - r6);
}

loc_8080DA8C:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000068 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8080DA30 func_8080DA30 preserves=true fpr_mask=0x00000000
