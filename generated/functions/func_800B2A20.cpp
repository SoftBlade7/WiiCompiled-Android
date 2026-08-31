#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B2A20(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800B2A20;

loc_800B2A20:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r6 = 0;
    r7 = 0;
    r5 = (r3 + r0);
    goto loc_800B2B0C;
}

loc_800B2A38:
{
    r4 = MemoryInline::FlatRead32(r5);
    r0 = (r4 + -1179189248);
}

loc_800B2A44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(20038))) {
        goto loc_800B2A7C;
    }
}

loc_800B2A48:
{
    r0 = (r4 + -1413939200);
}

loc_800B2A50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(19536))) {
        goto loc_800B2AB8;
    }
}

loc_800B2A54:
{
    r0 = (r4 + -1129775104);
}

loc_800B2A5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(17480))) {
        goto loc_800B2AC8;
    }
}

loc_800B2A60:
{
    r0 = (r4 + -1129119744);
}

loc_800B2A68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16720))) {
        goto loc_800B2AE0;
    }
}

loc_800B2A6C:
{
    r0 = (r4 + -1196163072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(18258));
}

loc_800B2A74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B2B00;
    }
}

loc_800B2A78:
{
    goto loc_800B2AF8;
}

loc_800B2A7C:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r6 = (r5 + 8);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::FlatRead32((r5 + 20));
}

loc_800B2A94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B2AA0;
    }
}

loc_800B2A98:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r6 + 12), r0);
}

loc_800B2AA0:
{
    r0 = MemoryInline::FlatRead32((r6 + 16));
}

loc_800B2AA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B2B00;
    }
}

loc_800B2AAC:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r6 + 16), r0);
    goto loc_800B2B00;
}

loc_800B2AB8:
{
    r0 = MemoryInline::FlatRead32((r5 + 28));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    goto loc_800B2B00;
}

loc_800B2AC8:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_800B2AD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B2B00;
    }
}

loc_800B2AD4:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    goto loc_800B2B00;
}

loc_800B2AE0:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_800B2AE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B2B00;
    }
}

loc_800B2AEC:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_800B2B00;
}

loc_800B2AF8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_800B2B00:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r7 = (r7 + 1);
    r5 = (r5 + r0);
}

loc_800B2B0C:
{
    r0 = MemoryInline::FlatRead16((r3 + 14));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_800B2B14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800B2A38;
    }
}

loc_800B2B18:
{
    r4 = 1380319232;
    r0 = (r4 + 20053);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B2A20 func_800B2A20 preserves=true fpr_mask=0x00000000
