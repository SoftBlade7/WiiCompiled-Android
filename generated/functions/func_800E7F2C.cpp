#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E7F2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800E7F2C;

loc_800E7F2C:
{
    r7 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r7 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_800E7F38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E7F44;
    }
}

loc_800E7F3C:
{
    r3 = 255;
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

loc_800E7F44:
{
    r3 = 0;
}

loc_800E7F48:
{
    r6 = MemoryInline::FlatRead32((r7 + 48));
    r5 = r7;
    r4 = (r3 & 255);
    r8 = 0;
    ctr = r6;
}

loc_800E7F60:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_800E7F7C;
    }
}

loc_800E7F64:
{
    r0 = MemoryInline::FlatRead8((r5 + 78));
}

loc_800E7F6C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800E7F7C;
    }
}

loc_800E7F70:
{
    r5 = (r5 + 48);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E7F64;
    }
}

loc_800E7F7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r6));
}

loc_800E7F80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800E7F84:
{
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(32));
}

loc_800E7F8C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800E7F48;
    }
}

loc_800E7F90:
{
    r3 = 255;
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

loc_return:
{
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

// RECOMP_GUEST_ABI gpr_read=0x000021F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E7F2C func_800E7F2C preserves=true fpr_mask=0x00000000
