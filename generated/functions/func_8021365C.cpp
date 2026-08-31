#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021365C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8021365C;

loc_8021365C:
{
    r8 = MemoryInline::FlatRead32((r13 + -24144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80213664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80213688;
    }
}

loc_80213668:
{
    r0 = MemoryInline::FlatRead32((r8 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80213670:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80213680;
    }
}

loc_80213674:
{
    r0 = MemoryInline::FlatRead32((r8 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8021367C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80213688;
    }
}

loc_80213680:
{
    r3 = 128;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80213688:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A1800u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFDFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8021365C func_8021365C preserves=true fpr_mask=0x00000000
