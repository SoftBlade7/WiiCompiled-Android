#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80546660(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80546660;

loc_80546660:
{
    r0 = MemoryInline::FlatRead8(r3);
    r7 = 1;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r7));
}

loc_80546670:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8054667C;
    }
}

loc_80546674:
{
    r0 = 99;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8054667C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80546684:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_80546690;
    }
}

loc_80546688:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
}

loc_80546690:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_80546698:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805466A4;
    }
}

loc_8054669C:
{
    r0 = 31;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
}

loc_805466A4:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000081 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80546660 func_80546660 preserves=true fpr_mask=0x00000000
