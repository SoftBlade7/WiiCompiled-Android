#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80242EB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80242EB8;

loc_80242EB8:
{
    r0 = MemoryInline::FlatRead32((r3 + 80));
    r6 = 0;
    r4 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80242ECC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80242F14;
    }
}

loc_80242ED0:
{
    r5 = MemoryInline::FlatRead32((r3 + 76));
    r5_addr_2 = (r5 + r4);
    r0 = MemoryInline::FlatRead32(r5_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80242EDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80242F08;
    }
}

loc_80242EE0:
{
    r6 = (r6 * 24);
    r0 = 0;
    r4 = (r5 + r6);
    r5_addr_3 = (r5 + r6);
    MemoryInline::FlatWrite32(r5_addr_3, r0);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    MemoryInline::FlatWrite32((r4 + 20), r0);
    r0 = MemoryInline::FlatRead32((r3 + 76));
    r3 = (r0 + r6);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80242F08:
{
    r4 = (r4 + 24);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80242ED0;
    }
}

loc_80242F14:
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

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80242EB8 func_80242EB8 preserves=true fpr_mask=0x00000000
