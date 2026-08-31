#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801910F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801910F0;

loc_801910F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80340000u;
    r31 = (r31 + 20696);
    // inline leaf 0x80124ED4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26488));
    // end of inlined leaf 0x80124ED4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80191110:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801911B4;
    }
}

loc_80191114:
{
    r0 = MemoryInline::FlatRead32((r31 + 1224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019111C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801911B4;
    }
}

loc_80191120:
{
    r3 = (r31 + 8);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r31 + 4), r3);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r3 + 8), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 84), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 160), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 236), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 312), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 388), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 464), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 540), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 616), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 692), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 768), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 844), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 920), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 996), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 1072), r4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 1148), r4);
    MemoryInline::FlatWriteRam32(r31, r4);
    MemoryInline::FlatWriteRam32((r31 + 1224), r0);
}

loc_801911B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000201B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801910F0 func_801910F0 preserves=true fpr_mask=0x00000000
