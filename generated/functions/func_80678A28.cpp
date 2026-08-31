#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80678A28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80678A28;

loc_80678A28:
{
    MemoryInline::FlatWriteRam32((r1 + -528), r1);
    r1 = (r1 + -528);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 532), r0);
    MemoryInline::FlatWriteRam32((r1 + 524), r31);
    r31 = r3;
    r3 = (r1 + 8);
    ctx->lr = 0x80678A44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E9848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80678A48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80678A68;
    }
}

loc_80678A4C:
{
}

loc_80678A50:
{
    MemoryInline::FlatWrite32(r31, r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-13))) {
        goto loc_80678A60;
    }
}

loc_80678A58:
{
    r3 = 1;
    goto loc_80678A6C;
}

loc_80678A60:
{
    r3 = 4;
    goto loc_80678A6C;
}

loc_80678A68:
{
    r3 = 0;
}

loc_80678A6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80678A70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678A78;
    }
}

loc_80678A74:
{
    goto loc_80678A98;
}

loc_80678A78:
{
    r3 = (r1 + 8);
    ctx->lr = 0x80678A80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E9F48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80678A84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80678A94;
    }
}

loc_80678A88:
{
    MemoryInline::FlatWrite32(r31, r3);
    r3 = 4;
    goto loc_80678A98;
}

loc_80678A94:
{
    r3 = 0;
}

loc_80678A98:
{
    r0 = MemoryInline::FlatRead32((r1 + 532));
    r31 = MemoryInline::FlatRead32((r1 + 524));
    ctx->lr = r0;
    r1 = (r1 + 528);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80678A28 func_80678A28 preserves=true fpr_mask=0x00000000
