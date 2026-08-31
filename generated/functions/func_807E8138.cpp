#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807E8138(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807E8138;

loc_807E8138:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_807E8140:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E8160;
    }
}

loc_807E8144:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807E8148:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807E8160;
    }
}

loc_807E814C:
{
    r5 = 0x80000000u;
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r4));
    r0 = (r5 + -1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_807E8160:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807E8164:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_807E8168:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807E816C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807E8170:
{
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807E8138 func_807E8138 preserves=true fpr_mask=0x00000000
