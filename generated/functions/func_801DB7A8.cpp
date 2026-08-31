#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DB7A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DB7A8;

loc_801DB7A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x801DB7B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208990u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DB7BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB814;
    }
}

loc_801DB7C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DB7C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DB80C;
    }
}

loc_801DB7C8:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DB7D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DB7D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB7F4;
    }
}

loc_801DB7D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB7E8;
    }
}

loc_801DB7DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DB7E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB7F4;
    }
}

loc_801DB7E4:
{
    goto loc_801DB804;
}

loc_801DB7E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DB7EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB804;
    }
}

loc_801DB7F0:
{
    goto loc_801DB7FC;
}

loc_801DB7F4:
{
    r3 = -46;
    goto loc_801DB818;
}

loc_801DB7FC:
{
    r3 = -38;
    goto loc_801DB818;
}

loc_801DB804:
{
    r3 = -21;
    goto loc_801DB818;
}

loc_801DB80C:
{
    r3 = -21;
    goto loc_801DB818;
}

loc_801DB814:
{
    r3 = 0;
}

loc_801DB818:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DB7A8 func_801DB7A8 preserves=true fpr_mask=0x00000000
