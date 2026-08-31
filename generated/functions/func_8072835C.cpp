#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072835C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8072835C;

loc_8072835C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + -26048);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 204));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 204), r4);
    r0 = MemoryInline::FlatRead16((r31 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 60);
}

loc_80728398:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_807283A8;
    }
}

loc_8072839C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 204), r0);
    r5 = 1;
}

loc_807283A8:
{
    r4 = MemoryInline::FlatRead32((r3 + 200));
}

loc_807283B0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807283D0;
    }
}

loc_807283B4:
{
}

loc_807283B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_807283E4;
    }
}

loc_807283BC:
{
}

loc_807283C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_80728448;
    }
}

loc_807283C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_807283C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072845C;
    }
}

loc_807283CC:
{
    goto loc_807284B8;
}

loc_807283D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807283D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807284B8;
    }
}

loc_807283D8:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 200), r0);
    goto loc_807284B8;
}

loc_807283E4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    // inline leaf 0x80739548 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80739548
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_807283F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80728404;
    }
}

loc_807283F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_807283FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80728420;
    }
}

loc_80728400:
{
    goto loc_80728438;
}

loc_80728404:
{
    r3 = MemoryInline::FlatRead32((r30 + 192));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    ctx->lr = 0x80728410u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807284D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 196));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    ctx->lr = 0x8072841Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807284D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80728438;
}

loc_80728420:
{
    r3 = MemoryInline::FlatRead32((r30 + 192));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    ctx->lr = 0x8072842Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807284D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 196));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    ctx->lr = 0x80728438u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807284D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80728438:
{
    r3 = MemoryInline::FlatRead32((r30 + 200));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 200), r0);
    goto loc_807284B8;
}

loc_80728448:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8072844C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807284B8;
    }
}

loc_80728450:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 200), r0);
    goto loc_807284B8;
}

loc_8072845C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    // inline leaf 0x80739548 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80739548
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8072846C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072847C;
    }
}

loc_80728470:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80728474:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80728498;
    }
}

loc_80728478:
{
    goto loc_807284B0;
}

loc_8072847C:
{
    r3 = MemoryInline::FlatRead32((r30 + 192));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    ctx->lr = 0x80728488u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807284D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 196));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    ctx->lr = 0x80728494u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807284D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807284B0;
}

loc_80728498:
{
    r3 = MemoryInline::FlatRead32((r30 + 192));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    ctx->lr = 0x807284A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807284D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 196));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    ctx->lr = 0x807284B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807284D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807284B0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 200), r0);
}

loc_807284B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072835C func_8072835C preserves=true fpr_mask=0x00000000
