#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067686C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8067686C;

loc_8067686C:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80676874:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806768FC;
    }
}

loc_80676878:
{
    r5 = (r3 + 400);
    r8 = 0;
    r0 = 5;
}

loc_80676884:
{
    r6 = r5;
    r7 = r4;
    ctr = r0;
}

loc_80676890:
{
    r3 = MemoryInline::FlatRead16((r6 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_80676898:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806768CC;
    }
}

loc_8067689C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(9999));
}

loc_806768A0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806768CC;
    }
}

loc_806768A4:
{
    r3 = MemoryInline::FlatRead16(r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_806768AC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806768CC;
    }
}

loc_806768B0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(9999));
}

loc_806768B4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806768CC;
    }
}

loc_806768B8:
{
    r3 = MemoryInline::FlatRead16(r6);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r6 + 2));
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r3));
    goto loc_806768D4;
}

loc_806768CC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806768D4:
{
    r6 = (r6 + 4);
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80676890;
    }
}

loc_806768E0:
{
    r8 = (r8 + 1);
    r4 = (r4 + 20);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(2));
}

loc_806768EC:
{
    r5 = (r5 + 20);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80676884;
    }
}

loc_806768F4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_806768FC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8067686C func_8067686C preserves=true fpr_mask=0x00000000
