#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083E8D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8083E8D8;

loc_8083E8D8:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8083E8E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_8083E8E4:
{
    r0 = MemoryInline::FlatRead32((r4 + 576));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-100));
}

loc_8083E8EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8083E8F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 2308));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8083E8F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_8083E8FC:
{
    r0 = (r5 * 392);
    r4 = MemoryInline::FlatRead32((r3 + 2324));
    r6 = 1;
    r4 = (r4 + r0);
    MemoryInline::FlatWrite8((r4 + 128), static_cast<uint8_t>(r6));
    r0 = (r5 * 376);
    r3 = MemoryInline::FlatRead32((r3 + 2320));
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DFC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8083E8D8 func_8083E8D8 preserves=true fpr_mask=0x00000000
