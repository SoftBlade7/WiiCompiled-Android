#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FB2FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_806FB2FC;

loc_806FB2FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 84));
    // inline leaf 0x805914E4 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 156));
    // end of inlined leaf 0x805914E4
    r4 = 0x808A0000u;
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4452));
    f0.d = MemoryInline::FlatReadFloat64((r3 + 4480));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB330:
{
    MemoryInline::FlatWriteFloat32((r31 + 36), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806FB358;
    }
}

loc_806FB338:
{
    r0 = MemoryInline::FlatRead32(r31);
    r3 = 0x808A0000u;
    r3 = (r3 + 4528);
    r0 = (r0 * 12);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r0 = (r3 + 6);
    MemoryInline::FlatWrite32((r31 + 68), r0);
    goto loc_806FB374;
}

loc_806FB358:
{
    r0 = MemoryInline::FlatRead32(r31);
    r3 = 0x808A0000u;
    r3 = (r3 + 4528);
    r0 = (r0 * 12);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (r3 + 5);
    MemoryInline::FlatWrite32((r31 + 68), r0);
}

loc_806FB374:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4452));
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
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
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000004 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806FB2FC func_806FB2FC preserves=true fpr_mask=0x00000000
