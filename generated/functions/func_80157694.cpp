#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80157694(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80157694;

loc_80157694:
{
    r5 = 0x80340000u;
    r0 = 664;
    r5 = (r5 + -24768);
    r4 = MemoryInline::FlatRead16((r5 + 4642));
    r6 = (r5 + 4644);
    r4 = (r4 * 664);
    r4 = (r5 + r4);
    r5 = (r4 + 4644);
    r4 = (r5 + 663);
    r4 = (r4 - r6);
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_801576C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801576E8;
    }
}

loc_801576CC:
{
    r0 = MemoryInline::FlatRead32(r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801576D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801576E0;
    }
}

loc_801576D8:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801576E0:
{
    r6 = (r6 + 664);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801576CC;
    }
}

loc_801576E8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000049 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80157694 func_80157694 preserves=true fpr_mask=0x00000000
