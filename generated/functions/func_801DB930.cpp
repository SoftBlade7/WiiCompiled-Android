#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DB930(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DB930;

loc_801DB930:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x801DB940u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208414u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DB944:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB99C;
    }
}

loc_801DB948:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DB94C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DB994;
    }
}

loc_801DB950:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DB958u;
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

loc_801DB95C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB97C;
    }
}

loc_801DB960:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB970;
    }
}

loc_801DB964:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DB968:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB97C;
    }
}

loc_801DB96C:
{
    goto loc_801DB98C;
}

loc_801DB970:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DB974:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB98C;
    }
}

loc_801DB978:
{
    goto loc_801DB984;
}

loc_801DB97C:
{
    r3 = -46;
    goto loc_801DB9A0;
}

loc_801DB984:
{
    r3 = -38;
    goto loc_801DB9A0;
}

loc_801DB98C:
{
    r3 = -43;
    goto loc_801DB9A0;
}

loc_801DB994:
{
    r3 = -43;
    goto loc_801DB9A0;
}

loc_801DB99C:
{
    r3 = 0;
}

loc_801DB9A0:
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
// RECOMP_REGISTRATION base 0x801DB930 func_801DB930 preserves=true fpr_mask=0x00000000
