#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016D700(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016D700;

loc_8016D700:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016D704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016D718;
    }
}

loc_8016D708:
{
    MemoryInline::FlatWrite8((r5 + 1317), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r5 + 1316), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite32((r5 + 1312), r0);
    ctx->cr = cr;
    InvokeDirectCpu<0x8016D7BCu>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->cr = cr;
    return;
}

loc_8016D718:
{
    MemoryInline::FlatWrite8((r5 + 1317), static_cast<uint8_t>(r7));
    ctx->cr = cr;
    InvokeDirectCpu<0x8016D7BCu>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFDFF gpr_write=0x00000249 gpr_return=0x00000008 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8016D700 func_8016D700 preserves=true fpr_mask=0x00000000
