#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80231A28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80231A28;

loc_80231A28:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = r4;
    r4 = r5;
    r5 = r6;
    ctx->lr = 0x80231A4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DDB34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80231A50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231A70;
    }
}

loc_80231A54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-7));
}

loc_80231A58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231A84;
    }
}

loc_80231A5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_80231A60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231A84;
    }
}

loc_80231A64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-25));
}

loc_80231A68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231A84;
    }
}

loc_80231A6C:
{
    goto loc_80231A98;
}

loc_80231A70:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80231AA8;
}

loc_80231A84:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_80231AA8;
}

loc_80231A98:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 8), r3);
}

loc_80231AA8:
{
    r3 = r0;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007A gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80231A28 func_80231A28 preserves=true fpr_mask=0x00000000
