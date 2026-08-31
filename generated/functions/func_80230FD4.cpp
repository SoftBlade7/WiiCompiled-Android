#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80230FD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80230FD4;

loc_80230FD4:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 1;
}

loc_80230FE0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80230FF0;
    }
}

loc_80230FE4:
{
}

loc_80230FE8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80230FF0;
    }
}

loc_80230FEC:
{
    r0 = 0;
}

loc_80230FF0:
{
}

loc_80230FF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80231000;
    }
}

loc_80230FF8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_80231004;
}

loc_80231000:
{
    r3 = 0;
}

loc_80231004:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80231008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231014;
    }
}

loc_8023100C:
{
    r3 = MemoryInline::FlatRead32((r3 + 232));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80231014:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80230FD4 func_80230FD4 preserves=true fpr_mask=0x00000000
