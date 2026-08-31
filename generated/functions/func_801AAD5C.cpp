#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AAD5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AAD5C;

loc_801AAD5C:
{
    r3 = PPC_Mftbu();
    r4 = PPC_Mftb();
    r5 = PPC_Mftbu();
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r5));
}

loc_801AAD6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AAD5C;
    }
}

loc_801AAD70:
{
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801AAD5C func_801AAD5C preserves=true fpr_mask=0x00000000
