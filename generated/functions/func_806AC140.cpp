#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806AC140(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806AC140;

loc_806AC140:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x809C0000u;
}

loc_806AC150:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 1744));
    r7 = MemoryInline::FlatRead32((r3 + 1748));
    r4 = MemoryInline::FlatRead32((r6 + 8656));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    r0 = MemoryInline::FlatRead32((r3 + 1752));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806AC1C4;
    }
}

loc_806AC184:
{
    r0 = MemoryInline::FlatRead8((r3 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AC18C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AC1AC;
    }
}

loc_806AC190:
{
    r6 = 0x808A0000u;
    r4 = (r1 + 8);
    r6 = (r6 + -10364);
    r5 = (r3 + 1836);
    r3 = (r6 + 6284);
    ctx->lr = 0x806AC1A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806AC200;
}

loc_806AC1AC:
{
    r3 = 0x808A0000u;
    r4 = (r1 + 8);
    r3 = (r3 + -10364);
    r3 = (r3 + 6297);
    ctx->lr = 0x806AC1C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5AC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806AC200;
}

loc_806AC1C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AC1CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AC1EC;
    }
}

loc_806AC1D0:
{
    r6 = 0x808A0000u;
    r4 = (r1 + 8);
    r6 = (r6 + -10364);
    r5 = (r3 + 1836);
    r3 = (r6 + 6310);
    ctx->lr = 0x806AC1E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806AC200;
}

loc_806AC1EC:
{
    r3 = 0x808A0000u;
    r4 = (r1 + 8);
    r3 = (r3 + -10364);
    r3 = (r3 + 6324);
    ctx->lr = 0x806AC200u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5AC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806AC200:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806AC140 func_806AC140 preserves=true fpr_mask=0x00000000
