#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009E770(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8009E770;

loc_8009E770:
{
    r5 = (r4 + 8);
    MemoryInline::FlatWrite32((r3 + 44), r5);
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_8009E780:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E78C;
    }
}

loc_8009E784:
{
    r0 = 0;
    goto loc_8009E790;
}

loc_8009E78C:
{
    r0 = (r0 + r5);
}

loc_8009E790:
{
    MemoryInline::FlatWrite32((r3 + 48), r0);
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8009E7A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009E7AC;
    }
}

loc_8009E7A4:
{
    r0 = 0;
    goto loc_8009E7B0;
}

loc_8009E7AC:
{
    r0 = (r4 + r0);
}

loc_8009E7B0:
{
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r4 = MemoryInline::FlatRead32((r5 + 8));
}

loc_8009E7C0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009E7CC;
    }
}

loc_8009E7C4:
{
    r0 = 0;
    goto loc_8009E7D0;
}

loc_8009E7CC:
{
    r0 = (r4 + r0);
}

loc_8009E7D0:
{
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8009E7E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009E7EC;
    }
}

loc_8009E7E4:
{
    r0 = 0;
    goto loc_8009E7F0;
}

loc_8009E7EC:
{
    r0 = (r4 + r0);
}

loc_8009E7F0:
{
    MemoryInline::FlatWrite32((r3 + 60), r0);
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r4 = MemoryInline::FlatRead32((r5 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8009E800:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009E80C;
    }
}

loc_8009E804:
{
    r0 = 0;
    goto loc_8009E810;
}

loc_8009E80C:
{
    r0 = (r4 + r0);
}

loc_8009E810:
{
    MemoryInline::FlatWrite32((r3 + 64), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009E770 func_8009E770 preserves=true fpr_mask=0x00000000
