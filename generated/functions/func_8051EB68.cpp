#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051EB68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051EB68;

loc_8051EB68:
{
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r4));
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10484));
    r0 = MemoryInline::FlatRead8((r5 + 16725));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051EB7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051EBA0;
    }
}

loc_8051EB80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_8051EB84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051EB94;
    }
}

loc_8051EB88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_8051EB8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051EB9C;
    }
}

loc_8051EB90:
{
    goto loc_8051EBA0;
}

loc_8051EB94:
{
    r4 = 4;
    goto loc_8051EBA0;
}

loc_8051EB9C:
{
    r4 = 3;
}

loc_8051EBA0:
{
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051EB68 func_8051EB68 preserves=true fpr_mask=0x00000000
