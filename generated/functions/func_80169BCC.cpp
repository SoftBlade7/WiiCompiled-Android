#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80169BCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80169BCC;

loc_80169BCC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead32((r13 + -25744));
}

loc_80169BEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80169C00;
    }
}

loc_80169BF0:
{
    // inline leaf 0x80193038 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25620));
    // end of inlined leaf 0x80193038
    MemoryInline::FlatWrite32((r13 + -25732), r3);
    // inline leaf 0x80193030 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -25616));
    // end of inlined leaf 0x80193030
    MemoryInline::FlatWrite32((r13 + -25728), r3);
}

loc_80169C00:
{
    r3 = MemoryInline::FlatRead32((r13 + -25732));
    r0 = MemoryInline::FlatRead32((r13 + -25744));
    r3 = (r3 + 31);
    r3 = (r3 & -32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80169C14:
{
    MemoryInline::FlatWrite32((r13 + -25740), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80169C44;
    }
}

loc_80169C1C:
{
    r0 = MemoryInline::FlatRead32((r13 + -25728));
    r4 = (r3 + 64);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80169C28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80169C44;
    }
}

loc_80169C2C:
{
    r3 = 0x80290000u;
    r3 = (r3 + -25312);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80169C3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = -22;
    goto loc_80169CD8;
}

loc_80169C44:
{
    r4 = (r13 + -29400);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -25740));
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801938F8u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80169C5C:
{
    MemoryInline::FlatWrite32((r13 + -29408), r3);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80169C6C;
    }
}

loc_80169C64:
{
    r31 = r3;
    goto loc_80169CD8;
}

loc_80169C6C:
{
    r4 = MemoryInline::FlatRead32((r13 + -25744));
    r30 = MemoryInline::FlatRead32((r13 + -25740));
}

loc_80169C78:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80169CA4;
    }
}

loc_80169C7C:
{
    r0 = MemoryInline::FlatRead32((r13 + -25728));
    r3 = (r30 + 5440);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80169C88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80169CA4;
    }
}

loc_80169C8C:
{
    r3 = 0x80290000u;
    r3 = (r3 + -25312);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80169C9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = -22;
    goto loc_80169CD8;
}

loc_80169CA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80169CA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80169CBC;
    }
}

loc_80169CAC:
{
    r3 = (r30 + 5440);
    // inline leaf 0x80193040 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -25620), r3);
    // end of inlined leaf 0x80193040
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25744), r0);
}

loc_80169CBC:
{
    r3 = r30;
    r4 = 5440;
    ctx->lr = 0x80169CC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801949B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80169CCC:
{
    MemoryInline::FlatWrite32((r13 + -25724), r3);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80169CD8;
    }
}

loc_80169CD4:
{
    r31 = -22;
}

loc_80169CD8:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80169BCC func_80169BCC preserves=true fpr_mask=0x00000000
