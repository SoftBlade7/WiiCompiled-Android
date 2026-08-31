#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017AE30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8017AE30;

loc_8017AE30:
{
}

loc_8017AE34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8017AE48;
    }
}

loc_8017AE38:
{
    r5 = 0x80340000u;
    r0 = 1;
    r5 = MemoryInline::FlatRead32((r5 + 18768));
    MemoryInline::FlatWrite8((r5 + 142), static_cast<uint8_t>(r0));
}

loc_8017AE48:
{
    r5 = 0x80340000u;
    r5 = MemoryInline::FlatRead32((r5 + 18768));
    r12 = MemoryInline::FlatRead32((r5 + 448));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8017AE58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8017AE5C:
{
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0x00001021 gpr_return=0x00000000 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8017AE30 func_8017AE30 preserves=true fpr_mask=0x00000000
