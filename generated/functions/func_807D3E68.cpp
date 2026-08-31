#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D3E68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D3E68;

loc_807D3E68:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 116));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D3E84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D3EF0;
    }
}

loc_807D3E88:
{
    r4 = 0x808A0000u;
    r3 = r0;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 28932));
    // inline leaf 0x8055AFD0 (8 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = PpcFmulsInline(f1.d, f1.d);
    r4 = MemoryInline::FlatRead32((r4 + 72));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    // end of inlined leaf 0x8055AFD0
    r3 = MemoryInline::FlatRead32((r31 + 256));
}

loc_807D3EA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D3EB4;
    }
}

loc_807D3EA4:
{
    r4 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32((r3 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28936));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_807D3EB4:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
}

loc_807D3EBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807D3ED4;
    }
}

loc_807D3EC0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28936));
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_807D3ED4:
{
    r3 = MemoryInline::FlatRead32((r31 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D3EDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D3EF0;
    }
}

loc_807D3EE0:
{
    r4 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32((r3 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28936));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_807D3EF0:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28932));
    MemoryInline::FlatWriteFloat32((r31 + 172), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D3E68 func_807D3E68 preserves=true fpr_mask=0x00000000
