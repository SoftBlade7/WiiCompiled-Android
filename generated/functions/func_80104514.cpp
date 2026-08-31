#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80104514(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80104514;

loc_80104514:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1476));
    goto loc_80104544;
}

loc_80104520:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80104528:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r5))) {
        goto loc_80104540;
    }
}

loc_8010452C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80104530:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80104538;
    }
}

loc_80104534:
{
    MemoryInline::FlatWrite32(r4, r3);
}

loc_80104538:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80104540:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
}

loc_80104544:
{
}

loc_80104548:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80104520;
    }
}

loc_8010454C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80104550:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010455C;
    }
}

loc_80104554:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8010455C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80104514 func_80104514 preserves=true fpr_mask=0x00000000
