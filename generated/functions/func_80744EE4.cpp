#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80744EE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80744EE4;

loc_80744EE4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 188));
    r4 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80744F10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80744F1C;
    }
}

loc_80744F14:
{
    r3 = 0;
    goto loc_80744F64;
}

loc_80744F1C:
{
    r4 = MemoryInline::FlatRead32((r3 + 236));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 236), r0);
    r3 = MemoryInline::FlatRead32((r5 + 8));
    // inline leaf 0x8073BA70 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 4));
    // end of inlined leaf 0x8073BA70
}

loc_80744F34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80744F40;
    }
}

loc_80744F38:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 236), r0);
}

loc_80744F40:
{
    r3 = 0x808D0000u;
    r0 = MemoryInline::FlatRead32((r31 + 236));
    r3 = MemoryInline::FlatRead16((r3 + -18912));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_80744F50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80744F60;
    }
}

loc_80744F54:
{
    MemoryInline::FlatWrite32((r31 + 236), r3);
    r3 = 1;
    goto loc_80744F64;
}

loc_80744F60:
{
    r3 = 0;
}

loc_80744F64:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
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

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80744EE4 func_80744EE4 preserves=true fpr_mask=0x00000000
