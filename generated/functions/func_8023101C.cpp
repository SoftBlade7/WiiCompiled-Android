#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023101C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023101C;

loc_8023101C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1;
}

loc_80231034:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80231044;
    }
}

loc_80231038:
{
}

loc_8023103C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_80231044;
    }
}

loc_80231040:
{
    r0 = 0;
}

loc_80231044:
{
}

loc_80231048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80231054;
    }
}

loc_8023104C:
{
    r5 = MemoryInline::FlatRead32(r3);
    goto loc_80231058;
}

loc_80231054:
{
    r5 = 0;
}

loc_80231058:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8023105C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231074;
    }
}

loc_80231060:
{
    r0 = MemoryInline::FlatRead32((r5 + 232));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E990u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_8023109C;
}

loc_80231074:
{
}

loc_80231078:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(2))) {
        goto loc_80231084;
    }
}

loc_8023107C:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_80231088;
}

loc_80231084:
{
    r3 = 0;
}

loc_80231088:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023108C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231098;
    }
}

loc_80231090:
{
    r3 = MemoryInline::FlatRead32((r3 + 232));
    goto loc_8023109C;
}

loc_80231098:
{
    r3 = 0;
}

loc_8023109C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000006B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023101C func_8023101C preserves=true fpr_mask=0x00000000
