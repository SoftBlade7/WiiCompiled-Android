#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80713D64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80713D64;

loc_80713D64:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 136));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80713D70:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80713D74:
{
    r3 = 0x809C0000u;
    r0 = 4;
    r3 = (r3 + 10304);
    r5 = 0;
    ctr = r0;
}

loc_80713D88:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80713D90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80713DBC;
    }
}

loc_80713D94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80713D98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713DA4;
    }
}

loc_80713D9C:
{
    r4 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80713DA8;
}

loc_80713DA4:
{
    r4 = -1;
}

loc_80713DA8:
{
    r3 = 0x809C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + 10304);
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_0, r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80713DBC:
{
    r3 = (r3 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80713D88;
    }
}

loc_80713DC8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
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
// RECOMP_REGISTRATION base 0x80713D64 func_80713D64 preserves=true fpr_mask=0x00000000
