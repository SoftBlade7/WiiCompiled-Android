#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FB558(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_806FB558;

loc_806FB558:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f2.d = std::fabs(f1.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 4344);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f3.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 108));
    f2.d = f1.d;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FB640u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 84));
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f0.d = MemoryInline::FlatReadFloat32((r31 + 116));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB5A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FB5D0;
    }
}

loc_806FB5A8:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 108));
    r3 = (r3 + 4528);
    r0 = (r0 * 12);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r0 = (r3 + 5);
    MemoryInline::FlatWrite32((r30 + 68), r0);
    goto loc_806FB628;
}

loc_806FB5D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 152));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB5D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FB604;
    }
}

loc_806FB5DC:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 156));
    r3 = (r3 + 4528);
    r0 = (r0 * 12);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32((r30 + 68), r0);
    goto loc_806FB628;
}

loc_806FB604:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 156));
    r3 = (r3 + 4528);
    r0 = (r0 * 12);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = (r3 + 3);
    MemoryInline::FlatWrite32((r30 + 68), r0);
}

loc_806FB628:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000072 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806FB558 func_806FB558 preserves=true fpr_mask=0x00000000
