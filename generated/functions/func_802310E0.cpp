#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802310E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802310E0;

loc_802310E0:
{
    r0 = (r3 & 8);
}

loc_802310E4:
{
    r5 = 1;
    r6 = 1;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802310FC;
    }
}

loc_802310F0:
{
    r5 = (r5 | 24);
    r6 = 0;
    goto loc_80231118;
}

loc_802310FC:
{
    r0 = (r3 & 2);
}

loc_80231100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023110C;
    }
}

loc_80231104:
{
    r5 = (r5 | 16);
    r6 = 0;
}

loc_8023110C:
{
    r0 = (r3 & 4);
}

loc_80231110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80231118;
    }
}

loc_80231114:
{
    r5 = (r5 | 8);
}

loc_80231118:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8023111C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231124;
    }
}

loc_80231120:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r6));
}

loc_80231124:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802310E0 func_802310E0 preserves=true fpr_mask=0x00000000
