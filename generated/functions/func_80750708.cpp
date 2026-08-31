#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80750708(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80750708;

loc_80750708:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    r4 = (r4 + 12000);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 704));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80750730:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80750744;
    }
}

loc_80750734:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 708));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8075073C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80750744;
    }
}

loc_80750740:
{
    r0 = 1;
}

loc_80750744:
{
}

loc_80750748:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80750754;
    }
}

loc_8075074C:
{
    f3.d = f1.d;
    goto loc_80750758;
}

loc_80750754:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 624));
}

loc_80750758:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 636));
    r0 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80750768:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8075077C;
    }
}

loc_8075076C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 652));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80750774:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8075077C;
    }
}

loc_80750778:
{
    r0 = 1;
}

loc_8075077C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80750780:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80750788;
    }
}

loc_80750784:
{
    goto loc_8075078C;
}

loc_80750788:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 624));
}

loc_8075078C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    r4 = (r1 + 8);
    r7 = MemoryInline::FlatRead32((r3 + 60));
    r6 = 0;
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r7 = (r7 + -3);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r5 = (r5_rot_0 & 134217727);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    ctx->lr = 0x807507C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8074E030u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r4 = 2;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r3 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWrite8((r3 + 249), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF1F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80750708 func_80750708 preserves=true fpr_mask=0x00000000
