#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80191064(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80191064;

loc_80191064:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80340000u;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r4 + 20696));
    r4 = 0;
    goto loc_801910B8;
}

loc_80191090:
{
}

loc_80191094:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r31))) {
        goto loc_801910B4;
    }
}

loc_80191098:
{
}

loc_8019109C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801910AC;
    }
}

loc_801910A0:
{
    MemoryInline::FlatWrite32(r4, r6);
    r4 = r6;
    goto loc_801910B4;
}

loc_801910AC:
{
    r4 = r6;
    r5 = r6;
}

loc_801910B4:
{
    r6 = MemoryInline::FlatRead32(r6);
}

loc_801910B8:
{
}

loc_801910BC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80191090;
    }
}

loc_801910C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801910C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801910D0;
    }
}

loc_801910C8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801910D0:
{
    r4 = 0x80340000u;
    MemoryInline::FlatWriteRam32((r4 + 20696), r5);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80191064 func_80191064 preserves=true fpr_mask=0x00000000
