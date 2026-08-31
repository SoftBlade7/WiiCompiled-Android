#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80151880(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80151880;

loc_80151880:
{
    r5 = 0x80340000u;
    r0 = 5;
    r6 = (r3 & 1);
    r7 = (r3 + -1);
    r5 = (r5 + -25816);
    r8 = 0;
    ctr = r0;
}

loc_8015189C:
{
    r0 = (r8 & 65535);
    r0 = (r0 * 164);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 105));
    r9 = (r4 + 104);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801518B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801518F8;
    }
}

loc_801518B8:
{
    r0 = MemoryInline::FlatRead32((r9 + 108));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801518C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801518F8;
    }
}

loc_801518C4:
{
    r4 = MemoryInline::FlatRead8((r9 + 13));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_801518CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801518D8;
    }
}

loc_801518D0:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801518D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801518DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801518F8;
    }
}

loc_801518E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r7));
}

loc_801518E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801518F8;
    }
}

loc_801518E8:
{
    r0 = (r4 + 1);
    r3 = r9;
    MemoryInline::FlatWrite8((r9 + 13), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801518F8:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015189C;
    }
}

loc_80151900:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80151880 func_80151880 preserves=true fpr_mask=0x00000000
