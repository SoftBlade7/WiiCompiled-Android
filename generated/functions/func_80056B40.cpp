#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80056B40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80056B40;

loc_80056B40:
{
    r3 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead16((r3 + 66));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_80056B4C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80056B58;
    }
}

loc_80056B50:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80056B58:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_80056B60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80056B6C;
    }
}

loc_80056B64:
{
    r3 = (r3 + r0);
    goto loc_80056B70;
}

loc_80056B6C:
{
    r3 = 0;
}

loc_80056B70:
{
    r0 = (r4 * 40);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80056B80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80056B84:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80056B40 func_80056B40 preserves=true fpr_mask=0x00000000
